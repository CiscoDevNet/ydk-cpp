#ifndef _LLDP_MIB_
#define _LLDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace LLDP_MIB {

class LLDPMIB : public ydk::Entity
{
    public:
        LLDPMIB();
        ~LLDPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Lldpconfiguration; //type: LLDPMIB::Lldpconfiguration
        class Lldpstatistics; //type: LLDPMIB::Lldpstatistics
        class Lldplocalsystemdata; //type: LLDPMIB::Lldplocalsystemdata
        class Lldpportconfigtable; //type: LLDPMIB::Lldpportconfigtable
        class Lldpstatstxporttable; //type: LLDPMIB::Lldpstatstxporttable
        class Lldpstatsrxporttable; //type: LLDPMIB::Lldpstatsrxporttable
        class Lldplocporttable; //type: LLDPMIB::Lldplocporttable
        class Lldplocmanaddrtable; //type: LLDPMIB::Lldplocmanaddrtable
        class Lldpremtable; //type: LLDPMIB::Lldpremtable
        class Lldpremmanaddrtable; //type: LLDPMIB::Lldpremmanaddrtable
        class Lldpremunknowntlvtable; //type: LLDPMIB::Lldpremunknowntlvtable
        class Lldpremorgdefinfotable; //type: LLDPMIB::Lldpremorgdefinfotable

        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpconfiguration> lldpconfiguration;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpstatistics> lldpstatistics;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldplocalsystemdata> lldplocalsystemdata;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpportconfigtable> lldpportconfigtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpstatstxporttable> lldpstatstxporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpstatsrxporttable> lldpstatsrxporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldplocporttable> lldplocporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldplocmanaddrtable> lldplocmanaddrtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable> lldpremtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremmanaddrtable> lldpremmanaddrtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremunknowntlvtable> lldpremunknowntlvtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremorgdefinfotable> lldpremorgdefinfotable;
        
}; // LLDPMIB


class LLDPMIB::Lldpconfiguration : public ydk::Entity
{
    public:
        Lldpconfiguration();
        ~Lldpconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpmessagetxinterval; //type: int32
        ydk::YLeaf lldpmessagetxholdmultiplier; //type: int32
        ydk::YLeaf lldpreinitdelay; //type: int32
        ydk::YLeaf lldptxdelay; //type: int32
        ydk::YLeaf lldpnotificationinterval; //type: int32

}; // LLDPMIB::Lldpconfiguration


class LLDPMIB::Lldpstatistics : public ydk::Entity
{
    public:
        Lldpstatistics();
        ~Lldpstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpstatsremtableslastchangetime; //type: uint32
        ydk::YLeaf lldpstatsremtablesinserts; //type: uint32
        ydk::YLeaf lldpstatsremtablesdeletes; //type: uint32
        ydk::YLeaf lldpstatsremtablesdrops; //type: uint32
        ydk::YLeaf lldpstatsremtablesageouts; //type: uint32

}; // LLDPMIB::Lldpstatistics


class LLDPMIB::Lldplocalsystemdata : public ydk::Entity
{
    public:
        Lldplocalsystemdata();
        ~Lldplocalsystemdata();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldplocchassisidsubtype; //type: LldpChassisIdSubtype
        ydk::YLeaf lldplocchassisid; //type: binary
        ydk::YLeaf lldplocsysname; //type: string
        ydk::YLeaf lldplocsysdesc; //type: string
        ydk::YLeaf lldplocsyscapsupported; //type: LldpSystemCapabilitiesMap
        ydk::YLeaf lldplocsyscapenabled; //type: LldpSystemCapabilitiesMap

}; // LLDPMIB::Lldplocalsystemdata


class LLDPMIB::Lldpportconfigtable : public ydk::Entity
{
    public:
        Lldpportconfigtable();
        ~Lldpportconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpportconfigentry; //type: LLDPMIB::Lldpportconfigtable::Lldpportconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpportconfigtable::Lldpportconfigentry> > lldpportconfigentry;
        
}; // LLDPMIB::Lldpportconfigtable


class LLDPMIB::Lldpportconfigtable::Lldpportconfigentry : public ydk::Entity
{
    public:
        Lldpportconfigentry();
        ~Lldpportconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpportconfigportnum; //type: int32
        ydk::YLeaf lldpportconfigadminstatus; //type: Lldpportconfigadminstatus
        ydk::YLeaf lldpportconfignotificationenable; //type: boolean
        ydk::YLeaf lldpportconfigtlvstxenable; //type: Lldpportconfigtlvstxenable
        class Lldpportconfigadminstatus;

}; // LLDPMIB::Lldpportconfigtable::Lldpportconfigentry


