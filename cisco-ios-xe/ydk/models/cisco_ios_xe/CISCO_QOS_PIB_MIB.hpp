#ifndef _CISCO_QOS_PIB_MIB_
#define _CISCO_QOS_PIB_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_QOS_PIB_MIB {

class CISCOQOSPIBMIB : public ydk::Entity
{
    public:
        CISCOQOSPIBMIB();
        ~CISCOQOSPIBMIB();

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

        class QosDevicePibIncarnationTable; //type: CISCOQOSPIBMIB::QosDevicePibIncarnationTable
        class QosDeviceAttributeTable; //type: CISCOQOSPIBMIB::QosDeviceAttributeTable
        class QosInterfaceTypeTable; //type: CISCOQOSPIBMIB::QosInterfaceTypeTable
        class QosDiffServMappingTable; //type: CISCOQOSPIBMIB::QosDiffServMappingTable
        class QosCosToDscpTable; //type: CISCOQOSPIBMIB::QosCosToDscpTable
        class QosUnmatchedPolicyTable; //type: CISCOQOSPIBMIB::QosUnmatchedPolicyTable
        class QosPolicerTable; //type: CISCOQOSPIBMIB::QosPolicerTable
        class QosAggregateTable; //type: CISCOQOSPIBMIB::QosAggregateTable
        class QosMacClassificationTable; //type: CISCOQOSPIBMIB::QosMacClassificationTable
        class QosIpAceTable; //type: CISCOQOSPIBMIB::QosIpAceTable
        class QosIpAclDefinitionTable; //type: CISCOQOSPIBMIB::QosIpAclDefinitionTable
        class QosIpAclActionTable; //type: CISCOQOSPIBMIB::QosIpAclActionTable
        class QosIfSchedulingPreferencesTable; //type: CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable
        class QosIfDropPreferenceTable; //type: CISCOQOSPIBMIB::QosIfDropPreferenceTable
        class QosIfDscpAssignmentTable; //type: CISCOQOSPIBMIB::QosIfDscpAssignmentTable
        class QosIfRedTable; //type: CISCOQOSPIBMIB::QosIfRedTable
        class QosIfTailDropTable; //type: CISCOQOSPIBMIB::QosIfTailDropTable
        class QosIfWeightsTable; //type: CISCOQOSPIBMIB::QosIfWeightsTable

        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosDevicePibIncarnationTable> qosdevicepibincarnationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosDeviceAttributeTable> qosdeviceattributetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosInterfaceTypeTable> qosinterfacetypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosDiffServMappingTable> qosdiffservmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosCosToDscpTable> qoscostodscptable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosUnmatchedPolicyTable> qosunmatchedpolicytable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosPolicerTable> qospolicertable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosAggregateTable> qosaggregatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosMacClassificationTable> qosmacclassificationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIpAceTable> qosipacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIpAclDefinitionTable> qosipacldefinitiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIpAclActionTable> qosipaclactiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable> qosifschedulingpreferencestable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfDropPreferenceTable> qosifdroppreferencetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfDscpAssignmentTable> qosifdscpassignmenttable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfRedTable> qosifredtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfTailDropTable> qosiftaildroptable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::QosIfWeightsTable> qosifweightstable;
        
}; // CISCOQOSPIBMIB


class CISCOQOSPIBMIB::QosDevicePibIncarnationTable : public ydk::Entity
{
    public:
        QosDevicePibIncarnationTable();
        ~QosDevicePibIncarnationTable();

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

        class QosDevicePibIncarnationEntry; //type: CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry

        ydk::YList qosdevicepibincarnationentry;
        
}; // CISCOQOSPIBMIB::QosDevicePibIncarnationTable


class CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry : public ydk::Entity
{
    public:
        QosDevicePibIncarnationEntry();
        ~QosDevicePibIncarnationEntry();

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

        ydk::YLeaf qosdeviceincarnationid; //type: uint32
        ydk::YLeaf qosdevicepdpname; //type: string
        ydk::YLeaf qosdevicepibincarnation; //type: binary
        ydk::YLeaf qosdevicepibttl; //type: uint32

}; // CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry


