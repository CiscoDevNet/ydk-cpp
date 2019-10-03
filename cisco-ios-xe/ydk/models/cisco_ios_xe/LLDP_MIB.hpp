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

        class LldpConfiguration; //type: LLDPMIB::LldpConfiguration
        class LldpStatistics; //type: LLDPMIB::LldpStatistics
        class LldpLocalSystemData; //type: LLDPMIB::LldpLocalSystemData
        class LldpPortConfigTable; //type: LLDPMIB::LldpPortConfigTable
        class LldpStatsTxPortTable; //type: LLDPMIB::LldpStatsTxPortTable
        class LldpStatsRxPortTable; //type: LLDPMIB::LldpStatsRxPortTable
        class LldpLocPortTable; //type: LLDPMIB::LldpLocPortTable
        class LldpLocManAddrTable; //type: LLDPMIB::LldpLocManAddrTable
        class LldpRemTable; //type: LLDPMIB::LldpRemTable
        class LldpRemManAddrTable; //type: LLDPMIB::LldpRemManAddrTable
        class LldpRemUnknownTLVTable; //type: LLDPMIB::LldpRemUnknownTLVTable
        class LldpRemOrgDefInfoTable; //type: LLDPMIB::LldpRemOrgDefInfoTable

        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpConfiguration> lldpconfiguration;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpStatistics> lldpstatistics;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpLocalSystemData> lldplocalsystemdata;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpPortConfigTable> lldpportconfigtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpStatsTxPortTable> lldpstatstxporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpStatsRxPortTable> lldpstatsrxporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpLocPortTable> lldplocporttable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpLocManAddrTable> lldplocmanaddrtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable> lldpremtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemManAddrTable> lldpremmanaddrtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemUnknownTLVTable> lldpremunknowntlvtable;
        std::shared_ptr<cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemOrgDefInfoTable> lldpremorgdefinfotable;
        
}; // LLDPMIB


class LLDPMIB::LldpConfiguration : public ydk::Entity
{
    public:
        LldpConfiguration();
        ~LldpConfiguration();

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

}; // LLDPMIB::LldpConfiguration


class LLDPMIB::LldpStatistics : public ydk::Entity
{
    public:
        LldpStatistics();
        ~LldpStatistics();

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

}; // LLDPMIB::LldpStatistics


class LLDPMIB::LldpLocalSystemData : public ydk::Entity
{
    public:
        LldpLocalSystemData();
        ~LldpLocalSystemData();

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

}; // LLDPMIB::LldpLocalSystemData


class LLDPMIB::LldpPortConfigTable : public ydk::Entity
{
    public:
        LldpPortConfigTable();
        ~LldpPortConfigTable();

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

        class LldpPortConfigEntry; //type: LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry

        ydk::YList lldpportconfigentry;
        
}; // LLDPMIB::LldpPortConfigTable


class LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry : public ydk::Entity
{
    public:
        LldpPortConfigEntry();
        ~LldpPortConfigEntry();

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
        ydk::YLeaf lldpportconfigadminstatus; //type: LldpPortConfigAdminStatus
        ydk::YLeaf lldpportconfignotificationenable; //type: boolean
        ydk::YLeaf lldpportconfigtlvstxenable; //type: LldpPortConfigTLVsTxEnable
        class LldpPortConfigAdminStatus;

}; // LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry


class LLDPMIB::LldpStatsTxPortTable : public ydk::Entity
{
    public:
        LldpStatsTxPortTable();
        ~LldpStatsTxPortTable();

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

        class LldpStatsTxPortEntry; //type: LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry

        ydk::YList lldpstatstxportentry;
        
}; // LLDPMIB::LldpStatsTxPortTable


class LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry : public ydk::Entity
{
    public:
        LldpStatsTxPortEntry();
        ~LldpStatsTxPortEntry();

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

}; // LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry


class LLDPMIB::LldpStatsRxPortTable : public ydk::Entity
{
    public:
        LldpStatsRxPortTable();
        ~LldpStatsRxPortTable();

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

        class LldpStatsRxPortEntry; //type: LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry

        ydk::YList lldpstatsrxportentry;
        
}; // LLDPMIB::LldpStatsRxPortTable


class LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry : public ydk::Entity
{
    public:
        LldpStatsRxPortEntry();
        ~LldpStatsRxPortEntry();

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

}; // LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry


class LLDPMIB::LldpLocPortTable : public ydk::Entity
{
    public:
        LldpLocPortTable();
        ~LldpLocPortTable();

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

        class LldpLocPortEntry; //type: LLDPMIB::LldpLocPortTable::LldpLocPortEntry

        ydk::YList lldplocportentry;
        
}; // LLDPMIB::LldpLocPortTable


class LLDPMIB::LldpLocPortTable::LldpLocPortEntry : public ydk::Entity
{
    public:
        LldpLocPortEntry();
        ~LldpLocPortEntry();

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

}; // LLDPMIB::LldpLocPortTable::LldpLocPortEntry