class LLDPMIB::Lldpstatstxporttable : public ydk::Entity
{
    public:
        Lldpstatstxporttable();
        ~Lldpstatstxporttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpstatstxportentry; //type: LLDPMIB::Lldpstatstxporttable::Lldpstatstxportentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpstatstxporttable::Lldpstatstxportentry> > lldpstatstxportentry;
        
}; // LLDPMIB::Lldpstatstxporttable


class LLDPMIB::Lldpstatstxporttable::Lldpstatstxportentry : public ydk::Entity
{
    public:
        Lldpstatstxportentry();
        ~Lldpstatstxportentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpstatstxportnum; //type: int32
        ydk::YLeaf lldpstatstxportframestotal; //type: uint32

}; // LLDPMIB::Lldpstatstxporttable::Lldpstatstxportentry


class LLDPMIB::Lldpstatsrxporttable : public ydk::Entity
{
    public:
        Lldpstatsrxporttable();
        ~Lldpstatsrxporttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpstatsrxportentry; //type: LLDPMIB::Lldpstatsrxporttable::Lldpstatsrxportentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpstatsrxporttable::Lldpstatsrxportentry> > lldpstatsrxportentry;
        
}; // LLDPMIB::Lldpstatsrxporttable


class LLDPMIB::Lldpstatsrxporttable::Lldpstatsrxportentry : public ydk::Entity
{
    public:
        Lldpstatsrxportentry();
        ~Lldpstatsrxportentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpstatsrxportnum; //type: int32
        ydk::YLeaf lldpstatsrxportframesdiscardedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxportframeserrors; //type: uint32
        ydk::YLeaf lldpstatsrxportframestotal; //type: uint32
        ydk::YLeaf lldpstatsrxporttlvsdiscardedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxporttlvsunrecognizedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxportageoutstotal; //type: uint32

}; // LLDPMIB::Lldpstatsrxporttable::Lldpstatsrxportentry


class LLDPMIB::Lldplocporttable : public ydk::Entity
{
    public:
        Lldplocporttable();
        ~Lldplocporttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldplocportentry; //type: LLDPMIB::Lldplocporttable::Lldplocportentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldplocporttable::Lldplocportentry> > lldplocportentry;
        
}; // LLDPMIB::Lldplocporttable


class LLDPMIB::Lldplocporttable::Lldplocportentry : public ydk::Entity
{
    public:
        Lldplocportentry();
        ~Lldplocportentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldplocportnum; //type: int32
        ydk::YLeaf lldplocportidsubtype; //type: LldpPortIdSubtype
        ydk::YLeaf lldplocportid; //type: binary
        ydk::YLeaf lldplocportdesc; //type: string

}; // LLDPMIB::Lldplocporttable::Lldplocportentry


class LLDPMIB::Lldplocmanaddrtable : public ydk::Entity
{
    public:
        Lldplocmanaddrtable();
        ~Lldplocmanaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldplocmanaddrentry; //type: LLDPMIB::Lldplocmanaddrtable::Lldplocmanaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldplocmanaddrtable::Lldplocmanaddrentry> > lldplocmanaddrentry;
        
}; // LLDPMIB::Lldplocmanaddrtable


class LLDPMIB::Lldplocmanaddrtable::Lldplocmanaddrentry : public ydk::Entity
{
    public:
        Lldplocmanaddrentry();
        ~Lldplocmanaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldplocmanaddrsubtype; //type: AddressFamilyNumbers
        ydk::YLeaf lldplocmanaddr; //type: binary
        ydk::YLeaf lldplocmanaddrlen; //type: int32
        ydk::YLeaf lldplocmanaddrifsubtype; //type: LldpManAddrIfSubtype
        ydk::YLeaf lldplocmanaddrifid; //type: int32
        ydk::YLeaf lldplocmanaddroid; //type: string
        ydk::YLeaf lldpconfigmanaddrportstxenable; //type: binary

}; // LLDPMIB::Lldplocmanaddrtable::Lldplocmanaddrentry


class LLDPMIB::Lldpremtable : public ydk::Entity
{
    public:
        Lldpremtable();
        ~Lldpremtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldprementry; //type: LLDPMIB::Lldpremtable::Lldprementry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry> > lldprementry;
        
}; // LLDPMIB::Lldpremtable