class CISCOQOSPIBMIB::QosDeviceAttributeTable : public ydk::Entity
{
    public:
        QosDeviceAttributeTable();
        ~QosDeviceAttributeTable();

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

        class QosDeviceAttributeEntry; //type: CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry

        ydk::YList qosdeviceattributeentry;
        
}; // CISCOQOSPIBMIB::QosDeviceAttributeTable


class CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry : public ydk::Entity
{
    public:
        QosDeviceAttributeEntry();
        ~QosDeviceAttributeEntry();

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

        ydk::YLeaf qosdeviceattributeid; //type: uint32
        ydk::YLeaf qosdevicepepdomain; //type: string
        ydk::YLeaf qosdeviceprimarypdp; //type: string
        ydk::YLeaf qosdevicesecondarypdp; //type: string
        ydk::YLeaf qosdevicemaxmessagesize; //type: uint32
        ydk::YLeaf qosdevicecapabilities; //type: QosDeviceCapabilities

}; // CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry


class CISCOQOSPIBMIB::QosInterfaceTypeTable : public ydk::Entity
{
    public:
        QosInterfaceTypeTable();
        ~QosInterfaceTypeTable();

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

        class QosInterfaceTypeEntry; //type: CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry

        ydk::YList qosinterfacetypeentry;
        
}; // CISCOQOSPIBMIB::QosInterfaceTypeTable


class CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry : public ydk::Entity
{
    public:
        QosInterfaceTypeEntry();
        ~QosInterfaceTypeEntry();

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

        ydk::YLeaf qosinterfacetypeid; //type: uint32
        ydk::YLeaf qosinterfacequeuetype; //type: QosInterfaceQueueType
        ydk::YLeaf qosinterfacetyperoles; //type: binary
        ydk::YLeaf qosinterfacetypecapabilities; //type: QosInterfaceTypeCapabilities

}; // CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry


class CISCOQOSPIBMIB::QosDiffServMappingTable : public ydk::Entity
{
    public:
        QosDiffServMappingTable();
        ~QosDiffServMappingTable();

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

        class QosDiffServMappingEntry; //type: CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry

        ydk::YList qosdiffservmappingentry;
        
}; // CISCOQOSPIBMIB::QosDiffServMappingTable


class CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry : public ydk::Entity
{
    public:
        QosDiffServMappingEntry();
        ~QosDiffServMappingEntry();

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

        ydk::YLeaf qosdscp; //type: int32
        ydk::YLeaf qosmarkeddscp; //type: int32
        ydk::YLeaf qosl2cos; //type: int32

}; // CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry


class CISCOQOSPIBMIB::QosCosToDscpTable : public ydk::Entity
{
    public:
        QosCosToDscpTable();
        ~QosCosToDscpTable();

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

        class QosCosToDscpEntry; //type: CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry

        ydk::YList qoscostodscpentry;
        
}; // CISCOQOSPIBMIB::QosCosToDscpTable


class CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry : public ydk::Entity
{
    public:
        QosCosToDscpEntry();
        ~QosCosToDscpEntry();

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

        ydk::YLeaf qoscostodscpcos; //type: int32
        ydk::YLeaf qoscostodscpdscp; //type: int32

}; // CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry


class CISCOQOSPIBMIB::QosUnmatchedPolicyTable : public ydk::Entity
{
    public:
        QosUnmatchedPolicyTable();
        ~QosUnmatchedPolicyTable();

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

        class QosUnmatchedPolicyEntry; //type: CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry

        ydk::YList qosunmatchedpolicyentry;
        
}; // CISCOQOSPIBMIB::QosUnmatchedPolicyTable


class CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry : public ydk::Entity
{
    public:
        QosUnmatchedPolicyEntry();
        ~QosUnmatchedPolicyEntry();

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

