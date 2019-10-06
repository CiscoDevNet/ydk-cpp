#ifndef _CISCO_IF_EXTENSION_MIB_
#define _CISCO_IF_EXTENSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IF_EXTENSION_MIB {

class CISCOIFEXTENSIONMIB : public ydk::Entity
{
    public:
        CISCOIFEXTENSIONMIB();
        ~CISCOIFEXTENSIONMIB();

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

        class CiscoIfExtSystemConfig; //type: CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig
        class CieIfPacketStatsTable; //type: CISCOIFEXTENSIONMIB::CieIfPacketStatsTable
        class CieIfInterfaceTable; //type: CISCOIFEXTENSIONMIB::CieIfInterfaceTable
        class CieIfStatusListTable; //type: CISCOIFEXTENSIONMIB::CieIfStatusListTable
        class CieIfVlStatsTable; //type: CISCOIFEXTENSIONMIB::CieIfVlStatsTable
        class CieIfIndexPersistenceTable; //type: CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable
        class CieIfDot1qCustomEtherTypeTable; //type: CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable
        class CieIfUtilTable; //type: CISCOIFEXTENSIONMIB::CieIfUtilTable
        class CieIfDot1dBaseMappingTable; //type: CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable
        class CieIfNameMappingTable; //type: CISCOIFEXTENSIONMIB::CieIfNameMappingTable

        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig> ciscoifextsystemconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfPacketStatsTable> cieifpacketstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfInterfaceTable> cieifinterfacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfStatusListTable> cieifstatuslisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfVlStatsTable> cieifvlstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable> cieifindexpersistencetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable> cieifdot1qcustomethertypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfUtilTable> cieifutiltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable> cieifdot1dbasemappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::CieIfNameMappingTable> cieifnamemappingtable;
        
}; // CISCOIFEXTENSIONMIB


class CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig : public ydk::Entity
{
    public:
        CiscoIfExtSystemConfig();
        ~CiscoIfExtSystemConfig();

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

        ydk::YLeaf ciesystemmtu; //type: int32
        ydk::YLeaf cielinkupdownenable; //type: CieLinkUpDownEnable
        ydk::YLeaf ciestandardlinkupdownvarbinds; //type: CieStandardLinkUpDownVarbinds
        ydk::YLeaf cieifindexpersistence; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifenable; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifdelay; //type: uint32
        ydk::YLeaf cieifindexglobalpersistence; //type: IfIndexPersistenceState
        ydk::YLeaf cielinkupdownconfig; //type: CieLinkUpDownConfig
        class CieStandardLinkUpDownVarbinds;

}; // CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig


class CISCOIFEXTENSIONMIB::CieIfPacketStatsTable : public ydk::Entity
{
    public:
        CieIfPacketStatsTable();
        ~CieIfPacketStatsTable();

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

        class CieIfPacketStatsEntry; //type: CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry

        ydk::YList cieifpacketstatsentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfPacketStatsTable


class CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry : public ydk::Entity
{
    public:
        CieIfPacketStatsEntry();
        ~CieIfPacketStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieiflastintime; //type: uint32
        ydk::YLeaf cieiflastouttime; //type: uint32
        ydk::YLeaf cieiflastouthangtime; //type: uint32
        ydk::YLeaf cieifinruntserrs; //type: uint32
        ydk::YLeaf cieifingiantserrs; //type: uint32
        ydk::YLeaf cieifinframingerrs; //type: uint32
        ydk::YLeaf cieifinoverrunerrs; //type: uint32
        ydk::YLeaf cieifinignored; //type: uint32
        ydk::YLeaf cieifinaborterrs; //type: uint32
        ydk::YLeaf cieifinputqueuedrops; //type: uint32
        ydk::YLeaf cieifoutputqueuedrops; //type: uint32
        ydk::YLeaf cieifpacketdiscontinuitytime; //type: uint32

}; // CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry


class CISCOIFEXTENSIONMIB::CieIfInterfaceTable : public ydk::Entity
{
    public:
        CieIfInterfaceTable();
        ~CieIfInterfaceTable();

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