class LLDPMIB::LldpLocManAddrTable : public ydk::Entity
{
    public:
        LldpLocManAddrTable();
        ~LldpLocManAddrTable();

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

        class LldpLocManAddrEntry; //type: LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry

        ydk::YList lldplocmanaddrentry;
        
}; // LLDPMIB::LldpLocManAddrTable


class LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry : public ydk::Entity
{
    public:
        LldpLocManAddrEntry();
        ~LldpLocManAddrEntry();

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

}; // LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry


class LLDPMIB::LldpRemTable : public ydk::Entity
{
    public:
        LldpRemTable();
        ~LldpRemTable();

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

        class LldpRemEntry; //type: LLDPMIB::LldpRemTable::LldpRemEntry

        ydk::YList lldprementry;
        
}; // LLDPMIB::LldpRemTable


class LLDPMIB::LldpRemTable::LldpRemEntry : public ydk::Entity
{
    public:
        LldpRemEntry();
        ~LldpRemEntry();

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

}; // LLDPMIB::LldpRemTable::LldpRemEntry


class LLDPMIB::LldpRemManAddrTable : public ydk::Entity
{
    public:
        LldpRemManAddrTable();
        ~LldpRemManAddrTable();

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

        class LldpRemManAddrEntry; //type: LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry

        ydk::YList lldpremmanaddrentry;
        
}; // LLDPMIB::LldpRemManAddrTable


class LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry : public ydk::Entity
{
    public:
        LldpRemManAddrEntry();
        ~LldpRemManAddrEntry();

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

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremmanaddrsubtype; //type: AddressFamilyNumbers
        ydk::YLeaf lldpremmanaddr; //type: binary
        ydk::YLeaf lldpremmanaddrifsubtype; //type: LldpManAddrIfSubtype
        ydk::YLeaf lldpremmanaddrifid; //type: int32
        ydk::YLeaf lldpremmanaddroid; //type: string

}; // LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry


class LLDPMIB::LldpRemUnknownTLVTable : public ydk::Entity
{
    public:
        LldpRemUnknownTLVTable();
        ~LldpRemUnknownTLVTable();

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

        class LldpRemUnknownTLVEntry; //type: LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry

        ydk::YList lldpremunknowntlventry;
        
}; // LLDPMIB::LldpRemUnknownTLVTable


class LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry : public ydk::Entity
{
    public:
        LldpRemUnknownTLVEntry();
        ~LldpRemUnknownTLVEntry();

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

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremunknowntlvtype; //type: int32
        ydk::YLeaf lldpremunknowntlvinfo; //type: binary

}; // LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry


class LLDPMIB::LldpRemOrgDefInfoTable : public ydk::Entity
{
    public:
        LldpRemOrgDefInfoTable();
        ~LldpRemOrgDefInfoTable();

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

        class LldpRemOrgDefInfoEntry; //type: LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry

        ydk::YList lldpremorgdefinfoentry;
        
}; // LLDPMIB::LldpRemOrgDefInfoTable


class LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry : public ydk::Entity
{
    public:
        LldpRemOrgDefInfoEntry();
        ~LldpRemOrgDefInfoEntry();

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

        //type: uint32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremtimemark)
        ydk::YLeaf lldpremtimemark;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremlocalportnum)
        ydk::YLeaf lldpremlocalportnum;
        //type: int32 (refers to cisco_ios_xe::LLDP_MIB::LLDPMIB::LldpRemTable::LldpRemEntry::lldpremindex)
        ydk::YLeaf lldpremindex;
        ydk::YLeaf lldpremorgdefinfooui; //type: binary
        ydk::YLeaf lldpremorgdefinfosubtype; //type: int32
        ydk::YLeaf lldpremorgdefinfoindex; //type: int32
        ydk::YLeaf lldpremorgdefinfo; //type: binary

}; // LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry

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

        static int get_enum_value(const std::string & name) {
            if (name == "interfaceAlias") return 1;
            if (name == "portComponent") return 2;
            if (name == "macAddress") return 3;
            if (name == "networkAddress") return 4;
            if (name == "interfaceName") return 5;
            if (name == "agentCircuitId") return 6;
            if (name == "local") return 7;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "chassisComponent") return 1;
            if (name == "interfaceAlias") return 2;
            if (name == "portComponent") return 3;
            if (name == "macAddress") return 4;
            if (name == "networkAddress") return 5;
            if (name == "interfaceName") return 6;
            if (name == "local") return 7;
            return -1;
        }
};

class LldpManAddrIfSubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ifIndex;
        static const ydk::Enum::YLeaf systemPortNumber;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "ifIndex") return 2;
            if (name == "systemPortNumber") return 3;
            return -1;
        }
};

class LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf txOnly;
        static const ydk::Enum::YLeaf rxOnly;
        static const ydk::Enum::YLeaf txAndRx;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "txOnly") return 1;
            if (name == "rxOnly") return 2;
            if (name == "txAndRx") return 3;
            if (name == "disabled") return 4;
            return -1;
        }
};


}
}

#endif /* _LLDP_MIB_ */