        ydk::YLeaf qosunmatchedpolicyid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyrole; //type: binary
        ydk::YLeaf qosunmatchedpolicydirection; //type: QosUnmatchedPolicyDirection
        ydk::YLeaf qosunmatchedpolicydscp; //type: int32
        ydk::YLeaf qosunmatchedpolicydscptrusted; //type: boolean
        ydk::YLeaf qosunmatchpolmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyaggregateid; //type: uint32
        class QosUnmatchedPolicyDirection;

}; // CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry


class CISCOQOSPIBMIB::QosPolicerTable : public ydk::Entity
{
    public:
        QosPolicerTable();
        ~QosPolicerTable();

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

        class QosPolicerEntry; //type: CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry

        ydk::YList qospolicerentry;
        
}; // CISCOQOSPIBMIB::QosPolicerTable


class CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry : public ydk::Entity
{
    public:
        QosPolicerEntry();
        ~QosPolicerEntry();

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

        ydk::YLeaf qospolicerid; //type: uint32
        ydk::YLeaf qospolicerrate; //type: uint32
        ydk::YLeaf qospolicernormalburst; //type: uint32
        ydk::YLeaf qospolicerexcessburst; //type: uint32
        ydk::YLeaf qospoliceraction; //type: QosPolicerAction
        class QosPolicerAction;

}; // CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry


class CISCOQOSPIBMIB::QosAggregateTable : public ydk::Entity
{
    public:
        QosAggregateTable();
        ~QosAggregateTable();

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

        class QosAggregateEntry; //type: CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry

        ydk::YList qosaggregateentry;
        
}; // CISCOQOSPIBMIB::QosAggregateTable


class CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry : public ydk::Entity
{
    public:
        QosAggregateEntry();
        ~QosAggregateEntry();

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

        ydk::YLeaf qosaggregateid; //type: uint32
        ydk::YLeaf qosaggregatepolicerid; //type: uint32

}; // CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry


class CISCOQOSPIBMIB::QosMacClassificationTable : public ydk::Entity
{
    public:
        QosMacClassificationTable();
        ~QosMacClassificationTable();

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

        class QosMacClassificationEntry; //type: CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry

        ydk::YList qosmacclassificationentry;
        
}; // CISCOQOSPIBMIB::QosMacClassificationTable


class CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry : public ydk::Entity
{
    public:
        QosMacClassificationEntry();
        ~QosMacClassificationEntry();

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

        ydk::YLeaf qosmacclassificationid; //type: uint32
        ydk::YLeaf qosdstmacvlan; //type: int32
        ydk::YLeaf qosdstmacaddress; //type: string
        ydk::YLeaf qosdstmaccos; //type: int32

}; // CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry


class CISCOQOSPIBMIB::QosIpAceTable : public ydk::Entity
{
    public:
        QosIpAceTable();
        ~QosIpAceTable();

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

        class QosIpAceEntry; //type: CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry

        ydk::YList qosipaceentry;
        
}; // CISCOQOSPIBMIB::QosIpAceTable


class CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry : public ydk::Entity
{
    public:
        QosIpAceEntry();
        ~QosIpAceEntry();

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

        ydk::YLeaf qosipaceid; //type: uint32
        ydk::YLeaf qosipacedstaddr; //type: string
        ydk::YLeaf qosipacedstaddrmask; //type: string
        ydk::YLeaf qosipacesrcaddr; //type: string
        ydk::YLeaf qosipacesrcaddrmask; //type: string
        ydk::YLeaf qosipacedscpmin; //type: int32
        ydk::YLeaf qosipacedscpmax; //type: int32
        ydk::YLeaf qosipaceprotocol; //type: int32
        ydk::YLeaf qosipacedstl4portmin; //type: int32
        ydk::YLeaf qosipacedstl4portmax; //type: int32
        ydk::YLeaf qosipacesrcl4portmin; //type: int32
        ydk::YLeaf qosipacesrcl4portmax; //type: int32
        ydk::YLeaf qosipacepermit; //type: boolean

}; // CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry


class CISCOQOSPIBMIB::QosIpAclDefinitionTable : public ydk::Entity
{
    public:
        QosIpAclDefinitionTable();
        ~QosIpAclDefinitionTable();

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

        class QosIpAclDefinitionEntry; //type: CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry

        ydk::YList qosipacldefinitionentry;
        
}; // CISCOQOSPIBMIB::QosIpAclDefinitionTable


class CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry : public ydk::Entity
{
    public:
        QosIpAclDefinitionEntry();
        ~QosIpAclDefinitionEntry();

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

        ydk::YLeaf qosipacldefinitionid; //type: uint32
        ydk::YLeaf qosipaclid; //type: uint32
        ydk::YLeaf qosipaceorder; //type: uint32
        ydk::YLeaf qosipacldefaceid; //type: uint32

}; // CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry


class CISCOQOSPIBMIB::QosIpAclActionTable : public ydk::Entity
{
    public:
        QosIpAclActionTable();
        ~QosIpAclActionTable();

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

        class QosIpAclActionEntry; //type: CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry

        ydk::YList qosipaclactionentry;
        
}; // CISCOQOSPIBMIB::QosIpAclActionTable


class CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry : public ydk::Entity
{
    public:
        QosIpAclActionEntry();
        ~QosIpAclActionEntry();

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

        ydk::YLeaf qosipaclactionid; //type: uint32
        ydk::YLeaf qosipaclactaclid; //type: uint32
        ydk::YLeaf qosipaclinterfaceroles; //type: binary
        ydk::YLeaf qosipaclinterfacedirection; //type: QosIpAclInterfaceDirection
        ydk::YLeaf qosipaclorder; //type: uint32
        ydk::YLeaf qosipacldscp; //type: int32
        ydk::YLeaf qosipacldscptrusted; //type: boolean
        ydk::YLeaf qosipaclmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosipaclaggregateid; //type: uint32
        class QosIpAclInterfaceDirection;

}; // CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry


class CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable : public ydk::Entity
{
    public:
        QosIfSchedulingPreferencesTable();
        ~QosIfSchedulingPreferencesTable();

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

        class QosIfSchedulingPreferenceEntry; //type: CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry

        ydk::YList qosifschedulingpreferenceentry;
        
}; // CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable


class CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry : public ydk::Entity
{
    public:
        QosIfSchedulingPreferenceEntry();
        ~QosIfSchedulingPreferenceEntry();

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

        ydk::YLeaf qosifschedulingpreferenceid; //type: uint32
        ydk::YLeaf qosifschedulingroles; //type: binary
        ydk::YLeaf qosifschedulingpreference; //type: int32
        ydk::YLeaf qosifschedulingdiscipline; //type: QosIfSchedulingDiscipline
        ydk::YLeaf qosifschedulingqueuetype; //type: QosInterfaceQueueType
        class QosIfSchedulingDiscipline;

}; // CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry


class CISCOQOSPIBMIB::QosIfDropPreferenceTable : public ydk::Entity
{
    public:
        QosIfDropPreferenceTable();
        ~QosIfDropPreferenceTable();

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

        class QosIfDropPreferenceEntry; //type: CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry

        ydk::YList qosifdroppreferenceentry;
        
}; // CISCOQOSPIBMIB::QosIfDropPreferenceTable


class CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry : public ydk::Entity
{
    public:
        QosIfDropPreferenceEntry();
        ~QosIfDropPreferenceEntry();

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

        ydk::YLeaf qosifdroppreferenceid; //type: uint32
        ydk::YLeaf qosifdroproles; //type: binary
        ydk::YLeaf qosifdroppreference; //type: int32
        ydk::YLeaf qosifdropdiscipline; //type: QosIfDropDiscipline
        class QosIfDropDiscipline;

}; // CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry


class CISCOQOSPIBMIB::QosIfDscpAssignmentTable : public ydk::Entity
{
    public:
        QosIfDscpAssignmentTable();
        ~QosIfDscpAssignmentTable();

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

