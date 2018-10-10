#ifndef _CISCO_CABLE_WIDEBAND_MIB_
#define _CISCO_CABLE_WIDEBAND_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CABLE_WIDEBAND_MIB {

class CISCOCABLEWIDEBANDMIB : public ydk::Entity
{
    public:
        CISCOCABLEWIDEBANDMIB();
        ~CISCOCABLEWIDEBANDMIB();

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

        class CiscoCableWidebandMIBObjects; //type: CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects
        class CcwbRFChannelTable; //type: CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable
        class CcwbWBtoRFMappingTable; //type: CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable
        class CcwbWBtoNBMappingTable; //type: CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable
        class CcwbWBBondGrpTable; //type: CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable
        class CcwbWBCmStatusTable; //type: CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable
        class CcwbWBCmStatusExtTable; //type: CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable
        class CcwbFiberNodeDescrTable; //type: CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable
        class CcwbFiberNodeTable; //type: CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable

        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects> ciscocablewidebandmibobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable> ccwbrfchanneltable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable> ccwbwbtorfmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable> ccwbwbtonbmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable> ccwbwbbondgrptable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable> ccwbwbcmstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable> ccwbwbcmstatusexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable> ccwbfibernodedescrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable> ccwbfibernodetable;
        
}; // CISCOCABLEWIDEBANDMIB


class CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects : public ydk::Entity
{
    public:
        CiscoCableWidebandMIBObjects();
        ~CiscoCableWidebandMIBObjects();

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

        ydk::YLeaf ccwbrfchanutilinterval; //type: uint32
        ydk::YLeaf ccwbsfplinktrapenable; //type: int32

}; // CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects


class CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable : public ydk::Entity
{
    public:
        CcwbRFChannelTable();
        ~CcwbRFChannelTable();

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

        class CcwbRFChannelEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry

        ydk::YList ccwbrfchannelentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable


class CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry : public ydk::Entity
{
    public:
        CcwbRFChannelEntry();
        ~CcwbRFChannelEntry();

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
        ydk::YLeaf ccwbrfchannelnum; //type: uint32
        ydk::YLeaf ccwbrfchannelfrequency; //type: uint32
        ydk::YLeaf ccwbrfchannelwidth; //type: uint32
        ydk::YLeaf ccwbrfchannelmodulation; //type: CcwbRFChannelModulation
        ydk::YLeaf ccwbrfchannelannex; //type: CcwbRFChannelAnnex
        ydk::YLeaf ccwbrfchannelmpegpkts; //type: uint64
        ydk::YLeaf ccwbrfchannelstoragetype; //type: StorageType
        ydk::YLeaf ccwbrfchannelrowstatus; //type: RowStatus
        ydk::YLeaf ccwbrfchannelutilization; //type: uint32
        ydk::YLeaf ccwbrfchannelfrequencyrev1; //type: uint32
        ydk::YLeaf ccwbrfchanqamipaddresstype; //type: InetAddressType
        ydk::YLeaf ccwbrfchanqamipaddress; //type: binary
        ydk::YLeaf ccwbrfchanqammacaddress; //type: string
        ydk::YLeaf ccwbrfchanqamudpport; //type: uint16
        ydk::YLeaf ccwbrfchanqamtos; //type: uint32
        ydk::YLeaf ccwbrfchanqamvlanid; //type: uint32
        ydk::YLeaf ccwbrfchanqamprioritybits; //type: uint32
        ydk::YLeaf ccwbrfchanqamdepiremoteid; //type: uint32
        ydk::YLeaf ccwbrfchanqamdepitunnel; //type: string
        ydk::YLeaf ccwbrfchanqamtsid; //type: uint32
        class CcwbRFChannelModulation;
        class CcwbRFChannelAnnex;

}; // CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry


class CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable : public ydk::Entity
{
    public:
        CcwbWBtoRFMappingTable();
        ~CcwbWBtoRFMappingTable();

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

        class CcwbWBtoRFMappingEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry

        ydk::YList ccwbwbtorfmappingentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable


class CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry : public ydk::Entity
{
    public:
        CcwbWBtoRFMappingEntry();
        ~CcwbWBtoRFMappingEntry();

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
        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::ccwbrfchannelnum)
        ydk::YLeaf ccwbrfchannelnum;
        ydk::YLeaf ccwbwbtorfbandwidth; //type: uint32
        ydk::YLeaf ccwbwbtorfstoragetype; //type: StorageType
        ydk::YLeaf ccwbwbtorfrowstatus; //type: RowStatus

}; // CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry


class CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable : public ydk::Entity
{
    public:
        CcwbWBtoNBMappingTable();
        ~CcwbWBtoNBMappingTable();

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

        class CcwbWBtoNBMappingEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry

        ydk::YList ccwbwbtonbmappingentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable


class CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry : public ydk::Entity
{
    public:
        CcwbWBtoNBMappingEntry();
        ~CcwbWBtoNBMappingEntry();

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
        ydk::YLeaf ccwbwbtonbifindexfornb; //type: int32
        ydk::YLeaf ccwbwbtonbstoragetype; //type: StorageType
        ydk::YLeaf ccwbwbtonbrowstatus; //type: RowStatus

}; // CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry


class CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable : public ydk::Entity
{
    public:
        CcwbWBBondGrpTable();
        ~CcwbWBBondGrpTable();

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

        class CcwbWBBondGrpEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry

