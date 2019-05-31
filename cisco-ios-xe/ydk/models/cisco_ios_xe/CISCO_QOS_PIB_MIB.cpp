
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_QOS_PIB_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_QOS_PIB_MIB {

CISCOQOSPIBMIB::CISCOQOSPIBMIB()
    :
    qosdevicepibincarnationtable(std::make_shared<CISCOQOSPIBMIB::QosDevicePibIncarnationTable>())
    , qosdeviceattributetable(std::make_shared<CISCOQOSPIBMIB::QosDeviceAttributeTable>())
    , qosinterfacetypetable(std::make_shared<CISCOQOSPIBMIB::QosInterfaceTypeTable>())
    , qosdiffservmappingtable(std::make_shared<CISCOQOSPIBMIB::QosDiffServMappingTable>())
    , qoscostodscptable(std::make_shared<CISCOQOSPIBMIB::QosCosToDscpTable>())
    , qosunmatchedpolicytable(std::make_shared<CISCOQOSPIBMIB::QosUnmatchedPolicyTable>())
    , qospolicertable(std::make_shared<CISCOQOSPIBMIB::QosPolicerTable>())
    , qosaggregatetable(std::make_shared<CISCOQOSPIBMIB::QosAggregateTable>())
    , qosmacclassificationtable(std::make_shared<CISCOQOSPIBMIB::QosMacClassificationTable>())
    , qosipacetable(std::make_shared<CISCOQOSPIBMIB::QosIpAceTable>())
    , qosipacldefinitiontable(std::make_shared<CISCOQOSPIBMIB::QosIpAclDefinitionTable>())
    , qosipaclactiontable(std::make_shared<CISCOQOSPIBMIB::QosIpAclActionTable>())
    , qosifschedulingpreferencestable(std::make_shared<CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable>())
    , qosifdroppreferencetable(std::make_shared<CISCOQOSPIBMIB::QosIfDropPreferenceTable>())
    , qosifdscpassignmenttable(std::make_shared<CISCOQOSPIBMIB::QosIfDscpAssignmentTable>())
    , qosifredtable(std::make_shared<CISCOQOSPIBMIB::QosIfRedTable>())
    , qosiftaildroptable(std::make_shared<CISCOQOSPIBMIB::QosIfTailDropTable>())
    , qosifweightstable(std::make_shared<CISCOQOSPIBMIB::QosIfWeightsTable>())
{
    qosdevicepibincarnationtable->parent = this;
    qosdeviceattributetable->parent = this;
    qosinterfacetypetable->parent = this;
    qosdiffservmappingtable->parent = this;
    qoscostodscptable->parent = this;
    qosunmatchedpolicytable->parent = this;
    qospolicertable->parent = this;
    qosaggregatetable->parent = this;
    qosmacclassificationtable->parent = this;
    qosipacetable->parent = this;
    qosipacldefinitiontable->parent = this;
    qosipaclactiontable->parent = this;
    qosifschedulingpreferencestable->parent = this;
    qosifdroppreferencetable->parent = this;
    qosifdscpassignmenttable->parent = this;
    qosifredtable->parent = this;
    qosiftaildroptable->parent = this;
    qosifweightstable->parent = this;

    yang_name = "CISCO-QOS-PIB-MIB"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::~CISCOQOSPIBMIB()
{
}

bool CISCOQOSPIBMIB::has_data() const
{
    if (is_presence_container) return true;
    return (qosdevicepibincarnationtable !=  nullptr && qosdevicepibincarnationtable->has_data())
	|| (qosdeviceattributetable !=  nullptr && qosdeviceattributetable->has_data())
	|| (qosinterfacetypetable !=  nullptr && qosinterfacetypetable->has_data())
	|| (qosdiffservmappingtable !=  nullptr && qosdiffservmappingtable->has_data())
	|| (qoscostodscptable !=  nullptr && qoscostodscptable->has_data())
	|| (qosunmatchedpolicytable !=  nullptr && qosunmatchedpolicytable->has_data())
	|| (qospolicertable !=  nullptr && qospolicertable->has_data())
	|| (qosaggregatetable !=  nullptr && qosaggregatetable->has_data())
	|| (qosmacclassificationtable !=  nullptr && qosmacclassificationtable->has_data())
	|| (qosipacetable !=  nullptr && qosipacetable->has_data())
	|| (qosipacldefinitiontable !=  nullptr && qosipacldefinitiontable->has_data())
	|| (qosipaclactiontable !=  nullptr && qosipaclactiontable->has_data())
	|| (qosifschedulingpreferencestable !=  nullptr && qosifschedulingpreferencestable->has_data())
	|| (qosifdroppreferencetable !=  nullptr && qosifdroppreferencetable->has_data())
	|| (qosifdscpassignmenttable !=  nullptr && qosifdscpassignmenttable->has_data())
	|| (qosifredtable !=  nullptr && qosifredtable->has_data())
	|| (qosiftaildroptable !=  nullptr && qosiftaildroptable->has_data())
	|| (qosifweightstable !=  nullptr && qosifweightstable->has_data());
}

bool CISCOQOSPIBMIB::has_operation() const
{
    return is_set(yfilter)
	|| (qosdevicepibincarnationtable !=  nullptr && qosdevicepibincarnationtable->has_operation())
	|| (qosdeviceattributetable !=  nullptr && qosdeviceattributetable->has_operation())
	|| (qosinterfacetypetable !=  nullptr && qosinterfacetypetable->has_operation())
	|| (qosdiffservmappingtable !=  nullptr && qosdiffservmappingtable->has_operation())
	|| (qoscostodscptable !=  nullptr && qoscostodscptable->has_operation())
	|| (qosunmatchedpolicytable !=  nullptr && qosunmatchedpolicytable->has_operation())
	|| (qospolicertable !=  nullptr && qospolicertable->has_operation())
	|| (qosaggregatetable !=  nullptr && qosaggregatetable->has_operation())
	|| (qosmacclassificationtable !=  nullptr && qosmacclassificationtable->has_operation())
	|| (qosipacetable !=  nullptr && qosipacetable->has_operation())
	|| (qosipacldefinitiontable !=  nullptr && qosipacldefinitiontable->has_operation())
	|| (qosipaclactiontable !=  nullptr && qosipaclactiontable->has_operation())
	|| (qosifschedulingpreferencestable !=  nullptr && qosifschedulingpreferencestable->has_operation())
	|| (qosifdroppreferencetable !=  nullptr && qosifdroppreferencetable->has_operation())
	|| (qosifdscpassignmenttable !=  nullptr && qosifdscpassignmenttable->has_operation())
	|| (qosifredtable !=  nullptr && qosifredtable->has_operation())
	|| (qosiftaildroptable !=  nullptr && qosiftaildroptable->has_operation())
	|| (qosifweightstable !=  nullptr && qosifweightstable->has_operation());
}

std::string CISCOQOSPIBMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDevicePibIncarnationTable")
    {
        if(qosdevicepibincarnationtable == nullptr)
        {
            qosdevicepibincarnationtable = std::make_shared<CISCOQOSPIBMIB::QosDevicePibIncarnationTable>();
        }
        return qosdevicepibincarnationtable;
    }

    if(child_yang_name == "qosDeviceAttributeTable")
    {
        if(qosdeviceattributetable == nullptr)
        {
            qosdeviceattributetable = std::make_shared<CISCOQOSPIBMIB::QosDeviceAttributeTable>();
        }
        return qosdeviceattributetable;
    }

    if(child_yang_name == "qosInterfaceTypeTable")
    {
        if(qosinterfacetypetable == nullptr)
        {
            qosinterfacetypetable = std::make_shared<CISCOQOSPIBMIB::QosInterfaceTypeTable>();
        }
        return qosinterfacetypetable;
    }

    if(child_yang_name == "qosDiffServMappingTable")
    {
        if(qosdiffservmappingtable == nullptr)
        {
            qosdiffservmappingtable = std::make_shared<CISCOQOSPIBMIB::QosDiffServMappingTable>();
        }
        return qosdiffservmappingtable;
    }

    if(child_yang_name == "qosCosToDscpTable")
    {
        if(qoscostodscptable == nullptr)
        {
            qoscostodscptable = std::make_shared<CISCOQOSPIBMIB::QosCosToDscpTable>();
        }
        return qoscostodscptable;
    }

    if(child_yang_name == "qosUnmatchedPolicyTable")
    {
        if(qosunmatchedpolicytable == nullptr)
        {
            qosunmatchedpolicytable = std::make_shared<CISCOQOSPIBMIB::QosUnmatchedPolicyTable>();
        }
        return qosunmatchedpolicytable;
    }

    if(child_yang_name == "qosPolicerTable")
    {
        if(qospolicertable == nullptr)
        {
            qospolicertable = std::make_shared<CISCOQOSPIBMIB::QosPolicerTable>();
        }
        return qospolicertable;
    }

    if(child_yang_name == "qosAggregateTable")
    {
        if(qosaggregatetable == nullptr)
        {
            qosaggregatetable = std::make_shared<CISCOQOSPIBMIB::QosAggregateTable>();
        }
        return qosaggregatetable;
    }

    if(child_yang_name == "qosMacClassificationTable")
    {
        if(qosmacclassificationtable == nullptr)
        {
            qosmacclassificationtable = std::make_shared<CISCOQOSPIBMIB::QosMacClassificationTable>();
        }
        return qosmacclassificationtable;
    }

    if(child_yang_name == "qosIpAceTable")
    {
        if(qosipacetable == nullptr)
        {
            qosipacetable = std::make_shared<CISCOQOSPIBMIB::QosIpAceTable>();
        }
        return qosipacetable;
    }

    if(child_yang_name == "qosIpAclDefinitionTable")
    {
        if(qosipacldefinitiontable == nullptr)
        {
            qosipacldefinitiontable = std::make_shared<CISCOQOSPIBMIB::QosIpAclDefinitionTable>();
        }
        return qosipacldefinitiontable;
    }

    if(child_yang_name == "qosIpAclActionTable")
    {
        if(qosipaclactiontable == nullptr)
        {
            qosipaclactiontable = std::make_shared<CISCOQOSPIBMIB::QosIpAclActionTable>();
        }
        return qosipaclactiontable;
    }

    if(child_yang_name == "qosIfSchedulingPreferencesTable")
    {
        if(qosifschedulingpreferencestable == nullptr)
        {
            qosifschedulingpreferencestable = std::make_shared<CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable>();
        }
        return qosifschedulingpreferencestable;
    }

    if(child_yang_name == "qosIfDropPreferenceTable")
    {
        if(qosifdroppreferencetable == nullptr)
        {
            qosifdroppreferencetable = std::make_shared<CISCOQOSPIBMIB::QosIfDropPreferenceTable>();
        }
        return qosifdroppreferencetable;
    }

    if(child_yang_name == "qosIfDscpAssignmentTable")
    {
        if(qosifdscpassignmenttable == nullptr)
        {
            qosifdscpassignmenttable = std::make_shared<CISCOQOSPIBMIB::QosIfDscpAssignmentTable>();
        }
        return qosifdscpassignmenttable;
    }

    if(child_yang_name == "qosIfRedTable")
    {
        if(qosifredtable == nullptr)
        {
            qosifredtable = std::make_shared<CISCOQOSPIBMIB::QosIfRedTable>();
        }
        return qosifredtable;
    }

    if(child_yang_name == "qosIfTailDropTable")
    {
        if(qosiftaildroptable == nullptr)
        {
            qosiftaildroptable = std::make_shared<CISCOQOSPIBMIB::QosIfTailDropTable>();
        }
        return qosiftaildroptable;
    }

    if(child_yang_name == "qosIfWeightsTable")
    {
        if(qosifweightstable == nullptr)
        {
            qosifweightstable = std::make_shared<CISCOQOSPIBMIB::QosIfWeightsTable>();
        }
        return qosifweightstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qosdevicepibincarnationtable != nullptr)
    {
        _children["qosDevicePibIncarnationTable"] = qosdevicepibincarnationtable;
    }

    if(qosdeviceattributetable != nullptr)
    {
        _children["qosDeviceAttributeTable"] = qosdeviceattributetable;
    }

    if(qosinterfacetypetable != nullptr)
    {
        _children["qosInterfaceTypeTable"] = qosinterfacetypetable;
    }

    if(qosdiffservmappingtable != nullptr)
    {
        _children["qosDiffServMappingTable"] = qosdiffservmappingtable;
    }

    if(qoscostodscptable != nullptr)
    {
        _children["qosCosToDscpTable"] = qoscostodscptable;
    }

    if(qosunmatchedpolicytable != nullptr)
    {
        _children["qosUnmatchedPolicyTable"] = qosunmatchedpolicytable;
    }

    if(qospolicertable != nullptr)
    {
        _children["qosPolicerTable"] = qospolicertable;
    }

    if(qosaggregatetable != nullptr)
    {
        _children["qosAggregateTable"] = qosaggregatetable;
    }

    if(qosmacclassificationtable != nullptr)
    {
        _children["qosMacClassificationTable"] = qosmacclassificationtable;
    }

    if(qosipacetable != nullptr)
    {
        _children["qosIpAceTable"] = qosipacetable;
    }

    if(qosipacldefinitiontable != nullptr)
    {
        _children["qosIpAclDefinitionTable"] = qosipacldefinitiontable;
    }

    if(qosipaclactiontable != nullptr)
    {
        _children["qosIpAclActionTable"] = qosipaclactiontable;
    }

    if(qosifschedulingpreferencestable != nullptr)
    {
        _children["qosIfSchedulingPreferencesTable"] = qosifschedulingpreferencestable;
    }

    if(qosifdroppreferencetable != nullptr)
    {
        _children["qosIfDropPreferenceTable"] = qosifdroppreferencetable;
    }

    if(qosifdscpassignmenttable != nullptr)
    {
        _children["qosIfDscpAssignmentTable"] = qosifdscpassignmenttable;
    }

    if(qosifredtable != nullptr)
    {
        _children["qosIfRedTable"] = qosifredtable;
    }

    if(qosiftaildroptable != nullptr)
    {
        _children["qosIfTailDropTable"] = qosiftaildroptable;
    }

    if(qosifweightstable != nullptr)
    {
        _children["qosIfWeightsTable"] = qosifweightstable;
    }

    return _children;
}

void CISCOQOSPIBMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::clone_ptr() const
{
    return std::make_shared<CISCOQOSPIBMIB>();
}

std::string CISCOQOSPIBMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOQOSPIBMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOQOSPIBMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOQOSPIBMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOQOSPIBMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDevicePibIncarnationTable" || name == "qosDeviceAttributeTable" || name == "qosInterfaceTypeTable" || name == "qosDiffServMappingTable" || name == "qosCosToDscpTable" || name == "qosUnmatchedPolicyTable" || name == "qosPolicerTable" || name == "qosAggregateTable" || name == "qosMacClassificationTable" || name == "qosIpAceTable" || name == "qosIpAclDefinitionTable" || name == "qosIpAclActionTable" || name == "qosIfSchedulingPreferencesTable" || name == "qosIfDropPreferenceTable" || name == "qosIfDscpAssignmentTable" || name == "qosIfRedTable" || name == "qosIfTailDropTable" || name == "qosIfWeightsTable")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationTable()
    :
    qosdevicepibincarnationentry(this, {"qosdeviceincarnationid"})
{

    yang_name = "qosDevicePibIncarnationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDevicePibIncarnationTable::~QosDevicePibIncarnationTable()
{
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosdevicepibincarnationentry.len(); index++)
    {
        if(qosdevicepibincarnationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::has_operation() const
{
    for (std::size_t index=0; index<qosdevicepibincarnationentry.len(); index++)
    {
        if(qosdevicepibincarnationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosDevicePibIncarnationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDevicePibIncarnationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDevicePibIncarnationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDevicePibIncarnationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDevicePibIncarnationEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry>();
        ent_->parent = this;
        qosdevicepibincarnationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDevicePibIncarnationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosdevicepibincarnationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosDevicePibIncarnationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosDevicePibIncarnationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDevicePibIncarnationEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::QosDevicePibIncarnationEntry()
    :
    qosdeviceincarnationid{YType::uint32, "qosDeviceIncarnationId"},
    qosdevicepdpname{YType::str, "qosDevicePdpName"},
    qosdevicepibincarnation{YType::str, "qosDevicePibIncarnation"},
    qosdevicepibttl{YType::uint32, "qosDevicePibTtl"}
{

    yang_name = "qosDevicePibIncarnationEntry"; yang_parent_name = "qosDevicePibIncarnationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::~QosDevicePibIncarnationEntry()
{
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosdeviceincarnationid.is_set
	|| qosdevicepdpname.is_set
	|| qosdevicepibincarnation.is_set
	|| qosdevicepibttl.is_set;
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdeviceincarnationid.yfilter)
	|| ydk::is_set(qosdevicepdpname.yfilter)
	|| ydk::is_set(qosdevicepibincarnation.yfilter)
	|| ydk::is_set(qosdevicepibttl.yfilter);
}

std::string CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDevicePibIncarnationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationEntry";
    ADD_KEY_TOKEN(qosdeviceincarnationid, "qosDeviceIncarnationId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceincarnationid.is_set || is_set(qosdeviceincarnationid.yfilter)) leaf_name_data.push_back(qosdeviceincarnationid.get_name_leafdata());
    if (qosdevicepdpname.is_set || is_set(qosdevicepdpname.yfilter)) leaf_name_data.push_back(qosdevicepdpname.get_name_leafdata());
    if (qosdevicepibincarnation.is_set || is_set(qosdevicepibincarnation.yfilter)) leaf_name_data.push_back(qosdevicepibincarnation.get_name_leafdata());
    if (qosdevicepibttl.is_set || is_set(qosdevicepibttl.yfilter)) leaf_name_data.push_back(qosdevicepibttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDeviceIncarnationId")
    {
        qosdeviceincarnationid = value;
        qosdeviceincarnationid.value_namespace = name_space;
        qosdeviceincarnationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePdpName")
    {
        qosdevicepdpname = value;
        qosdevicepdpname.value_namespace = name_space;
        qosdevicepdpname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePibIncarnation")
    {
        qosdevicepibincarnation = value;
        qosdevicepibincarnation.value_namespace = name_space;
        qosdevicepibincarnation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePibTtl")
    {
        qosdevicepibttl = value;
        qosdevicepibttl.value_namespace = name_space;
        qosdevicepibttl.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDeviceIncarnationId")
    {
        qosdeviceincarnationid.yfilter = yfilter;
    }
    if(value_path == "qosDevicePdpName")
    {
        qosdevicepdpname.yfilter = yfilter;
    }
    if(value_path == "qosDevicePibIncarnation")
    {
        qosdevicepibincarnation.yfilter = yfilter;
    }
    if(value_path == "qosDevicePibTtl")
    {
        qosdevicepibttl.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosDevicePibIncarnationTable::QosDevicePibIncarnationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceIncarnationId" || name == "qosDevicePdpName" || name == "qosDevicePibIncarnation" || name == "qosDevicePibTtl")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeTable()
    :
    qosdeviceattributeentry(this, {"qosdeviceattributeid"})
{

    yang_name = "qosDeviceAttributeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDeviceAttributeTable::~QosDeviceAttributeTable()
{
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosdeviceattributeentry.len(); index++)
    {
        if(qosdeviceattributeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::has_operation() const
{
    for (std::size_t index=0; index<qosdeviceattributeentry.len(); index++)
    {
        if(qosdeviceattributeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosDeviceAttributeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDeviceAttributeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDeviceAttributeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDeviceAttributeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDeviceAttributeEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry>();
        ent_->parent = this;
        qosdeviceattributeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDeviceAttributeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosdeviceattributeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosDeviceAttributeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosDeviceAttributeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceAttributeEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::QosDeviceAttributeEntry()
    :
    qosdeviceattributeid{YType::uint32, "qosDeviceAttributeId"},
    qosdevicepepdomain{YType::str, "qosDevicePepDomain"},
    qosdeviceprimarypdp{YType::str, "qosDevicePrimaryPdp"},
    qosdevicesecondarypdp{YType::str, "qosDeviceSecondaryPdp"},
    qosdevicemaxmessagesize{YType::uint32, "qosDeviceMaxMessageSize"},
    qosdevicecapabilities{YType::bits, "qosDeviceCapabilities"}
{

    yang_name = "qosDeviceAttributeEntry"; yang_parent_name = "qosDeviceAttributeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::~QosDeviceAttributeEntry()
{
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosdeviceattributeid.is_set
	|| qosdevicepepdomain.is_set
	|| qosdeviceprimarypdp.is_set
	|| qosdevicesecondarypdp.is_set
	|| qosdevicemaxmessagesize.is_set
	|| qosdevicecapabilities.is_set;
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdeviceattributeid.yfilter)
	|| ydk::is_set(qosdevicepepdomain.yfilter)
	|| ydk::is_set(qosdeviceprimarypdp.yfilter)
	|| ydk::is_set(qosdevicesecondarypdp.yfilter)
	|| ydk::is_set(qosdevicemaxmessagesize.yfilter)
	|| ydk::is_set(qosdevicecapabilities.yfilter);
}

std::string CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDeviceAttributeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeEntry";
    ADD_KEY_TOKEN(qosdeviceattributeid, "qosDeviceAttributeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceattributeid.is_set || is_set(qosdeviceattributeid.yfilter)) leaf_name_data.push_back(qosdeviceattributeid.get_name_leafdata());
    if (qosdevicepepdomain.is_set || is_set(qosdevicepepdomain.yfilter)) leaf_name_data.push_back(qosdevicepepdomain.get_name_leafdata());
    if (qosdeviceprimarypdp.is_set || is_set(qosdeviceprimarypdp.yfilter)) leaf_name_data.push_back(qosdeviceprimarypdp.get_name_leafdata());
    if (qosdevicesecondarypdp.is_set || is_set(qosdevicesecondarypdp.yfilter)) leaf_name_data.push_back(qosdevicesecondarypdp.get_name_leafdata());
    if (qosdevicemaxmessagesize.is_set || is_set(qosdevicemaxmessagesize.yfilter)) leaf_name_data.push_back(qosdevicemaxmessagesize.get_name_leafdata());
    if (qosdevicecapabilities.is_set || is_set(qosdevicecapabilities.yfilter)) leaf_name_data.push_back(qosdevicecapabilities.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDeviceAttributeId")
    {
        qosdeviceattributeid = value;
        qosdeviceattributeid.value_namespace = name_space;
        qosdeviceattributeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePepDomain")
    {
        qosdevicepepdomain = value;
        qosdevicepepdomain.value_namespace = name_space;
        qosdevicepepdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePrimaryPdp")
    {
        qosdeviceprimarypdp = value;
        qosdeviceprimarypdp.value_namespace = name_space;
        qosdeviceprimarypdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDeviceSecondaryPdp")
    {
        qosdevicesecondarypdp = value;
        qosdevicesecondarypdp.value_namespace = name_space;
        qosdevicesecondarypdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDeviceMaxMessageSize")
    {
        qosdevicemaxmessagesize = value;
        qosdevicemaxmessagesize.value_namespace = name_space;
        qosdevicemaxmessagesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDeviceCapabilities")
    {
        qosdevicecapabilities[value] = true;
    }
}

void CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDeviceAttributeId")
    {
        qosdeviceattributeid.yfilter = yfilter;
    }
    if(value_path == "qosDevicePepDomain")
    {
        qosdevicepepdomain.yfilter = yfilter;
    }
    if(value_path == "qosDevicePrimaryPdp")
    {
        qosdeviceprimarypdp.yfilter = yfilter;
    }
    if(value_path == "qosDeviceSecondaryPdp")
    {
        qosdevicesecondarypdp.yfilter = yfilter;
    }
    if(value_path == "qosDeviceMaxMessageSize")
    {
        qosdevicemaxmessagesize.yfilter = yfilter;
    }
    if(value_path == "qosDeviceCapabilities")
    {
        qosdevicecapabilities.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosDeviceAttributeTable::QosDeviceAttributeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceAttributeId" || name == "qosDevicePepDomain" || name == "qosDevicePrimaryPdp" || name == "qosDeviceSecondaryPdp" || name == "qosDeviceMaxMessageSize" || name == "qosDeviceCapabilities")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeTable()
    :
    qosinterfacetypeentry(this, {"qosinterfacetypeid"})
{

    yang_name = "qosInterfaceTypeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosInterfaceTypeTable::~QosInterfaceTypeTable()
{
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosinterfacetypeentry.len(); index++)
    {
        if(qosinterfacetypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::has_operation() const
{
    for (std::size_t index=0; index<qosinterfacetypeentry.len(); index++)
    {
        if(qosinterfacetypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosInterfaceTypeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosInterfaceTypeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosInterfaceTypeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosInterfaceTypeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosInterfaceTypeEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry>();
        ent_->parent = this;
        qosinterfacetypeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosInterfaceTypeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosinterfacetypeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosInterfaceTypeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosInterfaceTypeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosInterfaceTypeEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::QosInterfaceTypeEntry()
    :
    qosinterfacetypeid{YType::uint32, "qosInterfaceTypeId"},
    qosinterfacequeuetype{YType::enumeration, "qosInterfaceQueueType"},
    qosinterfacetyperoles{YType::str, "qosInterfaceTypeRoles"},
    qosinterfacetypecapabilities{YType::bits, "qosInterfaceTypeCapabilities"}
{

    yang_name = "qosInterfaceTypeEntry"; yang_parent_name = "qosInterfaceTypeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::~QosInterfaceTypeEntry()
{
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosinterfacetypeid.is_set
	|| qosinterfacequeuetype.is_set
	|| qosinterfacetyperoles.is_set
	|| qosinterfacetypecapabilities.is_set;
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosinterfacetypeid.yfilter)
	|| ydk::is_set(qosinterfacequeuetype.yfilter)
	|| ydk::is_set(qosinterfacetyperoles.yfilter)
	|| ydk::is_set(qosinterfacetypecapabilities.yfilter);
}

std::string CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosInterfaceTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeEntry";
    ADD_KEY_TOKEN(qosinterfacetypeid, "qosInterfaceTypeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosinterfacetypeid.is_set || is_set(qosinterfacetypeid.yfilter)) leaf_name_data.push_back(qosinterfacetypeid.get_name_leafdata());
    if (qosinterfacequeuetype.is_set || is_set(qosinterfacequeuetype.yfilter)) leaf_name_data.push_back(qosinterfacequeuetype.get_name_leafdata());
    if (qosinterfacetyperoles.is_set || is_set(qosinterfacetyperoles.yfilter)) leaf_name_data.push_back(qosinterfacetyperoles.get_name_leafdata());
    if (qosinterfacetypecapabilities.is_set || is_set(qosinterfacetypecapabilities.yfilter)) leaf_name_data.push_back(qosinterfacetypecapabilities.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosInterfaceTypeId")
    {
        qosinterfacetypeid = value;
        qosinterfacetypeid.value_namespace = name_space;
        qosinterfacetypeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosInterfaceQueueType")
    {
        qosinterfacequeuetype = value;
        qosinterfacequeuetype.value_namespace = name_space;
        qosinterfacequeuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosInterfaceTypeRoles")
    {
        qosinterfacetyperoles = value;
        qosinterfacetyperoles.value_namespace = name_space;
        qosinterfacetyperoles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosInterfaceTypeCapabilities")
    {
        qosinterfacetypecapabilities[value] = true;
    }
}

void CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosInterfaceTypeId")
    {
        qosinterfacetypeid.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceQueueType")
    {
        qosinterfacequeuetype.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceTypeRoles")
    {
        qosinterfacetyperoles.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceTypeCapabilities")
    {
        qosinterfacetypecapabilities.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosInterfaceTypeTable::QosInterfaceTypeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosInterfaceTypeId" || name == "qosInterfaceQueueType" || name == "qosInterfaceTypeRoles" || name == "qosInterfaceTypeCapabilities")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingTable()
    :
    qosdiffservmappingentry(this, {"qosdscp"})
{

    yang_name = "qosDiffServMappingTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDiffServMappingTable::~QosDiffServMappingTable()
{
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosdiffservmappingentry.len(); index++)
    {
        if(qosdiffservmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::has_operation() const
{
    for (std::size_t index=0; index<qosdiffservmappingentry.len(); index++)
    {
        if(qosdiffservmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosDiffServMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDiffServMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDiffServMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDiffServMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDiffServMappingEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry>();
        ent_->parent = this;
        qosdiffservmappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDiffServMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosdiffservmappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosDiffServMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosDiffServMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDiffServMappingEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::QosDiffServMappingEntry()
    :
    qosdscp{YType::int32, "qosDscp"},
    qosmarkeddscp{YType::int32, "qosMarkedDscp"},
    qosl2cos{YType::int32, "qosL2Cos"}
{

    yang_name = "qosDiffServMappingEntry"; yang_parent_name = "qosDiffServMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::~QosDiffServMappingEntry()
{
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosdscp.is_set
	|| qosmarkeddscp.is_set
	|| qosl2cos.is_set;
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdscp.yfilter)
	|| ydk::is_set(qosmarkeddscp.yfilter)
	|| ydk::is_set(qosl2cos.yfilter);
}

std::string CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDiffServMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingEntry";
    ADD_KEY_TOKEN(qosdscp, "qosDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdscp.is_set || is_set(qosdscp.yfilter)) leaf_name_data.push_back(qosdscp.get_name_leafdata());
    if (qosmarkeddscp.is_set || is_set(qosmarkeddscp.yfilter)) leaf_name_data.push_back(qosmarkeddscp.get_name_leafdata());
    if (qosl2cos.is_set || is_set(qosl2cos.yfilter)) leaf_name_data.push_back(qosl2cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDscp")
    {
        qosdscp = value;
        qosdscp.value_namespace = name_space;
        qosdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosMarkedDscp")
    {
        qosmarkeddscp = value;
        qosmarkeddscp.value_namespace = name_space;
        qosmarkeddscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosL2Cos")
    {
        qosl2cos = value;
        qosl2cos.value_namespace = name_space;
        qosl2cos.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDscp")
    {
        qosdscp.yfilter = yfilter;
    }
    if(value_path == "qosMarkedDscp")
    {
        qosmarkeddscp.yfilter = yfilter;
    }
    if(value_path == "qosL2Cos")
    {
        qosl2cos.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosDiffServMappingTable::QosDiffServMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDscp" || name == "qosMarkedDscp" || name == "qosL2Cos")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpTable()
    :
    qoscostodscpentry(this, {"qoscostodscpcos"})
{

    yang_name = "qosCosToDscpTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosCosToDscpTable::~QosCosToDscpTable()
{
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qoscostodscpentry.len(); index++)
    {
        if(qoscostodscpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::has_operation() const
{
    for (std::size_t index=0; index<qoscostodscpentry.len(); index++)
    {
        if(qoscostodscpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosCosToDscpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosCosToDscpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosCosToDscpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosCosToDscpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosCosToDscpEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry>();
        ent_->parent = this;
        qoscostodscpentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosCosToDscpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qoscostodscpentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosCosToDscpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosCosToDscpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosCosToDscpEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::QosCosToDscpEntry()
    :
    qoscostodscpcos{YType::int32, "qosCosToDscpCos"},
    qoscostodscpdscp{YType::int32, "qosCosToDscpDscp"}
{

    yang_name = "qosCosToDscpEntry"; yang_parent_name = "qosCosToDscpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::~QosCosToDscpEntry()
{
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::has_data() const
{
    if (is_presence_container) return true;
    return qoscostodscpcos.is_set
	|| qoscostodscpdscp.is_set;
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qoscostodscpcos.yfilter)
	|| ydk::is_set(qoscostodscpdscp.yfilter);
}

std::string CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosCosToDscpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpEntry";
    ADD_KEY_TOKEN(qoscostodscpcos, "qosCosToDscpCos");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qoscostodscpcos.is_set || is_set(qoscostodscpcos.yfilter)) leaf_name_data.push_back(qoscostodscpcos.get_name_leafdata());
    if (qoscostodscpdscp.is_set || is_set(qoscostodscpdscp.yfilter)) leaf_name_data.push_back(qoscostodscpdscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosCosToDscpCos")
    {
        qoscostodscpcos = value;
        qoscostodscpcos.value_namespace = name_space;
        qoscostodscpcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosCosToDscpDscp")
    {
        qoscostodscpdscp = value;
        qoscostodscpdscp.value_namespace = name_space;
        qoscostodscpdscp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosCosToDscpCos")
    {
        qoscostodscpcos.yfilter = yfilter;
    }
    if(value_path == "qosCosToDscpDscp")
    {
        qoscostodscpdscp.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosCosToDscpTable::QosCosToDscpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosCosToDscpCos" || name == "qosCosToDscpDscp")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyTable()
    :
    qosunmatchedpolicyentry(this, {"qosunmatchedpolicyid"})
{

    yang_name = "qosUnmatchedPolicyTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosUnmatchedPolicyTable::~QosUnmatchedPolicyTable()
{
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosunmatchedpolicyentry.len(); index++)
    {
        if(qosunmatchedpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::has_operation() const
{
    for (std::size_t index=0; index<qosunmatchedpolicyentry.len(); index++)
    {
        if(qosunmatchedpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosUnmatchedPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosUnmatchedPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosUnmatchedPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosUnmatchedPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosUnmatchedPolicyEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry>();
        ent_->parent = this;
        qosunmatchedpolicyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosUnmatchedPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosunmatchedpolicyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosUnmatchedPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosUnmatchedPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosUnmatchedPolicyEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::QosUnmatchedPolicyEntry()
    :
    qosunmatchedpolicyid{YType::uint32, "qosUnmatchedPolicyId"},
    qosunmatchedpolicyrole{YType::str, "qosUnmatchedPolicyRole"},
    qosunmatchedpolicydirection{YType::enumeration, "qosUnmatchedPolicyDirection"},
    qosunmatchedpolicydscp{YType::int32, "qosUnmatchedPolicyDscp"},
    qosunmatchedpolicydscptrusted{YType::boolean, "qosUnmatchedPolicyDscpTrusted"},
    qosunmatchpolmicroflowpolicerid{YType::uint32, "qosUnmatchPolMicroFlowPolicerId"},
    qosunmatchedpolicyaggregateid{YType::uint32, "qosUnmatchedPolicyAggregateId"}
{

    yang_name = "qosUnmatchedPolicyEntry"; yang_parent_name = "qosUnmatchedPolicyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::~QosUnmatchedPolicyEntry()
{
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosunmatchedpolicyid.is_set
	|| qosunmatchedpolicyrole.is_set
	|| qosunmatchedpolicydirection.is_set
	|| qosunmatchedpolicydscp.is_set
	|| qosunmatchedpolicydscptrusted.is_set
	|| qosunmatchpolmicroflowpolicerid.is_set
	|| qosunmatchedpolicyaggregateid.is_set;
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosunmatchedpolicyid.yfilter)
	|| ydk::is_set(qosunmatchedpolicyrole.yfilter)
	|| ydk::is_set(qosunmatchedpolicydirection.yfilter)
	|| ydk::is_set(qosunmatchedpolicydscp.yfilter)
	|| ydk::is_set(qosunmatchedpolicydscptrusted.yfilter)
	|| ydk::is_set(qosunmatchpolmicroflowpolicerid.yfilter)
	|| ydk::is_set(qosunmatchedpolicyaggregateid.yfilter);
}

std::string CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosUnmatchedPolicyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyEntry";
    ADD_KEY_TOKEN(qosunmatchedpolicyid, "qosUnmatchedPolicyId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosunmatchedpolicyid.is_set || is_set(qosunmatchedpolicyid.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyid.get_name_leafdata());
    if (qosunmatchedpolicyrole.is_set || is_set(qosunmatchedpolicyrole.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyrole.get_name_leafdata());
    if (qosunmatchedpolicydirection.is_set || is_set(qosunmatchedpolicydirection.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydirection.get_name_leafdata());
    if (qosunmatchedpolicydscp.is_set || is_set(qosunmatchedpolicydscp.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydscp.get_name_leafdata());
    if (qosunmatchedpolicydscptrusted.is_set || is_set(qosunmatchedpolicydscptrusted.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydscptrusted.get_name_leafdata());
    if (qosunmatchpolmicroflowpolicerid.is_set || is_set(qosunmatchpolmicroflowpolicerid.yfilter)) leaf_name_data.push_back(qosunmatchpolmicroflowpolicerid.get_name_leafdata());
    if (qosunmatchedpolicyaggregateid.is_set || is_set(qosunmatchedpolicyaggregateid.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyaggregateid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosUnmatchedPolicyId")
    {
        qosunmatchedpolicyid = value;
        qosunmatchedpolicyid.value_namespace = name_space;
        qosunmatchedpolicyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyRole")
    {
        qosunmatchedpolicyrole = value;
        qosunmatchedpolicyrole.value_namespace = name_space;
        qosunmatchedpolicyrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDirection")
    {
        qosunmatchedpolicydirection = value;
        qosunmatchedpolicydirection.value_namespace = name_space;
        qosunmatchedpolicydirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDscp")
    {
        qosunmatchedpolicydscp = value;
        qosunmatchedpolicydscp.value_namespace = name_space;
        qosunmatchedpolicydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDscpTrusted")
    {
        qosunmatchedpolicydscptrusted = value;
        qosunmatchedpolicydscptrusted.value_namespace = name_space;
        qosunmatchedpolicydscptrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchPolMicroFlowPolicerId")
    {
        qosunmatchpolmicroflowpolicerid = value;
        qosunmatchpolmicroflowpolicerid.value_namespace = name_space;
        qosunmatchpolmicroflowpolicerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyAggregateId")
    {
        qosunmatchedpolicyaggregateid = value;
        qosunmatchedpolicyaggregateid.value_namespace = name_space;
        qosunmatchedpolicyaggregateid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosUnmatchedPolicyId")
    {
        qosunmatchedpolicyid.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyRole")
    {
        qosunmatchedpolicyrole.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDirection")
    {
        qosunmatchedpolicydirection.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDscp")
    {
        qosunmatchedpolicydscp.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDscpTrusted")
    {
        qosunmatchedpolicydscptrusted.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchPolMicroFlowPolicerId")
    {
        qosunmatchpolmicroflowpolicerid.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyAggregateId")
    {
        qosunmatchedpolicyaggregateid.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosUnmatchedPolicyId" || name == "qosUnmatchedPolicyRole" || name == "qosUnmatchedPolicyDirection" || name == "qosUnmatchedPolicyDscp" || name == "qosUnmatchedPolicyDscpTrusted" || name == "qosUnmatchPolMicroFlowPolicerId" || name == "qosUnmatchedPolicyAggregateId")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosPolicerTable::QosPolicerTable()
    :
    qospolicerentry(this, {"qospolicerid"})
{

    yang_name = "qosPolicerTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosPolicerTable::~QosPolicerTable()
{
}

bool CISCOQOSPIBMIB::QosPolicerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qospolicerentry.len(); index++)
    {
        if(qospolicerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosPolicerTable::has_operation() const
{
    for (std::size_t index=0; index<qospolicerentry.len(); index++)
    {
        if(qospolicerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosPolicerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosPolicerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosPolicerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosPolicerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosPolicerEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry>();
        ent_->parent = this;
        qospolicerentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosPolicerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qospolicerentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosPolicerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosPolicerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosPolicerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosPolicerEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::QosPolicerEntry()
    :
    qospolicerid{YType::uint32, "qosPolicerId"},
    qospolicerrate{YType::uint32, "qosPolicerRate"},
    qospolicernormalburst{YType::uint32, "qosPolicerNormalBurst"},
    qospolicerexcessburst{YType::uint32, "qosPolicerExcessBurst"},
    qospoliceraction{YType::enumeration, "qosPolicerAction"}
{

    yang_name = "qosPolicerEntry"; yang_parent_name = "qosPolicerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::~QosPolicerEntry()
{
}

bool CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::has_data() const
{
    if (is_presence_container) return true;
    return qospolicerid.is_set
	|| qospolicerrate.is_set
	|| qospolicernormalburst.is_set
	|| qospolicerexcessburst.is_set
	|| qospoliceraction.is_set;
}

bool CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qospolicerid.yfilter)
	|| ydk::is_set(qospolicerrate.yfilter)
	|| ydk::is_set(qospolicernormalburst.yfilter)
	|| ydk::is_set(qospolicerexcessburst.yfilter)
	|| ydk::is_set(qospoliceraction.yfilter);
}

std::string CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosPolicerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerEntry";
    ADD_KEY_TOKEN(qospolicerid, "qosPolicerId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qospolicerid.is_set || is_set(qospolicerid.yfilter)) leaf_name_data.push_back(qospolicerid.get_name_leafdata());
    if (qospolicerrate.is_set || is_set(qospolicerrate.yfilter)) leaf_name_data.push_back(qospolicerrate.get_name_leafdata());
    if (qospolicernormalburst.is_set || is_set(qospolicernormalburst.yfilter)) leaf_name_data.push_back(qospolicernormalburst.get_name_leafdata());
    if (qospolicerexcessburst.is_set || is_set(qospolicerexcessburst.yfilter)) leaf_name_data.push_back(qospolicerexcessburst.get_name_leafdata());
    if (qospoliceraction.is_set || is_set(qospoliceraction.yfilter)) leaf_name_data.push_back(qospoliceraction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosPolicerId")
    {
        qospolicerid = value;
        qospolicerid.value_namespace = name_space;
        qospolicerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerRate")
    {
        qospolicerrate = value;
        qospolicerrate.value_namespace = name_space;
        qospolicerrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerNormalBurst")
    {
        qospolicernormalburst = value;
        qospolicernormalburst.value_namespace = name_space;
        qospolicernormalburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerExcessBurst")
    {
        qospolicerexcessburst = value;
        qospolicerexcessburst.value_namespace = name_space;
        qospolicerexcessburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerAction")
    {
        qospoliceraction = value;
        qospoliceraction.value_namespace = name_space;
        qospoliceraction.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosPolicerId")
    {
        qospolicerid.yfilter = yfilter;
    }
    if(value_path == "qosPolicerRate")
    {
        qospolicerrate.yfilter = yfilter;
    }
    if(value_path == "qosPolicerNormalBurst")
    {
        qospolicernormalburst.yfilter = yfilter;
    }
    if(value_path == "qosPolicerExcessBurst")
    {
        qospolicerexcessburst.yfilter = yfilter;
    }
    if(value_path == "qosPolicerAction")
    {
        qospoliceraction.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosPolicerId" || name == "qosPolicerRate" || name == "qosPolicerNormalBurst" || name == "qosPolicerExcessBurst" || name == "qosPolicerAction")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosAggregateTable::QosAggregateTable()
    :
    qosaggregateentry(this, {"qosaggregateid"})
{

    yang_name = "qosAggregateTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosAggregateTable::~QosAggregateTable()
{
}

bool CISCOQOSPIBMIB::QosAggregateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosaggregateentry.len(); index++)
    {
        if(qosaggregateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosAggregateTable::has_operation() const
{
    for (std::size_t index=0; index<qosaggregateentry.len(); index++)
    {
        if(qosaggregateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosAggregateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosAggregateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosAggregateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosAggregateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosAggregateEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry>();
        ent_->parent = this;
        qosaggregateentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosAggregateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosaggregateentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosAggregateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosAggregateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosAggregateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosAggregateEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::QosAggregateEntry()
    :
    qosaggregateid{YType::uint32, "qosAggregateId"},
    qosaggregatepolicerid{YType::uint32, "qosAggregatePolicerId"}
{

    yang_name = "qosAggregateEntry"; yang_parent_name = "qosAggregateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::~QosAggregateEntry()
{
}

bool CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosaggregateid.is_set
	|| qosaggregatepolicerid.is_set;
}

bool CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosaggregateid.yfilter)
	|| ydk::is_set(qosaggregatepolicerid.yfilter);
}

std::string CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosAggregateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateEntry";
    ADD_KEY_TOKEN(qosaggregateid, "qosAggregateId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosaggregateid.is_set || is_set(qosaggregateid.yfilter)) leaf_name_data.push_back(qosaggregateid.get_name_leafdata());
    if (qosaggregatepolicerid.is_set || is_set(qosaggregatepolicerid.yfilter)) leaf_name_data.push_back(qosaggregatepolicerid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosAggregateId")
    {
        qosaggregateid = value;
        qosaggregateid.value_namespace = name_space;
        qosaggregateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosAggregatePolicerId")
    {
        qosaggregatepolicerid = value;
        qosaggregatepolicerid.value_namespace = name_space;
        qosaggregatepolicerid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosAggregateId")
    {
        qosaggregateid.yfilter = yfilter;
    }
    if(value_path == "qosAggregatePolicerId")
    {
        qosaggregatepolicerid.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosAggregateTable::QosAggregateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosAggregateId" || name == "qosAggregatePolicerId")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationTable()
    :
    qosmacclassificationentry(this, {"qosmacclassificationid"})
{

    yang_name = "qosMacClassificationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosMacClassificationTable::~QosMacClassificationTable()
{
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosmacclassificationentry.len(); index++)
    {
        if(qosmacclassificationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::has_operation() const
{
    for (std::size_t index=0; index<qosmacclassificationentry.len(); index++)
    {
        if(qosmacclassificationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosMacClassificationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosMacClassificationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosMacClassificationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosMacClassificationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosMacClassificationEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry>();
        ent_->parent = this;
        qosmacclassificationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosMacClassificationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosmacclassificationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosMacClassificationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosMacClassificationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosMacClassificationEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::QosMacClassificationEntry()
    :
    qosmacclassificationid{YType::uint32, "qosMacClassificationId"},
    qosdstmacvlan{YType::int32, "qosDstMacVlan"},
    qosdstmacaddress{YType::str, "qosDstMacAddress"},
    qosdstmaccos{YType::int32, "qosDstMacCos"}
{

    yang_name = "qosMacClassificationEntry"; yang_parent_name = "qosMacClassificationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::~QosMacClassificationEntry()
{
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosmacclassificationid.is_set
	|| qosdstmacvlan.is_set
	|| qosdstmacaddress.is_set
	|| qosdstmaccos.is_set;
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosmacclassificationid.yfilter)
	|| ydk::is_set(qosdstmacvlan.yfilter)
	|| ydk::is_set(qosdstmacaddress.yfilter)
	|| ydk::is_set(qosdstmaccos.yfilter);
}

std::string CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosMacClassificationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationEntry";
    ADD_KEY_TOKEN(qosmacclassificationid, "qosMacClassificationId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosmacclassificationid.is_set || is_set(qosmacclassificationid.yfilter)) leaf_name_data.push_back(qosmacclassificationid.get_name_leafdata());
    if (qosdstmacvlan.is_set || is_set(qosdstmacvlan.yfilter)) leaf_name_data.push_back(qosdstmacvlan.get_name_leafdata());
    if (qosdstmacaddress.is_set || is_set(qosdstmacaddress.yfilter)) leaf_name_data.push_back(qosdstmacaddress.get_name_leafdata());
    if (qosdstmaccos.is_set || is_set(qosdstmaccos.yfilter)) leaf_name_data.push_back(qosdstmaccos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosMacClassificationId")
    {
        qosmacclassificationid = value;
        qosmacclassificationid.value_namespace = name_space;
        qosmacclassificationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacVlan")
    {
        qosdstmacvlan = value;
        qosdstmacvlan.value_namespace = name_space;
        qosdstmacvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacAddress")
    {
        qosdstmacaddress = value;
        qosdstmacaddress.value_namespace = name_space;
        qosdstmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacCos")
    {
        qosdstmaccos = value;
        qosdstmaccos.value_namespace = name_space;
        qosdstmaccos.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosMacClassificationId")
    {
        qosmacclassificationid.yfilter = yfilter;
    }
    if(value_path == "qosDstMacVlan")
    {
        qosdstmacvlan.yfilter = yfilter;
    }
    if(value_path == "qosDstMacAddress")
    {
        qosdstmacaddress.yfilter = yfilter;
    }
    if(value_path == "qosDstMacCos")
    {
        qosdstmaccos.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosMacClassificationTable::QosMacClassificationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosMacClassificationId" || name == "qosDstMacVlan" || name == "qosDstMacAddress" || name == "qosDstMacCos")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAceTable::QosIpAceTable()
    :
    qosipaceentry(this, {"qosipaceid"})
{

    yang_name = "qosIpAceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAceTable::~QosIpAceTable()
{
}

bool CISCOQOSPIBMIB::QosIpAceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosipaceentry.len(); index++)
    {
        if(qosipaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIpAceTable::has_operation() const
{
    for (std::size_t index=0; index<qosipaceentry.len(); index++)
    {
        if(qosipaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAceEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry>();
        ent_->parent = this;
        qosipaceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosipaceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIpAceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIpAceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIpAceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAceEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::QosIpAceEntry()
    :
    qosipaceid{YType::uint32, "qosIpAceId"},
    qosipacedstaddr{YType::str, "qosIpAceDstAddr"},
    qosipacedstaddrmask{YType::str, "qosIpAceDstAddrMask"},
    qosipacesrcaddr{YType::str, "qosIpAceSrcAddr"},
    qosipacesrcaddrmask{YType::str, "qosIpAceSrcAddrMask"},
    qosipacedscpmin{YType::int32, "qosIpAceDscpMin"},
    qosipacedscpmax{YType::int32, "qosIpAceDscpMax"},
    qosipaceprotocol{YType::int32, "qosIpAceProtocol"},
    qosipacedstl4portmin{YType::int32, "qosIpAceDstL4PortMin"},
    qosipacedstl4portmax{YType::int32, "qosIpAceDstL4PortMax"},
    qosipacesrcl4portmin{YType::int32, "qosIpAceSrcL4PortMin"},
    qosipacesrcl4portmax{YType::int32, "qosIpAceSrcL4PortMax"},
    qosipacepermit{YType::boolean, "qosIpAcePermit"}
{

    yang_name = "qosIpAceEntry"; yang_parent_name = "qosIpAceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::~QosIpAceEntry()
{
}

bool CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosipaceid.is_set
	|| qosipacedstaddr.is_set
	|| qosipacedstaddrmask.is_set
	|| qosipacesrcaddr.is_set
	|| qosipacesrcaddrmask.is_set
	|| qosipacedscpmin.is_set
	|| qosipacedscpmax.is_set
	|| qosipaceprotocol.is_set
	|| qosipacedstl4portmin.is_set
	|| qosipacedstl4portmax.is_set
	|| qosipacesrcl4portmin.is_set
	|| qosipacesrcl4portmax.is_set
	|| qosipacepermit.is_set;
}

bool CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipaceid.yfilter)
	|| ydk::is_set(qosipacedstaddr.yfilter)
	|| ydk::is_set(qosipacedstaddrmask.yfilter)
	|| ydk::is_set(qosipacesrcaddr.yfilter)
	|| ydk::is_set(qosipacesrcaddrmask.yfilter)
	|| ydk::is_set(qosipacedscpmin.yfilter)
	|| ydk::is_set(qosipacedscpmax.yfilter)
	|| ydk::is_set(qosipaceprotocol.yfilter)
	|| ydk::is_set(qosipacedstl4portmin.yfilter)
	|| ydk::is_set(qosipacedstl4portmax.yfilter)
	|| ydk::is_set(qosipacesrcl4portmin.yfilter)
	|| ydk::is_set(qosipacesrcl4portmax.yfilter)
	|| ydk::is_set(qosipacepermit.yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceEntry";
    ADD_KEY_TOKEN(qosipaceid, "qosIpAceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaceid.is_set || is_set(qosipaceid.yfilter)) leaf_name_data.push_back(qosipaceid.get_name_leafdata());
    if (qosipacedstaddr.is_set || is_set(qosipacedstaddr.yfilter)) leaf_name_data.push_back(qosipacedstaddr.get_name_leafdata());
    if (qosipacedstaddrmask.is_set || is_set(qosipacedstaddrmask.yfilter)) leaf_name_data.push_back(qosipacedstaddrmask.get_name_leafdata());
    if (qosipacesrcaddr.is_set || is_set(qosipacesrcaddr.yfilter)) leaf_name_data.push_back(qosipacesrcaddr.get_name_leafdata());
    if (qosipacesrcaddrmask.is_set || is_set(qosipacesrcaddrmask.yfilter)) leaf_name_data.push_back(qosipacesrcaddrmask.get_name_leafdata());
    if (qosipacedscpmin.is_set || is_set(qosipacedscpmin.yfilter)) leaf_name_data.push_back(qosipacedscpmin.get_name_leafdata());
    if (qosipacedscpmax.is_set || is_set(qosipacedscpmax.yfilter)) leaf_name_data.push_back(qosipacedscpmax.get_name_leafdata());
    if (qosipaceprotocol.is_set || is_set(qosipaceprotocol.yfilter)) leaf_name_data.push_back(qosipaceprotocol.get_name_leafdata());
    if (qosipacedstl4portmin.is_set || is_set(qosipacedstl4portmin.yfilter)) leaf_name_data.push_back(qosipacedstl4portmin.get_name_leafdata());
    if (qosipacedstl4portmax.is_set || is_set(qosipacedstl4portmax.yfilter)) leaf_name_data.push_back(qosipacedstl4portmax.get_name_leafdata());
    if (qosipacesrcl4portmin.is_set || is_set(qosipacesrcl4portmin.yfilter)) leaf_name_data.push_back(qosipacesrcl4portmin.get_name_leafdata());
    if (qosipacesrcl4portmax.is_set || is_set(qosipacesrcl4portmax.yfilter)) leaf_name_data.push_back(qosipacesrcl4portmax.get_name_leafdata());
    if (qosipacepermit.is_set || is_set(qosipacepermit.yfilter)) leaf_name_data.push_back(qosipacepermit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAceId")
    {
        qosipaceid = value;
        qosipaceid.value_namespace = name_space;
        qosipaceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstAddr")
    {
        qosipacedstaddr = value;
        qosipacedstaddr.value_namespace = name_space;
        qosipacedstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstAddrMask")
    {
        qosipacedstaddrmask = value;
        qosipacedstaddrmask.value_namespace = name_space;
        qosipacedstaddrmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcAddr")
    {
        qosipacesrcaddr = value;
        qosipacesrcaddr.value_namespace = name_space;
        qosipacesrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcAddrMask")
    {
        qosipacesrcaddrmask = value;
        qosipacesrcaddrmask.value_namespace = name_space;
        qosipacesrcaddrmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDscpMin")
    {
        qosipacedscpmin = value;
        qosipacedscpmin.value_namespace = name_space;
        qosipacedscpmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDscpMax")
    {
        qosipacedscpmax = value;
        qosipacedscpmax.value_namespace = name_space;
        qosipacedscpmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceProtocol")
    {
        qosipaceprotocol = value;
        qosipaceprotocol.value_namespace = name_space;
        qosipaceprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstL4PortMin")
    {
        qosipacedstl4portmin = value;
        qosipacedstl4portmin.value_namespace = name_space;
        qosipacedstl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstL4PortMax")
    {
        qosipacedstl4portmax = value;
        qosipacedstl4portmax.value_namespace = name_space;
        qosipacedstl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcL4PortMin")
    {
        qosipacesrcl4portmin = value;
        qosipacesrcl4portmin.value_namespace = name_space;
        qosipacesrcl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcL4PortMax")
    {
        qosipacesrcl4portmax = value;
        qosipacesrcl4portmax.value_namespace = name_space;
        qosipacesrcl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAcePermit")
    {
        qosipacepermit = value;
        qosipacepermit.value_namespace = name_space;
        qosipacepermit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAceId")
    {
        qosipaceid.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstAddr")
    {
        qosipacedstaddr.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstAddrMask")
    {
        qosipacedstaddrmask.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcAddr")
    {
        qosipacesrcaddr.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcAddrMask")
    {
        qosipacesrcaddrmask.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDscpMin")
    {
        qosipacedscpmin.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDscpMax")
    {
        qosipacedscpmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAceProtocol")
    {
        qosipaceprotocol.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstL4PortMin")
    {
        qosipacedstl4portmin.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstL4PortMax")
    {
        qosipacedstl4portmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcL4PortMin")
    {
        qosipacesrcl4portmin.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcL4PortMax")
    {
        qosipacesrcl4portmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAcePermit")
    {
        qosipacepermit.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIpAceTable::QosIpAceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAceId" || name == "qosIpAceDstAddr" || name == "qosIpAceDstAddrMask" || name == "qosIpAceSrcAddr" || name == "qosIpAceSrcAddrMask" || name == "qosIpAceDscpMin" || name == "qosIpAceDscpMax" || name == "qosIpAceProtocol" || name == "qosIpAceDstL4PortMin" || name == "qosIpAceDstL4PortMax" || name == "qosIpAceSrcL4PortMin" || name == "qosIpAceSrcL4PortMax" || name == "qosIpAcePermit")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionTable()
    :
    qosipacldefinitionentry(this, {"qosipacldefinitionid"})
{

    yang_name = "qosIpAclDefinitionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAclDefinitionTable::~QosIpAclDefinitionTable()
{
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosipacldefinitionentry.len(); index++)
    {
        if(qosipacldefinitionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::has_operation() const
{
    for (std::size_t index=0; index<qosipacldefinitionentry.len(); index++)
    {
        if(qosipacldefinitionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAclDefinitionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAclDefinitionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAclDefinitionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAclDefinitionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclDefinitionEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry>();
        ent_->parent = this;
        qosipacldefinitionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAclDefinitionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosipacldefinitionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIpAclDefinitionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIpAclDefinitionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclDefinitionEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::QosIpAclDefinitionEntry()
    :
    qosipacldefinitionid{YType::uint32, "qosIpAclDefinitionId"},
    qosipaclid{YType::uint32, "qosIpAclId"},
    qosipaceorder{YType::uint32, "qosIpAceOrder"},
    qosipacldefaceid{YType::uint32, "qosIpAclDefAceId"}
{

    yang_name = "qosIpAclDefinitionEntry"; yang_parent_name = "qosIpAclDefinitionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::~QosIpAclDefinitionEntry()
{
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosipacldefinitionid.is_set
	|| qosipaclid.is_set
	|| qosipaceorder.is_set
	|| qosipacldefaceid.is_set;
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipacldefinitionid.yfilter)
	|| ydk::is_set(qosipaclid.yfilter)
	|| ydk::is_set(qosipaceorder.yfilter)
	|| ydk::is_set(qosipacldefaceid.yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclDefinitionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionEntry";
    ADD_KEY_TOKEN(qosipacldefinitionid, "qosIpAclDefinitionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipacldefinitionid.is_set || is_set(qosipacldefinitionid.yfilter)) leaf_name_data.push_back(qosipacldefinitionid.get_name_leafdata());
    if (qosipaclid.is_set || is_set(qosipaclid.yfilter)) leaf_name_data.push_back(qosipaclid.get_name_leafdata());
    if (qosipaceorder.is_set || is_set(qosipaceorder.yfilter)) leaf_name_data.push_back(qosipaceorder.get_name_leafdata());
    if (qosipacldefaceid.is_set || is_set(qosipacldefaceid.yfilter)) leaf_name_data.push_back(qosipacldefaceid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAclDefinitionId")
    {
        qosipacldefinitionid = value;
        qosipacldefinitionid.value_namespace = name_space;
        qosipacldefinitionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclId")
    {
        qosipaclid = value;
        qosipaclid.value_namespace = name_space;
        qosipaclid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceOrder")
    {
        qosipaceorder = value;
        qosipaceorder.value_namespace = name_space;
        qosipaceorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDefAceId")
    {
        qosipacldefaceid = value;
        qosipacldefaceid.value_namespace = name_space;
        qosipacldefaceid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAclDefinitionId")
    {
        qosipacldefinitionid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclId")
    {
        qosipaclid.yfilter = yfilter;
    }
    if(value_path == "qosIpAceOrder")
    {
        qosipaceorder.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDefAceId")
    {
        qosipacldefaceid.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIpAclDefinitionTable::QosIpAclDefinitionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclDefinitionId" || name == "qosIpAclId" || name == "qosIpAceOrder" || name == "qosIpAclDefAceId")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionTable()
    :
    qosipaclactionentry(this, {"qosipaclactionid"})
{

    yang_name = "qosIpAclActionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAclActionTable::~QosIpAclActionTable()
{
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosipaclactionentry.len(); index++)
    {
        if(qosipaclactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::has_operation() const
{
    for (std::size_t index=0; index<qosipaclactionentry.len(); index++)
    {
        if(qosipaclactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAclActionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAclActionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAclActionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAclActionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclActionEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry>();
        ent_->parent = this;
        qosipaclactionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAclActionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosipaclactionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIpAclActionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIpAclActionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclActionEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::QosIpAclActionEntry()
    :
    qosipaclactionid{YType::uint32, "qosIpAclActionId"},
    qosipaclactaclid{YType::uint32, "qosIpAclActAclId"},
    qosipaclinterfaceroles{YType::str, "qosIpAclInterfaceRoles"},
    qosipaclinterfacedirection{YType::enumeration, "qosIpAclInterfaceDirection"},
    qosipaclorder{YType::uint32, "qosIpAclOrder"},
    qosipacldscp{YType::int32, "qosIpAclDscp"},
    qosipacldscptrusted{YType::boolean, "qosIpAclDscpTrusted"},
    qosipaclmicroflowpolicerid{YType::uint32, "qosIpAclMicroFlowPolicerId"},
    qosipaclaggregateid{YType::uint32, "qosIpAclAggregateId"}
{

    yang_name = "qosIpAclActionEntry"; yang_parent_name = "qosIpAclActionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::~QosIpAclActionEntry()
{
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosipaclactionid.is_set
	|| qosipaclactaclid.is_set
	|| qosipaclinterfaceroles.is_set
	|| qosipaclinterfacedirection.is_set
	|| qosipaclorder.is_set
	|| qosipacldscp.is_set
	|| qosipacldscptrusted.is_set
	|| qosipaclmicroflowpolicerid.is_set
	|| qosipaclaggregateid.is_set;
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipaclactionid.yfilter)
	|| ydk::is_set(qosipaclactaclid.yfilter)
	|| ydk::is_set(qosipaclinterfaceroles.yfilter)
	|| ydk::is_set(qosipaclinterfacedirection.yfilter)
	|| ydk::is_set(qosipaclorder.yfilter)
	|| ydk::is_set(qosipacldscp.yfilter)
	|| ydk::is_set(qosipacldscptrusted.yfilter)
	|| ydk::is_set(qosipaclmicroflowpolicerid.yfilter)
	|| ydk::is_set(qosipaclaggregateid.yfilter);
}

std::string CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionEntry";
    ADD_KEY_TOKEN(qosipaclactionid, "qosIpAclActionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaclactionid.is_set || is_set(qosipaclactionid.yfilter)) leaf_name_data.push_back(qosipaclactionid.get_name_leafdata());
    if (qosipaclactaclid.is_set || is_set(qosipaclactaclid.yfilter)) leaf_name_data.push_back(qosipaclactaclid.get_name_leafdata());
    if (qosipaclinterfaceroles.is_set || is_set(qosipaclinterfaceroles.yfilter)) leaf_name_data.push_back(qosipaclinterfaceroles.get_name_leafdata());
    if (qosipaclinterfacedirection.is_set || is_set(qosipaclinterfacedirection.yfilter)) leaf_name_data.push_back(qosipaclinterfacedirection.get_name_leafdata());
    if (qosipaclorder.is_set || is_set(qosipaclorder.yfilter)) leaf_name_data.push_back(qosipaclorder.get_name_leafdata());
    if (qosipacldscp.is_set || is_set(qosipacldscp.yfilter)) leaf_name_data.push_back(qosipacldscp.get_name_leafdata());
    if (qosipacldscptrusted.is_set || is_set(qosipacldscptrusted.yfilter)) leaf_name_data.push_back(qosipacldscptrusted.get_name_leafdata());
    if (qosipaclmicroflowpolicerid.is_set || is_set(qosipaclmicroflowpolicerid.yfilter)) leaf_name_data.push_back(qosipaclmicroflowpolicerid.get_name_leafdata());
    if (qosipaclaggregateid.is_set || is_set(qosipaclaggregateid.yfilter)) leaf_name_data.push_back(qosipaclaggregateid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAclActionId")
    {
        qosipaclactionid = value;
        qosipaclactionid.value_namespace = name_space;
        qosipaclactionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclActAclId")
    {
        qosipaclactaclid = value;
        qosipaclactaclid.value_namespace = name_space;
        qosipaclactaclid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclInterfaceRoles")
    {
        qosipaclinterfaceroles = value;
        qosipaclinterfaceroles.value_namespace = name_space;
        qosipaclinterfaceroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclInterfaceDirection")
    {
        qosipaclinterfacedirection = value;
        qosipaclinterfacedirection.value_namespace = name_space;
        qosipaclinterfacedirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclOrder")
    {
        qosipaclorder = value;
        qosipaclorder.value_namespace = name_space;
        qosipaclorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDscp")
    {
        qosipacldscp = value;
        qosipacldscp.value_namespace = name_space;
        qosipacldscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDscpTrusted")
    {
        qosipacldscptrusted = value;
        qosipacldscptrusted.value_namespace = name_space;
        qosipacldscptrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclMicroFlowPolicerId")
    {
        qosipaclmicroflowpolicerid = value;
        qosipaclmicroflowpolicerid.value_namespace = name_space;
        qosipaclmicroflowpolicerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclAggregateId")
    {
        qosipaclaggregateid = value;
        qosipaclaggregateid.value_namespace = name_space;
        qosipaclaggregateid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAclActionId")
    {
        qosipaclactionid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclActAclId")
    {
        qosipaclactaclid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclInterfaceRoles")
    {
        qosipaclinterfaceroles.yfilter = yfilter;
    }
    if(value_path == "qosIpAclInterfaceDirection")
    {
        qosipaclinterfacedirection.yfilter = yfilter;
    }
    if(value_path == "qosIpAclOrder")
    {
        qosipaclorder.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDscp")
    {
        qosipacldscp.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDscpTrusted")
    {
        qosipacldscptrusted.yfilter = yfilter;
    }
    if(value_path == "qosIpAclMicroFlowPolicerId")
    {
        qosipaclmicroflowpolicerid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclAggregateId")
    {
        qosipaclaggregateid.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclActionId" || name == "qosIpAclActAclId" || name == "qosIpAclInterfaceRoles" || name == "qosIpAclInterfaceDirection" || name == "qosIpAclOrder" || name == "qosIpAclDscp" || name == "qosIpAclDscpTrusted" || name == "qosIpAclMicroFlowPolicerId" || name == "qosIpAclAggregateId")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferencesTable()
    :
    qosifschedulingpreferenceentry(this, {"qosifschedulingpreferenceid"})
{

    yang_name = "qosIfSchedulingPreferencesTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::~QosIfSchedulingPreferencesTable()
{
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosifschedulingpreferenceentry.len(); index++)
    {
        if(qosifschedulingpreferenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::has_operation() const
{
    for (std::size_t index=0; index<qosifschedulingpreferenceentry.len(); index++)
    {
        if(qosifschedulingpreferenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferencesTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfSchedulingPreferenceEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry>();
        ent_->parent = this;
        qosifschedulingpreferenceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosifschedulingpreferenceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfSchedulingPreferenceEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingPreferenceEntry()
    :
    qosifschedulingpreferenceid{YType::uint32, "qosIfSchedulingPreferenceId"},
    qosifschedulingroles{YType::str, "qosIfSchedulingRoles"},
    qosifschedulingpreference{YType::int32, "qosIfSchedulingPreference"},
    qosifschedulingdiscipline{YType::enumeration, "qosIfSchedulingDiscipline"},
    qosifschedulingqueuetype{YType::enumeration, "qosIfSchedulingQueueType"}
{

    yang_name = "qosIfSchedulingPreferenceEntry"; yang_parent_name = "qosIfSchedulingPreferencesTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::~QosIfSchedulingPreferenceEntry()
{
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosifschedulingpreferenceid.is_set
	|| qosifschedulingroles.is_set
	|| qosifschedulingpreference.is_set
	|| qosifschedulingdiscipline.is_set
	|| qosifschedulingqueuetype.is_set;
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifschedulingpreferenceid.yfilter)
	|| ydk::is_set(qosifschedulingroles.yfilter)
	|| ydk::is_set(qosifschedulingpreference.yfilter)
	|| ydk::is_set(qosifschedulingdiscipline.yfilter)
	|| ydk::is_set(qosifschedulingqueuetype.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfSchedulingPreferencesTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferenceEntry";
    ADD_KEY_TOKEN(qosifschedulingpreferenceid, "qosIfSchedulingPreferenceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifschedulingpreferenceid.is_set || is_set(qosifschedulingpreferenceid.yfilter)) leaf_name_data.push_back(qosifschedulingpreferenceid.get_name_leafdata());
    if (qosifschedulingroles.is_set || is_set(qosifschedulingroles.yfilter)) leaf_name_data.push_back(qosifschedulingroles.get_name_leafdata());
    if (qosifschedulingpreference.is_set || is_set(qosifschedulingpreference.yfilter)) leaf_name_data.push_back(qosifschedulingpreference.get_name_leafdata());
    if (qosifschedulingdiscipline.is_set || is_set(qosifschedulingdiscipline.yfilter)) leaf_name_data.push_back(qosifschedulingdiscipline.get_name_leafdata());
    if (qosifschedulingqueuetype.is_set || is_set(qosifschedulingqueuetype.yfilter)) leaf_name_data.push_back(qosifschedulingqueuetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfSchedulingPreferenceId")
    {
        qosifschedulingpreferenceid = value;
        qosifschedulingpreferenceid.value_namespace = name_space;
        qosifschedulingpreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingRoles")
    {
        qosifschedulingroles = value;
        qosifschedulingroles.value_namespace = name_space;
        qosifschedulingroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingPreference")
    {
        qosifschedulingpreference = value;
        qosifschedulingpreference.value_namespace = name_space;
        qosifschedulingpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingDiscipline")
    {
        qosifschedulingdiscipline = value;
        qosifschedulingdiscipline.value_namespace = name_space;
        qosifschedulingdiscipline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingQueueType")
    {
        qosifschedulingqueuetype = value;
        qosifschedulingqueuetype.value_namespace = name_space;
        qosifschedulingqueuetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfSchedulingPreferenceId")
    {
        qosifschedulingpreferenceid.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingRoles")
    {
        qosifschedulingroles.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingPreference")
    {
        qosifschedulingpreference.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingDiscipline")
    {
        qosifschedulingdiscipline.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingQueueType")
    {
        qosifschedulingqueuetype.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfSchedulingPreferenceId" || name == "qosIfSchedulingRoles" || name == "qosIfSchedulingPreference" || name == "qosIfSchedulingDiscipline" || name == "qosIfSchedulingQueueType")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceTable()
    :
    qosifdroppreferenceentry(this, {"qosifdroppreferenceid"})
{

    yang_name = "qosIfDropPreferenceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfDropPreferenceTable::~QosIfDropPreferenceTable()
{
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosifdroppreferenceentry.len(); index++)
    {
        if(qosifdroppreferenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::has_operation() const
{
    for (std::size_t index=0; index<qosifdroppreferenceentry.len(); index++)
    {
        if(qosifdroppreferenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfDropPreferenceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfDropPreferenceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfDropPreferenceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfDropPreferenceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDropPreferenceEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry>();
        ent_->parent = this;
        qosifdroppreferenceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfDropPreferenceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosifdroppreferenceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfDropPreferenceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfDropPreferenceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDropPreferenceEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::QosIfDropPreferenceEntry()
    :
    qosifdroppreferenceid{YType::uint32, "qosIfDropPreferenceId"},
    qosifdroproles{YType::str, "qosIfDropRoles"},
    qosifdroppreference{YType::int32, "qosIfDropPreference"},
    qosifdropdiscipline{YType::enumeration, "qosIfDropDiscipline"}
{

    yang_name = "qosIfDropPreferenceEntry"; yang_parent_name = "qosIfDropPreferenceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::~QosIfDropPreferenceEntry()
{
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosifdroppreferenceid.is_set
	|| qosifdroproles.is_set
	|| qosifdroppreference.is_set
	|| qosifdropdiscipline.is_set;
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifdroppreferenceid.yfilter)
	|| ydk::is_set(qosifdroproles.yfilter)
	|| ydk::is_set(qosifdroppreference.yfilter)
	|| ydk::is_set(qosifdropdiscipline.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDropPreferenceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceEntry";
    ADD_KEY_TOKEN(qosifdroppreferenceid, "qosIfDropPreferenceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdroppreferenceid.is_set || is_set(qosifdroppreferenceid.yfilter)) leaf_name_data.push_back(qosifdroppreferenceid.get_name_leafdata());
    if (qosifdroproles.is_set || is_set(qosifdroproles.yfilter)) leaf_name_data.push_back(qosifdroproles.get_name_leafdata());
    if (qosifdroppreference.is_set || is_set(qosifdroppreference.yfilter)) leaf_name_data.push_back(qosifdroppreference.get_name_leafdata());
    if (qosifdropdiscipline.is_set || is_set(qosifdropdiscipline.yfilter)) leaf_name_data.push_back(qosifdropdiscipline.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfDropPreferenceId")
    {
        qosifdroppreferenceid = value;
        qosifdroppreferenceid.value_namespace = name_space;
        qosifdroppreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropRoles")
    {
        qosifdroproles = value;
        qosifdroproles.value_namespace = name_space;
        qosifdroproles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropPreference")
    {
        qosifdroppreference = value;
        qosifdroppreference.value_namespace = name_space;
        qosifdroppreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropDiscipline")
    {
        qosifdropdiscipline = value;
        qosifdropdiscipline.value_namespace = name_space;
        qosifdropdiscipline.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfDropPreferenceId")
    {
        qosifdroppreferenceid.yfilter = yfilter;
    }
    if(value_path == "qosIfDropRoles")
    {
        qosifdroproles.yfilter = yfilter;
    }
    if(value_path == "qosIfDropPreference")
    {
        qosifdroppreference.yfilter = yfilter;
    }
    if(value_path == "qosIfDropDiscipline")
    {
        qosifdropdiscipline.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDropPreferenceId" || name == "qosIfDropRoles" || name == "qosIfDropPreference" || name == "qosIfDropDiscipline")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentTable()
    :
    qosifdscpassignmententry(this, {"qosifdscpassignmentid"})
{

    yang_name = "qosIfDscpAssignmentTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfDscpAssignmentTable::~QosIfDscpAssignmentTable()
{
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosifdscpassignmententry.len(); index++)
    {
        if(qosifdscpassignmententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::has_operation() const
{
    for (std::size_t index=0; index<qosifdscpassignmententry.len(); index++)
    {
        if(qosifdscpassignmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfDscpAssignmentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfDscpAssignmentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfDscpAssignmentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfDscpAssignmentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDscpAssignmentEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry>();
        ent_->parent = this;
        qosifdscpassignmententry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfDscpAssignmentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosifdscpassignmententry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfDscpAssignmentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfDscpAssignmentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDscpAssignmentEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::QosIfDscpAssignmentEntry()
    :
    qosifdscpassignmentid{YType::uint32, "qosIfDscpAssignmentId"},
    qosifdscproles{YType::str, "qosIfDscpRoles"},
    qosifqueuetype{YType::enumeration, "qosIfQueueType"},
    qosifdscp{YType::int32, "qosIfDscp"},
    qosifqueue{YType::int32, "qosIfQueue"},
    qosifthresholdset{YType::int32, "qosIfThresholdSet"}
{

    yang_name = "qosIfDscpAssignmentEntry"; yang_parent_name = "qosIfDscpAssignmentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::~QosIfDscpAssignmentEntry()
{
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosifdscpassignmentid.is_set
	|| qosifdscproles.is_set
	|| qosifqueuetype.is_set
	|| qosifdscp.is_set
	|| qosifqueue.is_set
	|| qosifthresholdset.is_set;
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifdscpassignmentid.yfilter)
	|| ydk::is_set(qosifdscproles.yfilter)
	|| ydk::is_set(qosifqueuetype.yfilter)
	|| ydk::is_set(qosifdscp.yfilter)
	|| ydk::is_set(qosifqueue.yfilter)
	|| ydk::is_set(qosifthresholdset.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDscpAssignmentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentEntry";
    ADD_KEY_TOKEN(qosifdscpassignmentid, "qosIfDscpAssignmentId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdscpassignmentid.is_set || is_set(qosifdscpassignmentid.yfilter)) leaf_name_data.push_back(qosifdscpassignmentid.get_name_leafdata());
    if (qosifdscproles.is_set || is_set(qosifdscproles.yfilter)) leaf_name_data.push_back(qosifdscproles.get_name_leafdata());
    if (qosifqueuetype.is_set || is_set(qosifqueuetype.yfilter)) leaf_name_data.push_back(qosifqueuetype.get_name_leafdata());
    if (qosifdscp.is_set || is_set(qosifdscp.yfilter)) leaf_name_data.push_back(qosifdscp.get_name_leafdata());
    if (qosifqueue.is_set || is_set(qosifqueue.yfilter)) leaf_name_data.push_back(qosifqueue.get_name_leafdata());
    if (qosifthresholdset.is_set || is_set(qosifthresholdset.yfilter)) leaf_name_data.push_back(qosifthresholdset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfDscpAssignmentId")
    {
        qosifdscpassignmentid = value;
        qosifdscpassignmentid.value_namespace = name_space;
        qosifdscpassignmentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDscpRoles")
    {
        qosifdscproles = value;
        qosifdscproles.value_namespace = name_space;
        qosifdscproles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfQueueType")
    {
        qosifqueuetype = value;
        qosifqueuetype.value_namespace = name_space;
        qosifqueuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDscp")
    {
        qosifdscp = value;
        qosifdscp.value_namespace = name_space;
        qosifdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfQueue")
    {
        qosifqueue = value;
        qosifqueue.value_namespace = name_space;
        qosifqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfThresholdSet")
    {
        qosifthresholdset = value;
        qosifthresholdset.value_namespace = name_space;
        qosifthresholdset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfDscpAssignmentId")
    {
        qosifdscpassignmentid.yfilter = yfilter;
    }
    if(value_path == "qosIfDscpRoles")
    {
        qosifdscproles.yfilter = yfilter;
    }
    if(value_path == "qosIfQueueType")
    {
        qosifqueuetype.yfilter = yfilter;
    }
    if(value_path == "qosIfDscp")
    {
        qosifdscp.yfilter = yfilter;
    }
    if(value_path == "qosIfQueue")
    {
        qosifqueue.yfilter = yfilter;
    }
    if(value_path == "qosIfThresholdSet")
    {
        qosifthresholdset.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfDscpAssignmentTable::QosIfDscpAssignmentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDscpAssignmentId" || name == "qosIfDscpRoles" || name == "qosIfQueueType" || name == "qosIfDscp" || name == "qosIfQueue" || name == "qosIfThresholdSet")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfRedTable::QosIfRedTable()
    :
    qosifredentry(this, {"qosifredid"})
{

    yang_name = "qosIfRedTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfRedTable::~QosIfRedTable()
{
}

bool CISCOQOSPIBMIB::QosIfRedTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosifredentry.len(); index++)
    {
        if(qosifredentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfRedTable::has_operation() const
{
    for (std::size_t index=0; index<qosifredentry.len(); index++)
    {
        if(qosifredentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfRedTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfRedTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfRedTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfRedTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfRedEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry>();
        ent_->parent = this;
        qosifredentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfRedTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosifredentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfRedTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfRedTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfRedTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfRedEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::QosIfRedEntry()
    :
    qosifredid{YType::uint32, "qosIfRedId"},
    qosifredroles{YType::str, "qosIfRedRoles"},
    qosifrednumthresholdsets{YType::enumeration, "qosIfRedNumThresholdSets"},
    qosifredthresholdset{YType::int32, "qosIfRedThresholdSet"},
    qosifredthresholdsetlower{YType::int32, "qosIfRedThresholdSetLower"},
    qosifredthresholdsetupper{YType::int32, "qosIfRedThresholdSetUpper"}
{

    yang_name = "qosIfRedEntry"; yang_parent_name = "qosIfRedTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::~QosIfRedEntry()
{
}

bool CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosifredid.is_set
	|| qosifredroles.is_set
	|| qosifrednumthresholdsets.is_set
	|| qosifredthresholdset.is_set
	|| qosifredthresholdsetlower.is_set
	|| qosifredthresholdsetupper.is_set;
}

bool CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifredid.yfilter)
	|| ydk::is_set(qosifredroles.yfilter)
	|| ydk::is_set(qosifrednumthresholdsets.yfilter)
	|| ydk::is_set(qosifredthresholdset.yfilter)
	|| ydk::is_set(qosifredthresholdsetlower.yfilter)
	|| ydk::is_set(qosifredthresholdsetupper.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfRedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedEntry";
    ADD_KEY_TOKEN(qosifredid, "qosIfRedId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifredid.is_set || is_set(qosifredid.yfilter)) leaf_name_data.push_back(qosifredid.get_name_leafdata());
    if (qosifredroles.is_set || is_set(qosifredroles.yfilter)) leaf_name_data.push_back(qosifredroles.get_name_leafdata());
    if (qosifrednumthresholdsets.is_set || is_set(qosifrednumthresholdsets.yfilter)) leaf_name_data.push_back(qosifrednumthresholdsets.get_name_leafdata());
    if (qosifredthresholdset.is_set || is_set(qosifredthresholdset.yfilter)) leaf_name_data.push_back(qosifredthresholdset.get_name_leafdata());
    if (qosifredthresholdsetlower.is_set || is_set(qosifredthresholdsetlower.yfilter)) leaf_name_data.push_back(qosifredthresholdsetlower.get_name_leafdata());
    if (qosifredthresholdsetupper.is_set || is_set(qosifredthresholdsetupper.yfilter)) leaf_name_data.push_back(qosifredthresholdsetupper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfRedId")
    {
        qosifredid = value;
        qosifredid.value_namespace = name_space;
        qosifredid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedRoles")
    {
        qosifredroles = value;
        qosifredroles.value_namespace = name_space;
        qosifredroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedNumThresholdSets")
    {
        qosifrednumthresholdsets = value;
        qosifrednumthresholdsets.value_namespace = name_space;
        qosifrednumthresholdsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSet")
    {
        qosifredthresholdset = value;
        qosifredthresholdset.value_namespace = name_space;
        qosifredthresholdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSetLower")
    {
        qosifredthresholdsetlower = value;
        qosifredthresholdsetlower.value_namespace = name_space;
        qosifredthresholdsetlower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSetUpper")
    {
        qosifredthresholdsetupper = value;
        qosifredthresholdsetupper.value_namespace = name_space;
        qosifredthresholdsetupper.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfRedId")
    {
        qosifredid.yfilter = yfilter;
    }
    if(value_path == "qosIfRedRoles")
    {
        qosifredroles.yfilter = yfilter;
    }
    if(value_path == "qosIfRedNumThresholdSets")
    {
        qosifrednumthresholdsets.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSet")
    {
        qosifredthresholdset.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSetLower")
    {
        qosifredthresholdsetlower.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSetUpper")
    {
        qosifredthresholdsetupper.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfRedTable::QosIfRedEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfRedId" || name == "qosIfRedRoles" || name == "qosIfRedNumThresholdSets" || name == "qosIfRedThresholdSet" || name == "qosIfRedThresholdSetLower" || name == "qosIfRedThresholdSetUpper")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropTable()
    :
    qosiftaildropentry(this, {"qosiftaildropid"})
{

    yang_name = "qosIfTailDropTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfTailDropTable::~QosIfTailDropTable()
{
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosiftaildropentry.len(); index++)
    {
        if(qosiftaildropentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::has_operation() const
{
    for (std::size_t index=0; index<qosiftaildropentry.len(); index++)
    {
        if(qosiftaildropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfTailDropTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfTailDropTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfTailDropTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfTailDropTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfTailDropEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry>();
        ent_->parent = this;
        qosiftaildropentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfTailDropTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosiftaildropentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfTailDropTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfTailDropTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfTailDropEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::QosIfTailDropEntry()
    :
    qosiftaildropid{YType::uint32, "qosIfTailDropId"},
    qosiftaildroproles{YType::str, "qosIfTailDropRoles"},
    qosiftaildropnumthresholdsets{YType::enumeration, "qosIfTailDropNumThresholdSets"},
    qosiftaildropthresholdset{YType::int32, "qosIfTailDropThresholdSet"},
    qosiftaildropthresholdsetvalue{YType::int32, "qosIfTailDropThresholdSetValue"}
{

    yang_name = "qosIfTailDropEntry"; yang_parent_name = "qosIfTailDropTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::~QosIfTailDropEntry()
{
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosiftaildropid.is_set
	|| qosiftaildroproles.is_set
	|| qosiftaildropnumthresholdsets.is_set
	|| qosiftaildropthresholdset.is_set
	|| qosiftaildropthresholdsetvalue.is_set;
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosiftaildropid.yfilter)
	|| ydk::is_set(qosiftaildroproles.yfilter)
	|| ydk::is_set(qosiftaildropnumthresholdsets.yfilter)
	|| ydk::is_set(qosiftaildropthresholdset.yfilter)
	|| ydk::is_set(qosiftaildropthresholdsetvalue.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfTailDropTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropEntry";
    ADD_KEY_TOKEN(qosiftaildropid, "qosIfTailDropId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosiftaildropid.is_set || is_set(qosiftaildropid.yfilter)) leaf_name_data.push_back(qosiftaildropid.get_name_leafdata());
    if (qosiftaildroproles.is_set || is_set(qosiftaildroproles.yfilter)) leaf_name_data.push_back(qosiftaildroproles.get_name_leafdata());
    if (qosiftaildropnumthresholdsets.is_set || is_set(qosiftaildropnumthresholdsets.yfilter)) leaf_name_data.push_back(qosiftaildropnumthresholdsets.get_name_leafdata());
    if (qosiftaildropthresholdset.is_set || is_set(qosiftaildropthresholdset.yfilter)) leaf_name_data.push_back(qosiftaildropthresholdset.get_name_leafdata());
    if (qosiftaildropthresholdsetvalue.is_set || is_set(qosiftaildropthresholdsetvalue.yfilter)) leaf_name_data.push_back(qosiftaildropthresholdsetvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfTailDropId")
    {
        qosiftaildropid = value;
        qosiftaildropid.value_namespace = name_space;
        qosiftaildropid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropRoles")
    {
        qosiftaildroproles = value;
        qosiftaildroproles.value_namespace = name_space;
        qosiftaildroproles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropNumThresholdSets")
    {
        qosiftaildropnumthresholdsets = value;
        qosiftaildropnumthresholdsets.value_namespace = name_space;
        qosiftaildropnumthresholdsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropThresholdSet")
    {
        qosiftaildropthresholdset = value;
        qosiftaildropthresholdset.value_namespace = name_space;
        qosiftaildropthresholdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropThresholdSetValue")
    {
        qosiftaildropthresholdsetvalue = value;
        qosiftaildropthresholdsetvalue.value_namespace = name_space;
        qosiftaildropthresholdsetvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfTailDropId")
    {
        qosiftaildropid.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropRoles")
    {
        qosiftaildroproles.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropNumThresholdSets")
    {
        qosiftaildropnumthresholdsets.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropThresholdSet")
    {
        qosiftaildropthresholdset.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropThresholdSetValue")
    {
        qosiftaildropthresholdsetvalue.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfTailDropTable::QosIfTailDropEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfTailDropId" || name == "qosIfTailDropRoles" || name == "qosIfTailDropNumThresholdSets" || name == "qosIfTailDropThresholdSet" || name == "qosIfTailDropThresholdSetValue")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsTable()
    :
    qosifweightsentry(this, {"qosifweightsid"})
{

    yang_name = "qosIfWeightsTable"; yang_parent_name = "CISCO-QOS-PIB-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfWeightsTable::~QosIfWeightsTable()
{
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosifweightsentry.len(); index++)
    {
        if(qosifweightsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::has_operation() const
{
    for (std::size_t index=0; index<qosifweightsentry.len(); index++)
    {
        if(qosifweightsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOQOSPIBMIB::QosIfWeightsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfWeightsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfWeightsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfWeightsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfWeightsEntry")
    {
        auto ent_ = std::make_shared<CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry>();
        ent_->parent = this;
        qosifweightsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfWeightsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosifweightsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOQOSPIBMIB::QosIfWeightsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOQOSPIBMIB::QosIfWeightsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfWeightsEntry")
        return true;
    return false;
}

CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::QosIfWeightsEntry()
    :
    qosifweightsid{YType::uint32, "qosIfWeightsId"},
    qosifweightsroles{YType::str, "qosIfWeightsRoles"},
    qosifweightsnumqueues{YType::enumeration, "qosIfWeightsNumQueues"},
    qosifweightsqueue{YType::int32, "qosIfWeightsQueue"},
    qosifweightsdrainsize{YType::uint32, "qosIfWeightsDrainSize"},
    qosifweightsqueuesize{YType::uint32, "qosIfWeightsQueueSize"}
{

    yang_name = "qosIfWeightsEntry"; yang_parent_name = "qosIfWeightsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::~QosIfWeightsEntry()
{
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::has_data() const
{
    if (is_presence_container) return true;
    return qosifweightsid.is_set
	|| qosifweightsroles.is_set
	|| qosifweightsnumqueues.is_set
	|| qosifweightsqueue.is_set
	|| qosifweightsdrainsize.is_set
	|| qosifweightsqueuesize.is_set;
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifweightsid.yfilter)
	|| ydk::is_set(qosifweightsroles.yfilter)
	|| ydk::is_set(qosifweightsnumqueues.yfilter)
	|| ydk::is_set(qosifweightsqueue.yfilter)
	|| ydk::is_set(qosifweightsdrainsize.yfilter)
	|| ydk::is_set(qosifweightsqueuesize.yfilter);
}

std::string CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfWeightsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsEntry";
    ADD_KEY_TOKEN(qosifweightsid, "qosIfWeightsId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifweightsid.is_set || is_set(qosifweightsid.yfilter)) leaf_name_data.push_back(qosifweightsid.get_name_leafdata());
    if (qosifweightsroles.is_set || is_set(qosifweightsroles.yfilter)) leaf_name_data.push_back(qosifweightsroles.get_name_leafdata());
    if (qosifweightsnumqueues.is_set || is_set(qosifweightsnumqueues.yfilter)) leaf_name_data.push_back(qosifweightsnumqueues.get_name_leafdata());
    if (qosifweightsqueue.is_set || is_set(qosifweightsqueue.yfilter)) leaf_name_data.push_back(qosifweightsqueue.get_name_leafdata());
    if (qosifweightsdrainsize.is_set || is_set(qosifweightsdrainsize.yfilter)) leaf_name_data.push_back(qosifweightsdrainsize.get_name_leafdata());
    if (qosifweightsqueuesize.is_set || is_set(qosifweightsqueuesize.yfilter)) leaf_name_data.push_back(qosifweightsqueuesize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfWeightsId")
    {
        qosifweightsid = value;
        qosifweightsid.value_namespace = name_space;
        qosifweightsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsRoles")
    {
        qosifweightsroles = value;
        qosifweightsroles.value_namespace = name_space;
        qosifweightsroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsNumQueues")
    {
        qosifweightsnumqueues = value;
        qosifweightsnumqueues.value_namespace = name_space;
        qosifweightsnumqueues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsQueue")
    {
        qosifweightsqueue = value;
        qosifweightsqueue.value_namespace = name_space;
        qosifweightsqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsDrainSize")
    {
        qosifweightsdrainsize = value;
        qosifweightsdrainsize.value_namespace = name_space;
        qosifweightsdrainsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsQueueSize")
    {
        qosifweightsqueuesize = value;
        qosifweightsqueuesize.value_namespace = name_space;
        qosifweightsqueuesize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfWeightsId")
    {
        qosifweightsid.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsRoles")
    {
        qosifweightsroles.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsNumQueues")
    {
        qosifweightsnumqueues.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsQueue")
    {
        qosifweightsqueue.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsDrainSize")
    {
        qosifweightsdrainsize.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsQueueSize")
    {
        qosifweightsqueuesize.yfilter = yfilter;
    }
}

bool CISCOQOSPIBMIB::QosIfWeightsTable::QosIfWeightsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfWeightsId" || name == "qosIfWeightsRoles" || name == "qosIfWeightsNumQueues" || name == "qosIfWeightsQueue" || name == "qosIfWeightsDrainSize" || name == "qosIfWeightsQueueSize")
        return true;
    return false;
}

const Enum::YLeaf QueueRange::oneQ {1, "oneQ"};
const Enum::YLeaf QueueRange::twoQ {2, "twoQ"};
const Enum::YLeaf QueueRange::threeQ {3, "threeQ"};
const Enum::YLeaf QueueRange::fourQ {4, "fourQ"};
const Enum::YLeaf QueueRange::eightQ {8, "eightQ"};
const Enum::YLeaf QueueRange::sixteenQ {16, "sixteenQ"};
const Enum::YLeaf QueueRange::thirtyTwoQ {32, "thirtyTwoQ"};
const Enum::YLeaf QueueRange::sixtyFourQ {64, "sixtyFourQ"};

const Enum::YLeaf ThresholdSetRange::zeroT {0, "zeroT"};
const Enum::YLeaf ThresholdSetRange::oneT {1, "oneT"};
const Enum::YLeaf ThresholdSetRange::twoT {2, "twoT"};
const Enum::YLeaf ThresholdSetRange::fourT {4, "fourT"};
const Enum::YLeaf ThresholdSetRange::eightT {8, "eightT"};

const Enum::YLeaf QosInterfaceQueueType::oneQ1t {1, "oneQ1t"};
const Enum::YLeaf QosInterfaceQueueType::oneQ2t {2, "oneQ2t"};
const Enum::YLeaf QosInterfaceQueueType::oneQ4t {3, "oneQ4t"};
const Enum::YLeaf QosInterfaceQueueType::oneQ8t {4, "oneQ8t"};
const Enum::YLeaf QosInterfaceQueueType::twoQ1t {5, "twoQ1t"};
const Enum::YLeaf QosInterfaceQueueType::twoQ2t {6, "twoQ2t"};
const Enum::YLeaf QosInterfaceQueueType::twoQ4t {7, "twoQ4t"};
const Enum::YLeaf QosInterfaceQueueType::twoQ8t {8, "twoQ8t"};
const Enum::YLeaf QosInterfaceQueueType::threeQ1t {9, "threeQ1t"};
const Enum::YLeaf QosInterfaceQueueType::threeQ2t {10, "threeQ2t"};
const Enum::YLeaf QosInterfaceQueueType::threeQ4t {11, "threeQ4t"};
const Enum::YLeaf QosInterfaceQueueType::threeQ8t {12, "threeQ8t"};
const Enum::YLeaf QosInterfaceQueueType::fourQ1t {13, "fourQ1t"};
const Enum::YLeaf QosInterfaceQueueType::fourQ2t {14, "fourQ2t"};
const Enum::YLeaf QosInterfaceQueueType::fourQ4t {15, "fourQ4t"};
const Enum::YLeaf QosInterfaceQueueType::fourQ8t {16, "fourQ8t"};
const Enum::YLeaf QosInterfaceQueueType::eightQ1t {17, "eightQ1t"};
const Enum::YLeaf QosInterfaceQueueType::eightQ2t {18, "eightQ2t"};
const Enum::YLeaf QosInterfaceQueueType::eightQ4t {19, "eightQ4t"};
const Enum::YLeaf QosInterfaceQueueType::eightQ8t {20, "eightQ8t"};
const Enum::YLeaf QosInterfaceQueueType::sixteenQ1t {21, "sixteenQ1t"};
const Enum::YLeaf QosInterfaceQueueType::sixteenQ2t {22, "sixteenQ2t"};
const Enum::YLeaf QosInterfaceQueueType::sixteenQ4t {23, "sixteenQ4t"};
const Enum::YLeaf QosInterfaceQueueType::sixtyfourQ1t {24, "sixtyfourQ1t"};
const Enum::YLeaf QosInterfaceQueueType::sixtyfourQ2t {25, "sixtyfourQ2t"};
const Enum::YLeaf QosInterfaceQueueType::sixtyfourQ4t {26, "sixtyfourQ4t"};
const Enum::YLeaf QosInterfaceQueueType::oneP1Q0t {27, "oneP1Q0t"};
const Enum::YLeaf QosInterfaceQueueType::oneP1Q4t {28, "oneP1Q4t"};
const Enum::YLeaf QosInterfaceQueueType::oneP1Q8t {29, "oneP1Q8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP2Q1t {30, "oneP2Q1t"};
const Enum::YLeaf QosInterfaceQueueType::oneP2Q2t {31, "oneP2Q2t"};
const Enum::YLeaf QosInterfaceQueueType::oneP3Q1t {32, "oneP3Q1t"};
const Enum::YLeaf QosInterfaceQueueType::oneP7Q8t {33, "oneP7Q8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP3Q8t {34, "oneP3Q8t"};
const Enum::YLeaf QosInterfaceQueueType::sixteenQ8t {35, "sixteenQ8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP15Q8t {36, "oneP15Q8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP15Q1t {37, "oneP15Q1t"};
const Enum::YLeaf QosInterfaceQueueType::oneP7Q1t {38, "oneP7Q1t"};
const Enum::YLeaf QosInterfaceQueueType::oneP31Q1t {39, "oneP31Q1t"};
const Enum::YLeaf QosInterfaceQueueType::thirtytwoQ1t {40, "thirtytwoQ1t"};
const Enum::YLeaf QosInterfaceQueueType::thirtytwoQ8t {41, "thirtytwoQ8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP31Q8t {42, "oneP31Q8t"};
const Enum::YLeaf QosInterfaceQueueType::oneP7Q4t {43, "oneP7Q4t"};
const Enum::YLeaf QosInterfaceQueueType::oneP3Q4t {44, "oneP3Q4t"};
const Enum::YLeaf QosInterfaceQueueType::oneP7Q2t {45, "oneP7Q2t"};

const Enum::YLeaf CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::QosUnmatchedPolicyDirection::in {0, "in"};
const Enum::YLeaf CISCOQOSPIBMIB::QosUnmatchedPolicyTable::QosUnmatchedPolicyEntry::QosUnmatchedPolicyDirection::out {1, "out"};

const Enum::YLeaf CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::QosPolicerAction::drop {0, "drop"};
const Enum::YLeaf CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::QosPolicerAction::mark {1, "mark"};
const Enum::YLeaf CISCOQOSPIBMIB::QosPolicerTable::QosPolicerEntry::QosPolicerAction::shape {2, "shape"};

const Enum::YLeaf CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::QosIpAclInterfaceDirection::in {0, "in"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIpAclActionTable::QosIpAclActionEntry::QosIpAclInterfaceDirection::out {1, "out"};

const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::weightedFairQueueing {1, "weightedFairQueueing"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::weightedRoundRobin {2, "weightedRoundRobin"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::customQueueing {3, "customQueueing"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::priorityQueueing {4, "priorityQueueing"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::classBasedWFQ {5, "classBasedWFQ"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::fifo {6, "fifo"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::pqWrr {7, "pqWrr"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfSchedulingPreferencesTable::QosIfSchedulingPreferenceEntry::QosIfSchedulingDiscipline::pqCbwfq {8, "pqCbwfq"};

const Enum::YLeaf CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::QosIfDropDiscipline::qosIfDropWRED {1, "qosIfDropWRED"};
const Enum::YLeaf CISCOQOSPIBMIB::QosIfDropPreferenceTable::QosIfDropPreferenceEntry::QosIfDropDiscipline::qosIfDropTailDrop {2, "qosIfDropTailDrop"};


}
}