        class QosIfDscpAssignmentEntry; //type: CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry

        ydk::YList qosifdscpassignmententry;
        
}; // CISCOQOSPIBMIB::QosIfDscpAssignmentTable


class CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry : public ydk::Entity
{
    public:
        QosIfDscpAssignmentEntry();
        ~QosIfDscpAssignmentEntry();

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

        ydk::YLeaf qosifdscpassignmentid; //type: uint32
        ydk::YLeaf qosifdscproles; //type: binary
        ydk::YLeaf qosifqueuetype; //type: QosInterfaceQueueType
        ydk::YLeaf qosifdscp; //type: int32
        ydk::YLeaf qosifqueue; //type: int32
        ydk::YLeaf qosifthresholdset; //type: int32

}; // CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry


class CISCOQOSPIBMIB::QosIfRedTable : public ydk::Entity
{
    public:
        QosIfRedTable();
        ~QosIfRedTable();

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

        class QosIfRedEntry; //type: CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry

        ydk::YList qosifredentry;
        
}; // CISCOQOSPIBMIB::QosIfRedTable


class CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry : public ydk::Entity
{
    public:
        QosIfRedEntry();
        ~QosIfRedEntry();

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

        ydk::YLeaf qosifredid; //type: uint32
        ydk::YLeaf qosifredroles; //type: binary
        ydk::YLeaf qosifrednumthresholdsets; //type: ThresholdSetRange
        ydk::YLeaf qosifredthresholdset; //type: int32
        ydk::YLeaf qosifredthresholdsetlower; //type: int32
        ydk::YLeaf qosifredthresholdsetupper; //type: int32

}; // CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry


class CISCOQOSPIBMIB::QosIfTailDropTable : public ydk::Entity
{
    public:
        QosIfTailDropTable();
        ~QosIfTailDropTable();

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

        class QosIfTailDropEntry; //type: CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry

        ydk::YList qosiftaildropentry;
        
}; // CISCOQOSPIBMIB::QosIfTailDropTable


class CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry : public ydk::Entity
{
    public:
        QosIfTailDropEntry();
        ~QosIfTailDropEntry();

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

        ydk::YLeaf qosiftaildropid; //type: uint32
        ydk::YLeaf qosiftaildroproles; //type: binary
        ydk::YLeaf qosiftaildropnumthresholdsets; //type: ThresholdSetRange
        ydk::YLeaf qosiftaildropthresholdset; //type: int32
        ydk::YLeaf qosiftaildropthresholdsetvalue; //type: int32

}; // CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry


class CISCOQOSPIBMIB::QosIfWeightsTable : public ydk::Entity
{
    public:
        QosIfWeightsTable();
        ~QosIfWeightsTable();

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

        class QosIfWeightsEntry; //type: CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry

        ydk::YList qosifweightsentry;
        
}; // CISCOQOSPIBMIB::QosIfWeightsTable


class CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry : public ydk::Entity
{
    public:
        QosIfWeightsEntry();
        ~QosIfWeightsEntry();

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

        ydk::YLeaf qosifweightsid; //type: uint32
        ydk::YLeaf qosifweightsroles; //type: binary
        ydk::YLeaf qosifweightsnumqueues; //type: QueueRange
        ydk::YLeaf qosifweightsqueue; //type: int32
        ydk::YLeaf qosifweightsdrainsize; //type: uint32
        ydk::YLeaf qosifweightsqueuesize; //type: uint32

}; // CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry

class QueueRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ;
        static const ydk::Enum::YLeaf twoQ;
        static const ydk::Enum::YLeaf threeQ;
        static const ydk::Enum::YLeaf fourQ;
        static const ydk::Enum::YLeaf eightQ;
        static const ydk::Enum::YLeaf sixteenQ;
        static const ydk::Enum::YLeaf thirtyTwoQ;
        static const ydk::Enum::YLeaf sixtyFourQ;

};

class ThresholdSetRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zeroT;
        static const ydk::Enum::YLeaf oneT;
        static const ydk::Enum::YLeaf twoT;
        static const ydk::Enum::YLeaf fourT;
        static const ydk::Enum::YLeaf eightT;

};

class QosInterfaceQueueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ1t;
        static const ydk::Enum::YLeaf oneQ2t;
        static const ydk::Enum::YLeaf oneQ4t;
        static const ydk::Enum::YLeaf oneQ8t;
        static const ydk::Enum::YLeaf twoQ1t;
        static const ydk::Enum::YLeaf twoQ2t;
        static const ydk::Enum::YLeaf twoQ4t;
        static const ydk::Enum::YLeaf twoQ8t;
        static const ydk::Enum::YLeaf threeQ1t;
        static const ydk::Enum::YLeaf threeQ2t;
        static const ydk::Enum::YLeaf threeQ4t;
        static const ydk::Enum::YLeaf threeQ8t;
        static const ydk::Enum::YLeaf fourQ1t;
        static const ydk::Enum::YLeaf fourQ2t;
        static const ydk::Enum::YLeaf fourQ4t;
        static const ydk::Enum::YLeaf fourQ8t;
        static const ydk::Enum::YLeaf eightQ1t;
        static const ydk::Enum::YLeaf eightQ2t;
        static const ydk::Enum::YLeaf eightQ4t;
        static const ydk::Enum::YLeaf eightQ8t;
        static const ydk::Enum::YLeaf sixteenQ1t;
        static const ydk::Enum::YLeaf sixteenQ2t;
        static const ydk::Enum::YLeaf sixteenQ4t;
        static const ydk::Enum::YLeaf sixtyfourQ1t;
        static const ydk::Enum::YLeaf sixtyfourQ2t;
        static const ydk::Enum::YLeaf sixtyfourQ4t;
        static const ydk::Enum::YLeaf oneP1Q0t;
        static const ydk::Enum::YLeaf oneP1Q4t;
        static const ydk::Enum::YLeaf oneP1Q8t;
        static const ydk::Enum::YLeaf oneP2Q1t;
        static const ydk::Enum::YLeaf oneP2Q2t;
        static const ydk::Enum::YLeaf oneP3Q1t;
        static const ydk::Enum::YLeaf oneP7Q8t;
        static const ydk::Enum::YLeaf oneP3Q8t;
        static const ydk::Enum::YLeaf sixteenQ8t;
        static const ydk::Enum::YLeaf oneP15Q8t;
        static const ydk::Enum::YLeaf oneP15Q1t;
        static const ydk::Enum::YLeaf oneP7Q1t;
        static const ydk::Enum::YLeaf oneP31Q1t;
        static const ydk::Enum::YLeaf thirtytwoQ1t;
        static const ydk::Enum::YLeaf thirtytwoQ8t;
        static const ydk::Enum::YLeaf oneP31Q8t;
        static const ydk::Enum::YLeaf oneP7Q4t;
        static const ydk::Enum::YLeaf oneP3Q4t;
        static const ydk::Enum::YLeaf oneP7Q2t;

};

class CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::QosUnmatchedPolicyDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::QosPolicerAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf mark;
        static const ydk::Enum::YLeaf shape;

};

class CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::QosIpAclInterfaceDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf weightedFairQueueing;
        static const ydk::Enum::YLeaf weightedRoundRobin;
        static const ydk::Enum::YLeaf customQueueing;
        static const ydk::Enum::YLeaf priorityQueueing;
        static const ydk::Enum::YLeaf classBasedWFQ;
        static const ydk::Enum::YLeaf fifo;
        static const ydk::Enum::YLeaf pqWrr;
        static const ydk::Enum::YLeaf pqCbwfq;

};

class CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::QosIfDropDiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qosIfDropWRED;
        static const ydk::Enum::YLeaf qosIfDropTailDrop;

};


}
}

#endif /* _CISCO_QOS_PIB_MIB_ */