class LLDPMIB::Lldpremtable::Lldprementry : public ydk::Entity
{
    public:
        Lldprementry();
        ~Lldprementry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lldpremtimemark; //type: uint32
        ydk::YLeaf lldpremlocalportnum; //type: int32
        ydk::YLeaf lldpremindex; //type: int32
        ydk::YLeaf lldpremchassisidsubtype; //type: LldpChassisIdSubtype
        ydk::YLeaf lldpremchassisid; //type: binary
        ydk::YLeaf lldpremportidsubtype; //type: LldpPortIdSubtype
        ydk::YLeaf lldpremportid; //type: binary
        ydk::YLeaf lldpremportdesc; //type: string
        ydk::YLeaf lldpremsysname; //type: string
        ydk::YLeaf lldpremsysdesc; //type: string
        ydk::YLeaf lldpremsyscapsupported; //type: LldpSystemCapabilitiesMap
        ydk::YLeaf lldpremsyscapenabled; //type: LldpSystemCapabilitiesMap

}; // LLDPMIB::Lldpremtable::Lldprementry


class LLDPMIB::Lldpremmanaddrtable : public ydk::Entity
{
    public:
        Lldpremmanaddrtable();
        ~Lldpremmanaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpremmanaddrentry; //type: LLDPMIB::Lldpremmanaddrtable::Lldpremmanaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremmanaddrtable::Lldpremmanaddrentry> > lldpremmanaddrentry;
        
}; // LLDPMIB::Lldpremmanaddrtable


class LLDPMIB::Lldpremmanaddrtable::Lldpremmanaddrentry : public ydk::Entity
{
    public:
        Lldpremmanaddrentry();
        ~Lldpremmanaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremmanaddrsubtype; //type: AddressFamilyNumbers
        ydk::YLeaf lldpremmanaddr; //type: binary
        ydk::YLeaf lldpremmanaddrifsubtype; //type: LldpManAddrIfSubtype
        ydk::YLeaf lldpremmanaddrifid; //type: int32
        ydk::YLeaf lldpremmanaddroid; //type: string

}; // LLDPMIB::Lldpremmanaddrtable::Lldpremmanaddrentry


class LLDPMIB::Lldpremunknowntlvtable : public ydk::Entity
{
    public:
        Lldpremunknowntlvtable();
        ~Lldpremunknowntlvtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpremunknowntlventry; //type: LLDPMIB::Lldpremunknowntlvtable::Lldpremunknowntlventry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremunknowntlvtable::Lldpremunknowntlventry> > lldpremunknowntlventry;
        
}; // LLDPMIB::Lldpremunknowntlvtable


class LLDPMIB::Lldpremunknowntlvtable::Lldpremunknowntlventry : public ydk::Entity
{
    public:
        Lldpremunknowntlventry();
        ~Lldpremunknowntlventry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremunknowntlvtype; //type: int32
        ydk::YLeaf lldpremunknowntlvinfo; //type: binary

}; // LLDPMIB::Lldpremunknowntlvtable::Lldpremunknowntlventry


class LLDPMIB::Lldpremorgdefinfotable : public ydk::Entity
{
    public:
        Lldpremorgdefinfotable();
        ~Lldpremorgdefinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Lldpremorgdefinfoentry; //type: LLDPMIB::Lldpremorgdefinfotable::Lldpremorgdefinfoentry

        std::vector<std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremorgdefinfotable::Lldpremorgdefinfoentry> > lldpremorgdefinfoentry;
        
}; // LLDPMIB::Lldpremorgdefinfotable


class LLDPMIB::Lldpremorgdefinfotable::Lldpremorgdefinfoentry : public ydk::Entity
{
    public:
        Lldpremorgdefinfoentry();
        ~Lldpremorgdefinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremorgdefinfooui; //type: binary
        ydk::YLeaf lldpremorgdefinfosubtype; //type: int32
        ydk::YLeaf lldpremorgdefinfoindex; //type: int32
        ydk::YLeaf lldpremorgdefinfo; //type: binary

}; // LLDPMIB::Lldpremorgdefinfotable::Lldpremorgdefinfoentry

class LldpChassisIdSubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf chassisComponent;
        static const ydk::Enum::YLeaf interfaceAlias;
        static const ydk::Enum::YLeaf portComponent;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf networkAddress;
        static const ydk::Enum::YLeaf interfaceName;
        static const ydk::Enum::YLeaf local;

};

class LldpPortIdSubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interfaceAlias;
        static const ydk::Enum::YLeaf portComponent;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf networkAddress;
        static const ydk::Enum::YLeaf interfaceName;
        static const ydk::Enum::YLeaf agentCircuitId;
        static const ydk::Enum::YLeaf local;

};

class LldpManAddrIfSubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ifIndex;
        static const ydk::Enum::YLeaf systemPortNumber;

};

class LLDPMIB::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf txOnly;
        static const ydk::Enum::YLeaf rxOnly;
        static const ydk::Enum::YLeaf txAndRx;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _LLDP_MIB_ */

