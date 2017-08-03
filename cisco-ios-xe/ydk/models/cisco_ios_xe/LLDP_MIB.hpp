#ifndef _LLDP_MIB_
#define _LLDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace LLDP_MIB {

class LldpMib : public ydk::Entity
{
    public:
        LldpMib();
        ~LldpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Lldpconfiguration; //type: LldpMib::Lldpconfiguration
        class Lldpstatistics; //type: LldpMib::Lldpstatistics
        class Lldplocalsystemdata; //type: LldpMib::Lldplocalsystemdata
        class Lldpportconfigtable; //type: LldpMib::Lldpportconfigtable
        class Lldpstatstxporttable; //type: LldpMib::Lldpstatstxporttable
        class Lldpstatsrxporttable; //type: LldpMib::Lldpstatsrxporttable
        class Lldplocporttable; //type: LldpMib::Lldplocporttable
        class Lldplocmanaddrtable; //type: LldpMib::Lldplocmanaddrtable
        class Lldpremtable; //type: LldpMib::Lldpremtable
        class Lldpremmanaddrtable; //type: LldpMib::Lldpremmanaddrtable
        class Lldpremunknowntlvtable; //type: LldpMib::Lldpremunknowntlvtable
        class Lldpremorgdefinfotable; //type: LldpMib::Lldpremorgdefinfotable

        std::shared_ptr<LLDP_MIB::LldpMib::Lldpconfiguration> lldpconfiguration;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldplocalsystemdata> lldplocalsystemdata;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldplocmanaddrtable> lldplocmanaddrtable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldplocporttable> lldplocporttable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpportconfigtable> lldpportconfigtable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpremmanaddrtable> lldpremmanaddrtable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpremorgdefinfotable> lldpremorgdefinfotable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpremtable> lldpremtable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpremunknowntlvtable> lldpremunknowntlvtable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpstatistics> lldpstatistics;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpstatsrxporttable> lldpstatsrxporttable;
        std::shared_ptr<LLDP_MIB::LldpMib::Lldpstatstxporttable> lldpstatstxporttable;
        
}; // LldpMib


class LldpMib::Lldpconfiguration : public ydk::Entity
{
    public:
        Lldpconfiguration();
        ~Lldpconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpmessagetxinterval; //type: int32
        ydk::YLeaf lldpmessagetxholdmultiplier; //type: int32
        ydk::YLeaf lldpreinitdelay; //type: int32
        ydk::YLeaf lldptxdelay; //type: int32
        ydk::YLeaf lldpnotificationinterval; //type: int32

}; // LldpMib::Lldpconfiguration


class LldpMib::Lldpstatistics : public ydk::Entity
{
    public:
        Lldpstatistics();
        ~Lldpstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpstatsremtableslastchangetime; //type: uint32
        ydk::YLeaf lldpstatsremtablesinserts; //type: uint32
        ydk::YLeaf lldpstatsremtablesdeletes; //type: uint32
        ydk::YLeaf lldpstatsremtablesdrops; //type: uint32
        ydk::YLeaf lldpstatsremtablesageouts; //type: uint32

}; // LldpMib::Lldpstatistics


class LldpMib::Lldplocalsystemdata : public ydk::Entity
{
    public:
        Lldplocalsystemdata();
        ~Lldplocalsystemdata();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldplocchassisidsubtype; //type: Lldpchassisidsubtype
        ydk::YLeaf lldplocchassisid; //type: binary
        ydk::YLeaf lldplocsysname; //type: string
        ydk::YLeaf lldplocsysdesc; //type: string
        ydk::YLeaf lldplocsyscapsupported; //type: Lldpsystemcapabilitiesmap
        ydk::YLeaf lldplocsyscapenabled; //type: Lldpsystemcapabilitiesmap

}; // LldpMib::Lldplocalsystemdata


class LldpMib::Lldpportconfigtable : public ydk::Entity
{
    public:
        Lldpportconfigtable();
        ~Lldpportconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpportconfigentry; //type: LldpMib::Lldpportconfigtable::Lldpportconfigentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpportconfigtable::Lldpportconfigentry> > lldpportconfigentry;
        
}; // LldpMib::Lldpportconfigtable