        ydk::YList ccwbwbbondgrpentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable


class CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry : public ydk::Entity
{
    public:
        CcwbWBBondGrpEntry();
        ~CcwbWBBondGrpEntry();

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
        ydk::YLeaf ccwbwbbondgrpsecondary; //type: boolean

}; // CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry


class CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable : public ydk::Entity
{
    public:
        CcwbWBCmStatusTable();
        ~CcwbWBCmStatusTable();

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

        class CcwbWBCmStatusEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry

        ydk::YList ccwbwbcmstatusentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable


class CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry : public ydk::Entity
{
    public:
        CcwbWBCmStatusEntry();
        ~CcwbWBCmStatusEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf ccwbwbcmstatusvalue; //type: CcwbWBCmStatusValue
        class CcwbWBCmStatusValue;

}; // CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry


class CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable : public ydk::Entity
{
    public:
        CcwbWBCmStatusExtTable();
        ~CcwbWBCmStatusExtTable();

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

        class CcwbWBCmStatusExtEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry

        ydk::YList ccwbwbcmstatusextentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable


class CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry : public ydk::Entity
{
    public:
        CcwbWBCmStatusExtEntry();
        ~CcwbWBCmStatusExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf ccwbwbcmstatusextindex; //type: int32
        ydk::YLeaf ccwbwbcmwbifindex; //type: int32

}; // CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry


class CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable : public ydk::Entity
{
    public:
        CcwbFiberNodeDescrTable();
        ~CcwbFiberNodeDescrTable();

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

        class CcwbFiberNodeDescrEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry

        ydk::YList ccwbfibernodedescrentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable


class CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry : public ydk::Entity
{
    public:
        CcwbFiberNodeDescrEntry();
        ~CcwbFiberNodeDescrEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_CABLE_WIDEBAND_MIB::CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::ccwbfibernodeid)
        ydk::YLeaf ccwbfibernodeid;
        ydk::YLeaf ccwbfibernodedescription; //type: string
        ydk::YLeaf ccwbfibernodedescrstoragetype; //type: StorageType
        ydk::YLeaf ccwbfibernodedescrrowstatus; //type: RowStatus

}; // CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry


class CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable : public ydk::Entity
{
    public:
        CcwbFiberNodeTable();
        ~CcwbFiberNodeTable();

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

        class CcwbFiberNodeEntry; //type: CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry

        ydk::YList ccwbfibernodeentry;
        
}; // CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable


class CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry : public ydk::Entity
{
    public:
        CcwbFiberNodeEntry();
        ~CcwbFiberNodeEntry();

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

        ydk::YLeaf ccwbfibernodeid; //type: uint32
        ydk::YLeaf ccwbfibernodeglobrfid; //type: uint32
        ydk::YLeaf ccwbfibernodenbifindx; //type: int32
        ydk::YLeaf ccwbfibernodewbcontlrphyindx; //type: int32
        ydk::YLeaf ccwbfibernodewbrfport; //type: int32
        ydk::YLeaf ccwbfibernodestoragetype; //type: StorageType
        ydk::YLeaf ccwbfibernoderowstatus; //type: RowStatus

}; // CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry

class CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelModulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qam64;
        static const ydk::Enum::YLeaf qam256;
        static const ydk::Enum::YLeaf qam1024;

};

class CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelAnnex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf annexA;
        static const ydk::Enum::YLeaf annexB;
        static const ydk::Enum::YLeaf annexC;

};

class CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf others;
        static const ydk::Enum::YLeaf initRangingRcvd;
        static const ydk::Enum::YLeaf initDhcpReqRcvd;
        static const ydk::Enum::YLeaf onlineNetAccessDisabled;
        static const ydk::Enum::YLeaf onlineKekAssigned;
        static const ydk::Enum::YLeaf onlineTekAssigned;
        static const ydk::Enum::YLeaf rejectBadMic;
        static const ydk::Enum::YLeaf rejectBadCos;
        static const ydk::Enum::YLeaf kekRejected;
        static const ydk::Enum::YLeaf tekRejected;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf initTftpPacketRcvd;
        static const ydk::Enum::YLeaf initTodRequestRcvd;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf rangingInProgress;
        static const ydk::Enum::YLeaf dhcpGotIpAddr;
        static const ydk::Enum::YLeaf rejStaleConfig;
        static const ydk::Enum::YLeaf rejIpSpoof;
        static const ydk::Enum::YLeaf rejClassFail;
        static const ydk::Enum::YLeaf rejRegNack;
        static const ydk::Enum::YLeaf bpiKekExpired;
        static const ydk::Enum::YLeaf bpiTekExpired;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf channelChgInitRangingRcvd;
        static const ydk::Enum::YLeaf channelChgRangingInProgress;
        static const ydk::Enum::YLeaf wbOnline;
        static const ydk::Enum::YLeaf wbOnlinePrivacy;
        static const ydk::Enum::YLeaf wbOnlineKekAssigned;
        static const ydk::Enum::YLeaf wbOnlineTekAssigned;
        static const ydk::Enum::YLeaf wbOnlineNetAccessDis;
        static const ydk::Enum::YLeaf wbKekReject;
        static const ydk::Enum::YLeaf wbTekReject;
        static const ydk::Enum::YLeaf wbNetAccessDisReject;
        static const ydk::Enum::YLeaf wbPrivacyEnabReject;
        static const ydk::Enum::YLeaf wbKekExpire;
        static const ydk::Enum::YLeaf wbTekExpire;
        static const ydk::Enum::YLeaf wbNetAccessDisExpire;
        static const ydk::Enum::YLeaf wbPrivacyEnabExpire;

};


}
}

#endif /* _CISCO_CABLE_WIDEBAND_MIB_ */