        class CieIfInterfaceEntry; //type: CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry

        ydk::YList cieifinterfaceentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfInterfaceTable


class CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry : public ydk::Entity
{
    public:
        CieIfInterfaceEntry();
        ~CieIfInterfaceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifresetcount; //type: uint32
        ydk::YLeaf cieifkeepaliveenabled; //type: boolean
        ydk::YLeaf cieifstatechangereason; //type: string
        ydk::YLeaf cieifcarriertransitioncount; //type: uint32
        ydk::YLeaf cieifinterfacediscontinuitytime; //type: uint32
        ydk::YLeaf cieifdhcpmode; //type: boolean
        ydk::YLeaf cieifmtu; //type: int32
        ydk::YLeaf cieifcontextname; //type: binary
        ydk::YLeaf cieifoperstatuscause; //type: IfOperStatusReason
        ydk::YLeaf cieifoperstatuscausedescr; //type: string
        ydk::YLeaf cieifspeedreceive; //type: uint32
        ydk::YLeaf cieifhighspeedreceive; //type: uint32
        ydk::YLeaf cieifowner; //type: string
        ydk::YLeaf cieifsharedconfig; //type: CieIfSharedConfig
        ydk::YLeaf cieifspeedgroupconfig; //type: CieIfSpeedGroupConfig
        ydk::YLeaf cieiftransceiverfrequencyconfig; //type: CieIfTransceiverFrequencyConfig
        ydk::YLeaf cieiffillpatternconfig; //type: CieIfFillPatternConfig
        ydk::YLeaf cieifignorebiterrorsconfig; //type: boolean
        ydk::YLeaf cieifignoreinterruptthresholdconfig; //type: boolean
        class CieIfSharedConfig;
        class CieIfSpeedGroupConfig;
        class CieIfTransceiverFrequencyConfig;
        class CieIfFillPatternConfig;

}; // CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry


class CISCOIFEXTENSIONMIB::CieIfStatusListTable : public ydk::Entity
{
    public:
        CieIfStatusListTable();
        ~CieIfStatusListTable();

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

        class CieIfStatusListEntry; //type: CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry

        ydk::YList cieifstatuslistentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfStatusListTable


class CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry : public ydk::Entity
{
    public:
        CieIfStatusListEntry();
        ~CieIfStatusListEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cieifstatuslistindex; //type: uint32
        ydk::YLeaf cieinterfacesindex; //type: binary
        ydk::YLeaf cieinterfacesopermode; //type: binary
        ydk::YLeaf cieinterfacesopercause; //type: binary
        ydk::YLeaf cieinterfaceownershipbitmap; //type: binary

}; // CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry


class CISCOIFEXTENSIONMIB::CieIfVlStatsTable : public ydk::Entity
{
    public:
        CieIfVlStatsTable();
        ~CieIfVlStatsTable();

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

        class CieIfVlStatsEntry; //type: CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry

        ydk::YList cieifvlstatsentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfVlStatsTable


class CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry : public ydk::Entity
{
    public:
        CieIfVlStatsEntry();
        ~CieIfVlStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifnodropvlinpkts; //type: uint64
        ydk::YLeaf cieifnodropvlinoctets; //type: uint64
        ydk::YLeaf cieifnodropvloutpkts; //type: uint64
        ydk::YLeaf cieifnodropvloutoctets; //type: uint64
        ydk::YLeaf cieifdropvlinpkts; //type: uint64
        ydk::YLeaf cieifdropvlinoctets; //type: uint64
        ydk::YLeaf cieifdropvloutpkts; //type: uint64
        ydk::YLeaf cieifdropvloutoctets; //type: uint64

}; // CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry


class CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable : public ydk::Entity
{
    public:
        CieIfIndexPersistenceTable();
        ~CieIfIndexPersistenceTable();

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

        class CieIfIndexPersistenceEntry; //type: CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry

        ydk::YList cieifindexpersistenceentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable


class CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry : public ydk::Entity
{
    public:
        CieIfIndexPersistenceEntry();
        ~CieIfIndexPersistenceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifindexpersistenceenabled; //type: boolean
        ydk::YLeaf cieifindexpersistencecontrol; //type: IfIndexPersistenceState

}; // CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry


class CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable : public ydk::Entity
{
    public:
        CieIfDot1qCustomEtherTypeTable();
        ~CieIfDot1qCustomEtherTypeTable();

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

        class CieIfDot1qCustomEtherTypeEntry; //type: CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry

        ydk::YList cieifdot1qcustomethertypeentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable


class CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry : public ydk::Entity
{
    public:
        CieIfDot1qCustomEtherTypeEntry();
        ~CieIfDot1qCustomEtherTypeEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1qcustomadminethertype; //type: int32
        ydk::YLeaf cieifdot1qcustomoperethertype; //type: int32

}; // CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry


class CISCOIFEXTENSIONMIB::CieIfUtilTable : public ydk::Entity
{
    public:
        CieIfUtilTable();
        ~CieIfUtilTable();

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

        class CieIfUtilEntry; //type: CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry

        ydk::YList cieifutilentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfUtilTable


class CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry : public ydk::Entity
{
    public:
        CieIfUtilEntry();
        ~CieIfUtilEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifinpktrate; //type: uint64
        ydk::YLeaf cieifinoctetrate; //type: uint64
        ydk::YLeaf cieifoutpktrate; //type: uint64
        ydk::YLeaf cieifoutoctetrate; //type: uint64
        ydk::YLeaf cieifinterval; //type: uint32

}; // CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry


class CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable : public ydk::Entity
{
    public:
        CieIfDot1dBaseMappingTable();
        ~CieIfDot1dBaseMappingTable();

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

        class CieIfDot1dBaseMappingEntry; //type: CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry

        ydk::YList cieifdot1dbasemappingentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable


class CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry : public ydk::Entity
{
    public:
        CieIfDot1dBaseMappingEntry();
        ~CieIfDot1dBaseMappingEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1dbasemappingport; //type: int32

}; // CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry


class CISCOIFEXTENSIONMIB::CieIfNameMappingTable : public ydk::Entity
{
    public:
        CieIfNameMappingTable();
        ~CieIfNameMappingTable();

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

        class CieIfNameMappingEntry; //type: CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry

        ydk::YList cieifnamemappingentry;
        
}; // CISCOIFEXTENSIONMIB::CieIfNameMappingTable


class CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry : public ydk::Entity
{
    public:
        CieIfNameMappingEntry();
        ~CieIfNameMappingEntry();

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

        ydk::YLeaf cieifname; //type: string
        ydk::YLeaf cieifindex; //type: int32

}; // CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry

class IfIndexPersistenceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf global;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "enable") return 2;
            if (name == "global") return 3;
            return -1;
        }
};

class CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::CieStandardLinkUpDownVarbinds : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf additional;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 1;
            if (name == "additional") return 2;
            if (name == "other") return 3;
            return -1;
        }
};

class CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSharedConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf ownerDedicated;
        static const ydk::Enum::YLeaf ownerShared;
        static const ydk::Enum::YLeaf sharedOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "ownerDedicated") return 2;
            if (name == "ownerShared") return 3;
            if (name == "sharedOnly") return 4;
            return -1;
        }
};

class CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSpeedGroupConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf tenG;
        static const ydk::Enum::YLeaf oneTwoFourEightG;
        static const ydk::Enum::YLeaf twoFourEightSixteenG;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "tenG") return 2;
            if (name == "oneTwoFourEightG") return 3;
            if (name == "twoFourEightSixteenG") return 4;
            return -1;
        }
};

class CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfTransceiverFrequencyConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf fibreChannel;
        static const ydk::Enum::YLeaf ethernet;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "fibreChannel") return 2;
            if (name == "ethernet") return 3;
            return -1;
        }
};

class CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfFillPatternConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf arbff8G;
        static const ydk::Enum::YLeaf idle8G;

        static int get_enum_value(const std::string & name) {
            if (name == "arbff8G") return 1;
            if (name == "idle8G") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IF_EXTENSION_MIB_ */