class LldpMib::Lldpportconfigtable::Lldpportconfigentry : public ydk::Entity
{
    public:
        Lldpportconfigentry();
        ~Lldpportconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpportconfigportnum; //type: int32
        ydk::YLeaf lldpportconfigadminstatus; //type: Lldpportconfigadminstatus
        ydk::YLeaf lldpportconfignotificationenable; //type: boolean
        ydk::YLeaf lldpportconfigtlvstxenable; //type: Lldpportconfigtlvstxenable
        class Lldpportconfigadminstatus;

}; // LldpMib::Lldpportconfigtable::Lldpportconfigentry


class LldpMib::Lldpstatstxporttable : public ydk::Entity
{
    public:
        Lldpstatstxporttable();
        ~Lldpstatstxporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpstatstxportentry; //type: LldpMib::Lldpstatstxporttable::Lldpstatstxportentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpstatstxporttable::Lldpstatstxportentry> > lldpstatstxportentry;
        
}; // LldpMib::Lldpstatstxporttable


class LldpMib::Lldpstatstxporttable::Lldpstatstxportentry : public ydk::Entity
{
    public:
        Lldpstatstxportentry();
        ~Lldpstatstxportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpstatstxportnum; //type: int32
        ydk::YLeaf lldpstatstxportframestotal; //type: uint32

}; // LldpMib::Lldpstatstxporttable::Lldpstatstxportentry


class LldpMib::Lldpstatsrxporttable : public ydk::Entity
{
    public:
        Lldpstatsrxporttable();
        ~Lldpstatsrxporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpstatsrxportentry; //type: LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry> > lldpstatsrxportentry;
        
}; // LldpMib::Lldpstatsrxporttable


class LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry : public ydk::Entity
{
    public:
        Lldpstatsrxportentry();
        ~Lldpstatsrxportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpstatsrxportnum; //type: int32
        ydk::YLeaf lldpstatsrxportframesdiscardedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxportframeserrors; //type: uint32
        ydk::YLeaf lldpstatsrxportframestotal; //type: uint32
        ydk::YLeaf lldpstatsrxporttlvsdiscardedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxporttlvsunrecognizedtotal; //type: uint32
        ydk::YLeaf lldpstatsrxportageoutstotal; //type: uint32

}; // LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry


class LldpMib::Lldplocporttable : public ydk::Entity
{
    public:
        Lldplocporttable();
        ~Lldplocporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldplocportentry; //type: LldpMib::Lldplocporttable::Lldplocportentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldplocporttable::Lldplocportentry> > lldplocportentry;
        
}; // LldpMib::Lldplocporttable


class LldpMib::Lldplocporttable::Lldplocportentry : public ydk::Entity
{
    public:
        Lldplocportentry();
        ~Lldplocportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldplocportnum; //type: int32
        ydk::YLeaf lldplocportidsubtype; //type: Lldpportidsubtype
        ydk::YLeaf lldplocportid; //type: binary
        ydk::YLeaf lldplocportdesc; //type: string

}; // LldpMib::Lldplocporttable::Lldplocportentry


class LldpMib::Lldplocmanaddrtable : public ydk::Entity
{
    public:
        Lldplocmanaddrtable();
        ~Lldplocmanaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldplocmanaddrentry; //type: LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry> > lldplocmanaddrentry;
        
}; // LldpMib::Lldplocmanaddrtable


class LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry : public ydk::Entity
{
    public:
        Lldplocmanaddrentry();
        ~Lldplocmanaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldplocmanaddrsubtype; //type: Addressfamilynumbers
        ydk::YLeaf lldplocmanaddr; //type: binary
        ydk::YLeaf lldplocmanaddrlen; //type: int32
        ydk::YLeaf lldplocmanaddrifsubtype; //type: Lldpmanaddrifsubtype
        ydk::YLeaf lldplocmanaddrifid; //type: int32
        ydk::YLeaf lldplocmanaddroid; //type: string
        ydk::YLeaf lldpconfigmanaddrportstxenable; //type: binary

}; // LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry


class LldpMib::Lldpremtable : public ydk::Entity
{
    public:
        Lldpremtable();
        ~Lldpremtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldprementry; //type: LldpMib::Lldpremtable::Lldprementry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpremtable::Lldprementry> > lldprementry;
        
}; // LldpMib::Lldpremtable


class LldpMib::Lldpremtable::Lldprementry : public ydk::Entity
{
    public:
        Lldprementry();
        ~Lldprementry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpremtimemark; //type: uint32
        ydk::YLeaf lldpremlocalportnum; //type: int32
        ydk::YLeaf lldpremindex; //type: int32
        ydk::YLeaf lldpremchassisidsubtype; //type: Lldpchassisidsubtype
        ydk::YLeaf lldpremchassisid; //type: binary
        ydk::YLeaf lldpremportidsubtype; //type: Lldpportidsubtype
        ydk::YLeaf lldpremportid; //type: binary
        ydk::YLeaf lldpremportdesc; //type: string
        ydk::YLeaf lldpremsysname; //type: string
        ydk::YLeaf lldpremsysdesc; //type: string
        ydk::YLeaf lldpremsyscapsupported; //type: Lldpsystemcapabilitiesmap
        ydk::YLeaf lldpremsyscapenabled; //type: Lldpsystemcapabilitiesmap

}; // LldpMib::Lldpremtable::Lldprementry


class LldpMib::Lldpremmanaddrtable : public ydk::Entity
{
    public:
        Lldpremmanaddrtable();
        ~Lldpremmanaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpremmanaddrentry; //type: LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry> > lldpremmanaddrentry;
        
}; // LldpMib::Lldpremmanaddrtable


class LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry : public ydk::Entity
{
    public:
        Lldpremmanaddrentry();
        ~Lldpremmanaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremmanaddrsubtype; //type: Addressfamilynumbers
        ydk::YLeaf lldpremmanaddr; //type: binary
        ydk::YLeaf lldpremmanaddrifsubtype; //type: Lldpmanaddrifsubtype
        ydk::YLeaf lldpremmanaddrifid; //type: int32
        ydk::YLeaf lldpremmanaddroid; //type: string

}; // LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry


class LldpMib::Lldpremunknowntlvtable : public ydk::Entity
{
    public:
        Lldpremunknowntlvtable();
        ~Lldpremunknowntlvtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpremunknowntlventry; //type: LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry> > lldpremunknowntlventry;
        
}; // LldpMib::Lldpremunknowntlvtable


class LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry : public ydk::Entity
{
    public:
        Lldpremunknowntlventry();
        ~Lldpremunknowntlventry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremunknowntlvtype; //type: int32
        ydk::YLeaf lldpremunknowntlvinfo; //type: binary

}; // LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry


class LldpMib::Lldpremorgdefinfotable : public ydk::Entity
{
    public:
        Lldpremorgdefinfotable();
        ~Lldpremorgdefinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lldpremorgdefinfoentry; //type: LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry

        std::vector<std::shared_ptr<LLDP_MIB::LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry> > lldpremorgdefinfoentry;
        
}; // LldpMib::Lldpremorgdefinfotable


class LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry : public ydk::Entity
{
    public:
        Lldpremorgdefinfoentry();
        ~Lldpremorgdefinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to LLDP_MIB::LldpMib::Lldpremtable::Lldprementry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremorgdefinfooui; //type: binary
        ydk::YLeaf lldpremorgdefinfosubtype; //type: int32
        ydk::YLeaf lldpremorgdefinfoindex; //type: int32
        ydk::YLeaf lldpremorgdefinfo; //type: binary

}; // LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry

class Lldpchassisidsubtype : public ydk::Enum
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

class Lldpmanaddrifsubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ifIndex;
        static const ydk::Enum::YLeaf systemPortNumber;

};

class Lldpportidsubtype : public ydk::Enum
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

class LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus : public ydk::Enum
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

