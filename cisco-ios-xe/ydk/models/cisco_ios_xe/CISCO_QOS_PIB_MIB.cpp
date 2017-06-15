
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_QOS_PIB_MIB.hpp"

namespace ydk {
namespace CISCO_QOS_PIB_MIB {

CiscoQosPibMib::CiscoQosPibMib()
    :
    qosaggregatetable_(std::make_shared<CiscoQosPibMib::Qosaggregatetable>())
	,qoscostodscptable_(std::make_shared<CiscoQosPibMib::Qoscostodscptable>())
	,qosdeviceattributetable_(std::make_shared<CiscoQosPibMib::Qosdeviceattributetable>())
	,qosdevicepibincarnationtable_(std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable>())
	,qosdiffservmappingtable_(std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable>())
	,qosifdroppreferencetable_(std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable>())
	,qosifdscpassignmenttable_(std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable>())
	,qosifredtable_(std::make_shared<CiscoQosPibMib::Qosifredtable>())
	,qosifschedulingpreferencestable_(std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable>())
	,qosiftaildroptable_(std::make_shared<CiscoQosPibMib::Qosiftaildroptable>())
	,qosifweightstable_(std::make_shared<CiscoQosPibMib::Qosifweightstable>())
	,qosinterfacetypetable_(std::make_shared<CiscoQosPibMib::Qosinterfacetypetable>())
	,qosipacetable_(std::make_shared<CiscoQosPibMib::Qosipacetable>())
	,qosipaclactiontable_(std::make_shared<CiscoQosPibMib::Qosipaclactiontable>())
	,qosipacldefinitiontable_(std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable>())
	,qosmacclassificationtable_(std::make_shared<CiscoQosPibMib::Qosmacclassificationtable>())
	,qospolicertable_(std::make_shared<CiscoQosPibMib::Qospolicertable>())
	,qosunmatchedpolicytable_(std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable>())
{
    qosaggregatetable_->parent = this;

    qoscostodscptable_->parent = this;

    qosdeviceattributetable_->parent = this;

    qosdevicepibincarnationtable_->parent = this;

    qosdiffservmappingtable_->parent = this;

    qosifdroppreferencetable_->parent = this;

    qosifdscpassignmenttable_->parent = this;

    qosifredtable_->parent = this;

    qosifschedulingpreferencestable_->parent = this;

    qosiftaildroptable_->parent = this;

    qosifweightstable_->parent = this;

    qosinterfacetypetable_->parent = this;

    qosipacetable_->parent = this;

    qosipaclactiontable_->parent = this;

    qosipacldefinitiontable_->parent = this;

    qosmacclassificationtable_->parent = this;

    qospolicertable_->parent = this;

    qosunmatchedpolicytable_->parent = this;

    yang_name = "CISCO-QOS-PIB-MIB"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::~CiscoQosPibMib()
{
}

bool CiscoQosPibMib::has_data() const
{
    return (qosaggregatetable_ !=  nullptr && qosaggregatetable_->has_data())
	|| (qoscostodscptable_ !=  nullptr && qoscostodscptable_->has_data())
	|| (qosdeviceattributetable_ !=  nullptr && qosdeviceattributetable_->has_data())
	|| (qosdevicepibincarnationtable_ !=  nullptr && qosdevicepibincarnationtable_->has_data())
	|| (qosdiffservmappingtable_ !=  nullptr && qosdiffservmappingtable_->has_data())
	|| (qosifdroppreferencetable_ !=  nullptr && qosifdroppreferencetable_->has_data())
	|| (qosifdscpassignmenttable_ !=  nullptr && qosifdscpassignmenttable_->has_data())
	|| (qosifredtable_ !=  nullptr && qosifredtable_->has_data())
	|| (qosifschedulingpreferencestable_ !=  nullptr && qosifschedulingpreferencestable_->has_data())
	|| (qosiftaildroptable_ !=  nullptr && qosiftaildroptable_->has_data())
	|| (qosifweightstable_ !=  nullptr && qosifweightstable_->has_data())
	|| (qosinterfacetypetable_ !=  nullptr && qosinterfacetypetable_->has_data())
	|| (qosipacetable_ !=  nullptr && qosipacetable_->has_data())
	|| (qosipaclactiontable_ !=  nullptr && qosipaclactiontable_->has_data())
	|| (qosipacldefinitiontable_ !=  nullptr && qosipacldefinitiontable_->has_data())
	|| (qosmacclassificationtable_ !=  nullptr && qosmacclassificationtable_->has_data())
	|| (qospolicertable_ !=  nullptr && qospolicertable_->has_data())
	|| (qosunmatchedpolicytable_ !=  nullptr && qosunmatchedpolicytable_->has_data());
}

bool CiscoQosPibMib::has_operation() const
{
    return is_set(operation)
	|| (qosaggregatetable_ !=  nullptr && qosaggregatetable_->has_operation())
	|| (qoscostodscptable_ !=  nullptr && qoscostodscptable_->has_operation())
	|| (qosdeviceattributetable_ !=  nullptr && qosdeviceattributetable_->has_operation())
	|| (qosdevicepibincarnationtable_ !=  nullptr && qosdevicepibincarnationtable_->has_operation())
	|| (qosdiffservmappingtable_ !=  nullptr && qosdiffservmappingtable_->has_operation())
	|| (qosifdroppreferencetable_ !=  nullptr && qosifdroppreferencetable_->has_operation())
	|| (qosifdscpassignmenttable_ !=  nullptr && qosifdscpassignmenttable_->has_operation())
	|| (qosifredtable_ !=  nullptr && qosifredtable_->has_operation())
	|| (qosifschedulingpreferencestable_ !=  nullptr && qosifschedulingpreferencestable_->has_operation())
	|| (qosiftaildroptable_ !=  nullptr && qosiftaildroptable_->has_operation())
	|| (qosifweightstable_ !=  nullptr && qosifweightstable_->has_operation())
	|| (qosinterfacetypetable_ !=  nullptr && qosinterfacetypetable_->has_operation())
	|| (qosipacetable_ !=  nullptr && qosipacetable_->has_operation())
	|| (qosipaclactiontable_ !=  nullptr && qosipaclactiontable_->has_operation())
	|| (qosipacldefinitiontable_ !=  nullptr && qosipacldefinitiontable_->has_operation())
	|| (qosmacclassificationtable_ !=  nullptr && qosmacclassificationtable_->has_operation())
	|| (qospolicertable_ !=  nullptr && qospolicertable_->has_operation())
	|| (qosunmatchedpolicytable_ !=  nullptr && qosunmatchedpolicytable_->has_operation());
}

std::string CiscoQosPibMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosAggregateTable")
    {
        if(qosaggregatetable_ == nullptr)
        {
            qosaggregatetable_ = std::make_shared<CiscoQosPibMib::Qosaggregatetable>();
        }
        return qosaggregatetable_;
    }

    if(child_yang_name == "qosCosToDscpTable")
    {
        if(qoscostodscptable_ == nullptr)
        {
            qoscostodscptable_ = std::make_shared<CiscoQosPibMib::Qoscostodscptable>();
        }
        return qoscostodscptable_;
    }

    if(child_yang_name == "qosDeviceAttributeTable")
    {
        if(qosdeviceattributetable_ == nullptr)
        {
            qosdeviceattributetable_ = std::make_shared<CiscoQosPibMib::Qosdeviceattributetable>();
        }
        return qosdeviceattributetable_;
    }

    if(child_yang_name == "qosDevicePibIncarnationTable")
    {
        if(qosdevicepibincarnationtable_ == nullptr)
        {
            qosdevicepibincarnationtable_ = std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable>();
        }
        return qosdevicepibincarnationtable_;
    }

    if(child_yang_name == "qosDiffServMappingTable")
    {
        if(qosdiffservmappingtable_ == nullptr)
        {
            qosdiffservmappingtable_ = std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable>();
        }
        return qosdiffservmappingtable_;
    }

    if(child_yang_name == "qosIfDropPreferenceTable")
    {
        if(qosifdroppreferencetable_ == nullptr)
        {
            qosifdroppreferencetable_ = std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable>();
        }
        return qosifdroppreferencetable_;
    }

    if(child_yang_name == "qosIfDscpAssignmentTable")
    {
        if(qosifdscpassignmenttable_ == nullptr)
        {
            qosifdscpassignmenttable_ = std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable>();
        }
        return qosifdscpassignmenttable_;
    }

    if(child_yang_name == "qosIfRedTable")
    {
        if(qosifredtable_ == nullptr)
        {
            qosifredtable_ = std::make_shared<CiscoQosPibMib::Qosifredtable>();
        }
        return qosifredtable_;
    }

    if(child_yang_name == "qosIfSchedulingPreferencesTable")
    {
        if(qosifschedulingpreferencestable_ == nullptr)
        {
            qosifschedulingpreferencestable_ = std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable>();
        }
        return qosifschedulingpreferencestable_;
    }

    if(child_yang_name == "qosIfTailDropTable")
    {
        if(qosiftaildroptable_ == nullptr)
        {
            qosiftaildroptable_ = std::make_shared<CiscoQosPibMib::Qosiftaildroptable>();
        }
        return qosiftaildroptable_;
    }

    if(child_yang_name == "qosIfWeightsTable")
    {
        if(qosifweightstable_ == nullptr)
        {
            qosifweightstable_ = std::make_shared<CiscoQosPibMib::Qosifweightstable>();
        }
        return qosifweightstable_;
    }

    if(child_yang_name == "qosInterfaceTypeTable")
    {
        if(qosinterfacetypetable_ == nullptr)
        {
            qosinterfacetypetable_ = std::make_shared<CiscoQosPibMib::Qosinterfacetypetable>();
        }
        return qosinterfacetypetable_;
    }

    if(child_yang_name == "qosIpAceTable")
    {
        if(qosipacetable_ == nullptr)
        {
            qosipacetable_ = std::make_shared<CiscoQosPibMib::Qosipacetable>();
        }
        return qosipacetable_;
    }

    if(child_yang_name == "qosIpAclActionTable")
    {
        if(qosipaclactiontable_ == nullptr)
        {
            qosipaclactiontable_ = std::make_shared<CiscoQosPibMib::Qosipaclactiontable>();
        }
        return qosipaclactiontable_;
    }

    if(child_yang_name == "qosIpAclDefinitionTable")
    {
        if(qosipacldefinitiontable_ == nullptr)
        {
            qosipacldefinitiontable_ = std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable>();
        }
        return qosipacldefinitiontable_;
    }

    if(child_yang_name == "qosMacClassificationTable")
    {
        if(qosmacclassificationtable_ == nullptr)
        {
            qosmacclassificationtable_ = std::make_shared<CiscoQosPibMib::Qosmacclassificationtable>();
        }
        return qosmacclassificationtable_;
    }

    if(child_yang_name == "qosPolicerTable")
    {
        if(qospolicertable_ == nullptr)
        {
            qospolicertable_ = std::make_shared<CiscoQosPibMib::Qospolicertable>();
        }
        return qospolicertable_;
    }

    if(child_yang_name == "qosUnmatchedPolicyTable")
    {
        if(qosunmatchedpolicytable_ == nullptr)
        {
            qosunmatchedpolicytable_ = std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable>();
        }
        return qosunmatchedpolicytable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qosaggregatetable_ != nullptr)
    {
        children["qosAggregateTable"] = qosaggregatetable_;
    }

    if(qoscostodscptable_ != nullptr)
    {
        children["qosCosToDscpTable"] = qoscostodscptable_;
    }

    if(qosdeviceattributetable_ != nullptr)
    {
        children["qosDeviceAttributeTable"] = qosdeviceattributetable_;
    }

    if(qosdevicepibincarnationtable_ != nullptr)
    {
        children["qosDevicePibIncarnationTable"] = qosdevicepibincarnationtable_;
    }

    if(qosdiffservmappingtable_ != nullptr)
    {
        children["qosDiffServMappingTable"] = qosdiffservmappingtable_;
    }

    if(qosifdroppreferencetable_ != nullptr)
    {
        children["qosIfDropPreferenceTable"] = qosifdroppreferencetable_;
    }

    if(qosifdscpassignmenttable_ != nullptr)
    {
        children["qosIfDscpAssignmentTable"] = qosifdscpassignmenttable_;
    }

    if(qosifredtable_ != nullptr)
    {
        children["qosIfRedTable"] = qosifredtable_;
    }

    if(qosifschedulingpreferencestable_ != nullptr)
    {
        children["qosIfSchedulingPreferencesTable"] = qosifschedulingpreferencestable_;
    }

    if(qosiftaildroptable_ != nullptr)
    {
        children["qosIfTailDropTable"] = qosiftaildroptable_;
    }

    if(qosifweightstable_ != nullptr)
    {
        children["qosIfWeightsTable"] = qosifweightstable_;
    }

    if(qosinterfacetypetable_ != nullptr)
    {
        children["qosInterfaceTypeTable"] = qosinterfacetypetable_;
    }

    if(qosipacetable_ != nullptr)
    {
        children["qosIpAceTable"] = qosipacetable_;
    }

    if(qosipaclactiontable_ != nullptr)
    {
        children["qosIpAclActionTable"] = qosipaclactiontable_;
    }

    if(qosipacldefinitiontable_ != nullptr)
    {
        children["qosIpAclDefinitionTable"] = qosipacldefinitiontable_;
    }

    if(qosmacclassificationtable_ != nullptr)
    {
        children["qosMacClassificationTable"] = qosmacclassificationtable_;
    }

    if(qospolicertable_ != nullptr)
    {
        children["qosPolicerTable"] = qospolicertable_;
    }

    if(qosunmatchedpolicytable_ != nullptr)
    {
        children["qosUnmatchedPolicyTable"] = qosunmatchedpolicytable_;
    }

    return children;
}

void CiscoQosPibMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoQosPibMib::clone_ptr() const
{
    return std::make_shared<CiscoQosPibMib>();
}

std::string CiscoQosPibMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoQosPibMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoQosPibMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationtable()
{
    yang_name = "qosDevicePibIncarnationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdevicepibincarnationtable::~Qosdevicepibincarnationtable()
{
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::has_data() const
{
    for (std::size_t index=0; index<qosdevicepibincarnationentry_.size(); index++)
    {
        if(qosdevicepibincarnationentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::has_operation() const
{
    for (std::size_t index=0; index<qosdevicepibincarnationentry_.size(); index++)
    {
        if(qosdevicepibincarnationentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosdevicepibincarnationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdevicepibincarnationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdevicepibincarnationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDevicePibIncarnationEntry")
    {
        for(auto const & c : qosdevicepibincarnationentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry>();
        c->parent = this;
        qosdevicepibincarnationentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdevicepibincarnationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdevicepibincarnationentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::Qosdevicepibincarnationentry()
    :
    qosdeviceincarnationid{YType::uint32, "qosDeviceIncarnationId"},
    qosdevicepdpname{YType::str, "qosDevicePdpName"},
    qosdevicepibincarnation{YType::str, "qosDevicePibIncarnation"},
    qosdevicepibttl{YType::uint32, "qosDevicePibTtl"}
{
    yang_name = "qosDevicePibIncarnationEntry"; yang_parent_name = "qosDevicePibIncarnationTable";
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::~Qosdevicepibincarnationentry()
{
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::has_data() const
{
    return qosdeviceincarnationid.is_set
	|| qosdevicepdpname.is_set
	|| qosdevicepibincarnation.is_set
	|| qosdevicepibttl.is_set;
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosdeviceincarnationid.operation)
	|| is_set(qosdevicepdpname.operation)
	|| is_set(qosdevicepibincarnation.operation)
	|| is_set(qosdevicepibttl.operation);
}

std::string CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationEntry" <<"[qosDeviceIncarnationId='" <<qosdeviceincarnationid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDevicePibIncarnationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceincarnationid.is_set || is_set(qosdeviceincarnationid.operation)) leaf_name_data.push_back(qosdeviceincarnationid.get_name_leafdata());
    if (qosdevicepdpname.is_set || is_set(qosdevicepdpname.operation)) leaf_name_data.push_back(qosdevicepdpname.get_name_leafdata());
    if (qosdevicepibincarnation.is_set || is_set(qosdevicepibincarnation.operation)) leaf_name_data.push_back(qosdevicepibincarnation.get_name_leafdata());
    if (qosdevicepibttl.is_set || is_set(qosdevicepibttl.operation)) leaf_name_data.push_back(qosdevicepibttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosDeviceIncarnationId")
    {
        qosdeviceincarnationid = value;
    }
    if(value_path == "qosDevicePdpName")
    {
        qosdevicepdpname = value;
    }
    if(value_path == "qosDevicePibIncarnation")
    {
        qosdevicepibincarnation = value;
    }
    if(value_path == "qosDevicePibTtl")
    {
        qosdevicepibttl = value;
    }
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributetable()
{
    yang_name = "qosDeviceAttributeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdeviceattributetable::~Qosdeviceattributetable()
{
}

bool CiscoQosPibMib::Qosdeviceattributetable::has_data() const
{
    for (std::size_t index=0; index<qosdeviceattributeentry_.size(); index++)
    {
        if(qosdeviceattributeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdeviceattributetable::has_operation() const
{
    for (std::size_t index=0; index<qosdeviceattributeentry_.size(); index++)
    {
        if(qosdeviceattributeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosdeviceattributetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdeviceattributetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdeviceattributetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDeviceAttributeEntry")
    {
        for(auto const & c : qosdeviceattributeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry>();
        c->parent = this;
        qosdeviceattributeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdeviceattributetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdeviceattributeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdeviceattributetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::Qosdeviceattributeentry()
    :
    qosdeviceattributeid{YType::uint32, "qosDeviceAttributeId"},
    qosdevicecapabilities{YType::bits, "qosDeviceCapabilities"},
    qosdevicemaxmessagesize{YType::uint32, "qosDeviceMaxMessageSize"},
    qosdevicepepdomain{YType::str, "qosDevicePepDomain"},
    qosdeviceprimarypdp{YType::str, "qosDevicePrimaryPdp"},
    qosdevicesecondarypdp{YType::str, "qosDeviceSecondaryPdp"}
{
    yang_name = "qosDeviceAttributeEntry"; yang_parent_name = "qosDeviceAttributeTable";
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::~Qosdeviceattributeentry()
{
}

bool CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::has_data() const
{
    return qosdeviceattributeid.is_set
	|| qosdevicecapabilities.is_set
	|| qosdevicemaxmessagesize.is_set
	|| qosdevicepepdomain.is_set
	|| qosdeviceprimarypdp.is_set
	|| qosdevicesecondarypdp.is_set;
}

bool CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosdeviceattributeid.operation)
	|| is_set(qosdevicecapabilities.operation)
	|| is_set(qosdevicemaxmessagesize.operation)
	|| is_set(qosdevicepepdomain.operation)
	|| is_set(qosdeviceprimarypdp.operation)
	|| is_set(qosdevicesecondarypdp.operation);
}

std::string CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeEntry" <<"[qosDeviceAttributeId='" <<qosdeviceattributeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDeviceAttributeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceattributeid.is_set || is_set(qosdeviceattributeid.operation)) leaf_name_data.push_back(qosdeviceattributeid.get_name_leafdata());
    if (qosdevicecapabilities.is_set || is_set(qosdevicecapabilities.operation)) leaf_name_data.push_back(qosdevicecapabilities.get_name_leafdata());
    if (qosdevicemaxmessagesize.is_set || is_set(qosdevicemaxmessagesize.operation)) leaf_name_data.push_back(qosdevicemaxmessagesize.get_name_leafdata());
    if (qosdevicepepdomain.is_set || is_set(qosdevicepepdomain.operation)) leaf_name_data.push_back(qosdevicepepdomain.get_name_leafdata());
    if (qosdeviceprimarypdp.is_set || is_set(qosdeviceprimarypdp.operation)) leaf_name_data.push_back(qosdeviceprimarypdp.get_name_leafdata());
    if (qosdevicesecondarypdp.is_set || is_set(qosdevicesecondarypdp.operation)) leaf_name_data.push_back(qosdevicesecondarypdp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosDeviceAttributeId")
    {
        qosdeviceattributeid = value;
    }
    if(value_path == "qosDeviceCapabilities")
    {
        qosdevicecapabilities[value] = true;
    }
    if(value_path == "qosDeviceMaxMessageSize")
    {
        qosdevicemaxmessagesize = value;
    }
    if(value_path == "qosDevicePepDomain")
    {
        qosdevicepepdomain = value;
    }
    if(value_path == "qosDevicePrimaryPdp")
    {
        qosdeviceprimarypdp = value;
    }
    if(value_path == "qosDeviceSecondaryPdp")
    {
        qosdevicesecondarypdp = value;
    }
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypetable()
{
    yang_name = "qosInterfaceTypeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosinterfacetypetable::~Qosinterfacetypetable()
{
}

bool CiscoQosPibMib::Qosinterfacetypetable::has_data() const
{
    for (std::size_t index=0; index<qosinterfacetypeentry_.size(); index++)
    {
        if(qosinterfacetypeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosinterfacetypetable::has_operation() const
{
    for (std::size_t index=0; index<qosinterfacetypeentry_.size(); index++)
    {
        if(qosinterfacetypeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosinterfacetypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosinterfacetypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosinterfacetypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosInterfaceTypeEntry")
    {
        for(auto const & c : qosinterfacetypeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry>();
        c->parent = this;
        qosinterfacetypeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosinterfacetypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosinterfacetypeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosinterfacetypetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::Qosinterfacetypeentry()
    :
    qosinterfacetypeid{YType::uint32, "qosInterfaceTypeId"},
    qosinterfacequeuetype{YType::enumeration, "qosInterfaceQueueType"},
    qosinterfacetypecapabilities{YType::bits, "qosInterfaceTypeCapabilities"},
    qosinterfacetyperoles{YType::str, "qosInterfaceTypeRoles"}
{
    yang_name = "qosInterfaceTypeEntry"; yang_parent_name = "qosInterfaceTypeTable";
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::~Qosinterfacetypeentry()
{
}

bool CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::has_data() const
{
    return qosinterfacetypeid.is_set
	|| qosinterfacequeuetype.is_set
	|| qosinterfacetypecapabilities.is_set
	|| qosinterfacetyperoles.is_set;
}

bool CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosinterfacetypeid.operation)
	|| is_set(qosinterfacequeuetype.operation)
	|| is_set(qosinterfacetypecapabilities.operation)
	|| is_set(qosinterfacetyperoles.operation);
}

std::string CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeEntry" <<"[qosInterfaceTypeId='" <<qosinterfacetypeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosInterfaceTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosinterfacetypeid.is_set || is_set(qosinterfacetypeid.operation)) leaf_name_data.push_back(qosinterfacetypeid.get_name_leafdata());
    if (qosinterfacequeuetype.is_set || is_set(qosinterfacequeuetype.operation)) leaf_name_data.push_back(qosinterfacequeuetype.get_name_leafdata());
    if (qosinterfacetypecapabilities.is_set || is_set(qosinterfacetypecapabilities.operation)) leaf_name_data.push_back(qosinterfacetypecapabilities.get_name_leafdata());
    if (qosinterfacetyperoles.is_set || is_set(qosinterfacetyperoles.operation)) leaf_name_data.push_back(qosinterfacetyperoles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosInterfaceTypeId")
    {
        qosinterfacetypeid = value;
    }
    if(value_path == "qosInterfaceQueueType")
    {
        qosinterfacequeuetype = value;
    }
    if(value_path == "qosInterfaceTypeCapabilities")
    {
        qosinterfacetypecapabilities[value] = true;
    }
    if(value_path == "qosInterfaceTypeRoles")
    {
        qosinterfacetyperoles = value;
    }
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingtable()
{
    yang_name = "qosDiffServMappingTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdiffservmappingtable::~Qosdiffservmappingtable()
{
}

bool CiscoQosPibMib::Qosdiffservmappingtable::has_data() const
{
    for (std::size_t index=0; index<qosdiffservmappingentry_.size(); index++)
    {
        if(qosdiffservmappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdiffservmappingtable::has_operation() const
{
    for (std::size_t index=0; index<qosdiffservmappingentry_.size(); index++)
    {
        if(qosdiffservmappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosdiffservmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdiffservmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdiffservmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDiffServMappingEntry")
    {
        for(auto const & c : qosdiffservmappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry>();
        c->parent = this;
        qosdiffservmappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdiffservmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdiffservmappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdiffservmappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::Qosdiffservmappingentry()
    :
    qosdscp{YType::int32, "qosDscp"},
    qosl2cos{YType::int32, "qosL2Cos"},
    qosmarkeddscp{YType::int32, "qosMarkedDscp"}
{
    yang_name = "qosDiffServMappingEntry"; yang_parent_name = "qosDiffServMappingTable";
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::~Qosdiffservmappingentry()
{
}

bool CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::has_data() const
{
    return qosdscp.is_set
	|| qosl2cos.is_set
	|| qosmarkeddscp.is_set;
}

bool CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosdscp.operation)
	|| is_set(qosl2cos.operation)
	|| is_set(qosmarkeddscp.operation);
}

std::string CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingEntry" <<"[qosDscp='" <<qosdscp <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDiffServMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdscp.is_set || is_set(qosdscp.operation)) leaf_name_data.push_back(qosdscp.get_name_leafdata());
    if (qosl2cos.is_set || is_set(qosl2cos.operation)) leaf_name_data.push_back(qosl2cos.get_name_leafdata());
    if (qosmarkeddscp.is_set || is_set(qosmarkeddscp.operation)) leaf_name_data.push_back(qosmarkeddscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosDscp")
    {
        qosdscp = value;
    }
    if(value_path == "qosL2Cos")
    {
        qosl2cos = value;
    }
    if(value_path == "qosMarkedDscp")
    {
        qosmarkeddscp = value;
    }
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscptable()
{
    yang_name = "qosCosToDscpTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qoscostodscptable::~Qoscostodscptable()
{
}

bool CiscoQosPibMib::Qoscostodscptable::has_data() const
{
    for (std::size_t index=0; index<qoscostodscpentry_.size(); index++)
    {
        if(qoscostodscpentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qoscostodscptable::has_operation() const
{
    for (std::size_t index=0; index<qoscostodscpentry_.size(); index++)
    {
        if(qoscostodscpentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qoscostodscptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qoscostodscptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qoscostodscptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosCosToDscpEntry")
    {
        for(auto const & c : qoscostodscpentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry>();
        c->parent = this;
        qoscostodscpentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qoscostodscptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qoscostodscpentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qoscostodscptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::Qoscostodscpentry()
    :
    qoscostodscpcos{YType::int32, "qosCosToDscpCos"},
    qoscostodscpdscp{YType::int32, "qosCosToDscpDscp"}
{
    yang_name = "qosCosToDscpEntry"; yang_parent_name = "qosCosToDscpTable";
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::~Qoscostodscpentry()
{
}

bool CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::has_data() const
{
    return qoscostodscpcos.is_set
	|| qoscostodscpdscp.is_set;
}

bool CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qoscostodscpcos.operation)
	|| is_set(qoscostodscpdscp.operation);
}

std::string CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpEntry" <<"[qosCosToDscpCos='" <<qoscostodscpcos <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosCosToDscpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qoscostodscpcos.is_set || is_set(qoscostodscpcos.operation)) leaf_name_data.push_back(qoscostodscpcos.get_name_leafdata());
    if (qoscostodscpdscp.is_set || is_set(qoscostodscpdscp.operation)) leaf_name_data.push_back(qoscostodscpdscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosCosToDscpCos")
    {
        qoscostodscpcos = value;
    }
    if(value_path == "qosCosToDscpDscp")
    {
        qoscostodscpdscp = value;
    }
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicytable()
{
    yang_name = "qosUnmatchedPolicyTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosunmatchedpolicytable::~Qosunmatchedpolicytable()
{
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::has_data() const
{
    for (std::size_t index=0; index<qosunmatchedpolicyentry_.size(); index++)
    {
        if(qosunmatchedpolicyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::has_operation() const
{
    for (std::size_t index=0; index<qosunmatchedpolicyentry_.size(); index++)
    {
        if(qosunmatchedpolicyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosunmatchedpolicytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosunmatchedpolicytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosunmatchedpolicytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosUnmatchedPolicyEntry")
    {
        for(auto const & c : qosunmatchedpolicyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry>();
        c->parent = this;
        qosunmatchedpolicyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosunmatchedpolicytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosunmatchedpolicyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosunmatchedpolicytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicyentry()
    :
    qosunmatchedpolicyid{YType::uint32, "qosUnmatchedPolicyId"},
    qosunmatchedpolicyaggregateid{YType::uint32, "qosUnmatchedPolicyAggregateId"},
    qosunmatchedpolicydirection{YType::enumeration, "qosUnmatchedPolicyDirection"},
    qosunmatchedpolicydscp{YType::int32, "qosUnmatchedPolicyDscp"},
    qosunmatchedpolicydscptrusted{YType::boolean, "qosUnmatchedPolicyDscpTrusted"},
    qosunmatchedpolicyrole{YType::str, "qosUnmatchedPolicyRole"},
    qosunmatchpolmicroflowpolicerid{YType::uint32, "qosUnmatchPolMicroFlowPolicerId"}
{
    yang_name = "qosUnmatchedPolicyEntry"; yang_parent_name = "qosUnmatchedPolicyTable";
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::~Qosunmatchedpolicyentry()
{
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::has_data() const
{
    return qosunmatchedpolicyid.is_set
	|| qosunmatchedpolicyaggregateid.is_set
	|| qosunmatchedpolicydirection.is_set
	|| qosunmatchedpolicydscp.is_set
	|| qosunmatchedpolicydscptrusted.is_set
	|| qosunmatchedpolicyrole.is_set
	|| qosunmatchpolmicroflowpolicerid.is_set;
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosunmatchedpolicyid.operation)
	|| is_set(qosunmatchedpolicyaggregateid.operation)
	|| is_set(qosunmatchedpolicydirection.operation)
	|| is_set(qosunmatchedpolicydscp.operation)
	|| is_set(qosunmatchedpolicydscptrusted.operation)
	|| is_set(qosunmatchedpolicyrole.operation)
	|| is_set(qosunmatchpolmicroflowpolicerid.operation);
}

std::string CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyEntry" <<"[qosUnmatchedPolicyId='" <<qosunmatchedpolicyid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosUnmatchedPolicyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosunmatchedpolicyid.is_set || is_set(qosunmatchedpolicyid.operation)) leaf_name_data.push_back(qosunmatchedpolicyid.get_name_leafdata());
    if (qosunmatchedpolicyaggregateid.is_set || is_set(qosunmatchedpolicyaggregateid.operation)) leaf_name_data.push_back(qosunmatchedpolicyaggregateid.get_name_leafdata());
    if (qosunmatchedpolicydirection.is_set || is_set(qosunmatchedpolicydirection.operation)) leaf_name_data.push_back(qosunmatchedpolicydirection.get_name_leafdata());
    if (qosunmatchedpolicydscp.is_set || is_set(qosunmatchedpolicydscp.operation)) leaf_name_data.push_back(qosunmatchedpolicydscp.get_name_leafdata());
    if (qosunmatchedpolicydscptrusted.is_set || is_set(qosunmatchedpolicydscptrusted.operation)) leaf_name_data.push_back(qosunmatchedpolicydscptrusted.get_name_leafdata());
    if (qosunmatchedpolicyrole.is_set || is_set(qosunmatchedpolicyrole.operation)) leaf_name_data.push_back(qosunmatchedpolicyrole.get_name_leafdata());
    if (qosunmatchpolmicroflowpolicerid.is_set || is_set(qosunmatchpolmicroflowpolicerid.operation)) leaf_name_data.push_back(qosunmatchpolmicroflowpolicerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosUnmatchedPolicyId")
    {
        qosunmatchedpolicyid = value;
    }
    if(value_path == "qosUnmatchedPolicyAggregateId")
    {
        qosunmatchedpolicyaggregateid = value;
    }
    if(value_path == "qosUnmatchedPolicyDirection")
    {
        qosunmatchedpolicydirection = value;
    }
    if(value_path == "qosUnmatchedPolicyDscp")
    {
        qosunmatchedpolicydscp = value;
    }
    if(value_path == "qosUnmatchedPolicyDscpTrusted")
    {
        qosunmatchedpolicydscptrusted = value;
    }
    if(value_path == "qosUnmatchedPolicyRole")
    {
        qosunmatchedpolicyrole = value;
    }
    if(value_path == "qosUnmatchPolMicroFlowPolicerId")
    {
        qosunmatchpolmicroflowpolicerid = value;
    }
}

CiscoQosPibMib::Qospolicertable::Qospolicertable()
{
    yang_name = "qosPolicerTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qospolicertable::~Qospolicertable()
{
}

bool CiscoQosPibMib::Qospolicertable::has_data() const
{
    for (std::size_t index=0; index<qospolicerentry_.size(); index++)
    {
        if(qospolicerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qospolicertable::has_operation() const
{
    for (std::size_t index=0; index<qospolicerentry_.size(); index++)
    {
        if(qospolicerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qospolicertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qospolicertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qospolicertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosPolicerEntry")
    {
        for(auto const & c : qospolicerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qospolicertable::Qospolicerentry>();
        c->parent = this;
        qospolicerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qospolicertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qospolicerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qospolicertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospolicerentry()
    :
    qospolicerid{YType::uint32, "qosPolicerId"},
    qospoliceraction{YType::enumeration, "qosPolicerAction"},
    qospolicerexcessburst{YType::uint32, "qosPolicerExcessBurst"},
    qospolicernormalburst{YType::uint32, "qosPolicerNormalBurst"},
    qospolicerrate{YType::uint32, "qosPolicerRate"}
{
    yang_name = "qosPolicerEntry"; yang_parent_name = "qosPolicerTable";
}

CiscoQosPibMib::Qospolicertable::Qospolicerentry::~Qospolicerentry()
{
}

bool CiscoQosPibMib::Qospolicertable::Qospolicerentry::has_data() const
{
    return qospolicerid.is_set
	|| qospoliceraction.is_set
	|| qospolicerexcessburst.is_set
	|| qospolicernormalburst.is_set
	|| qospolicerrate.is_set;
}

bool CiscoQosPibMib::Qospolicertable::Qospolicerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qospolicerid.operation)
	|| is_set(qospoliceraction.operation)
	|| is_set(qospolicerexcessburst.operation)
	|| is_set(qospolicernormalburst.operation)
	|| is_set(qospolicerrate.operation);
}

std::string CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerEntry" <<"[qosPolicerId='" <<qospolicerid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosPolicerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qospolicerid.is_set || is_set(qospolicerid.operation)) leaf_name_data.push_back(qospolicerid.get_name_leafdata());
    if (qospoliceraction.is_set || is_set(qospoliceraction.operation)) leaf_name_data.push_back(qospoliceraction.get_name_leafdata());
    if (qospolicerexcessburst.is_set || is_set(qospolicerexcessburst.operation)) leaf_name_data.push_back(qospolicerexcessburst.get_name_leafdata());
    if (qospolicernormalburst.is_set || is_set(qospolicernormalburst.operation)) leaf_name_data.push_back(qospolicernormalburst.get_name_leafdata());
    if (qospolicerrate.is_set || is_set(qospolicerrate.operation)) leaf_name_data.push_back(qospolicerrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qospolicertable::Qospolicerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosPolicerId")
    {
        qospolicerid = value;
    }
    if(value_path == "qosPolicerAction")
    {
        qospoliceraction = value;
    }
    if(value_path == "qosPolicerExcessBurst")
    {
        qospolicerexcessburst = value;
    }
    if(value_path == "qosPolicerNormalBurst")
    {
        qospolicernormalburst = value;
    }
    if(value_path == "qosPolicerRate")
    {
        qospolicerrate = value;
    }
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregatetable()
{
    yang_name = "qosAggregateTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosaggregatetable::~Qosaggregatetable()
{
}

bool CiscoQosPibMib::Qosaggregatetable::has_data() const
{
    for (std::size_t index=0; index<qosaggregateentry_.size(); index++)
    {
        if(qosaggregateentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosaggregatetable::has_operation() const
{
    for (std::size_t index=0; index<qosaggregateentry_.size(); index++)
    {
        if(qosaggregateentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosaggregatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosaggregatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosaggregatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosAggregateEntry")
    {
        for(auto const & c : qosaggregateentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry>();
        c->parent = this;
        qosaggregateentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosaggregatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosaggregateentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosaggregatetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::Qosaggregateentry()
    :
    qosaggregateid{YType::uint32, "qosAggregateId"},
    qosaggregatepolicerid{YType::uint32, "qosAggregatePolicerId"}
{
    yang_name = "qosAggregateEntry"; yang_parent_name = "qosAggregateTable";
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::~Qosaggregateentry()
{
}

bool CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::has_data() const
{
    return qosaggregateid.is_set
	|| qosaggregatepolicerid.is_set;
}

bool CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosaggregateid.operation)
	|| is_set(qosaggregatepolicerid.operation);
}

std::string CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateEntry" <<"[qosAggregateId='" <<qosaggregateid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosAggregateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosaggregateid.is_set || is_set(qosaggregateid.operation)) leaf_name_data.push_back(qosaggregateid.get_name_leafdata());
    if (qosaggregatepolicerid.is_set || is_set(qosaggregatepolicerid.operation)) leaf_name_data.push_back(qosaggregatepolicerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosAggregateId")
    {
        qosaggregateid = value;
    }
    if(value_path == "qosAggregatePolicerId")
    {
        qosaggregatepolicerid = value;
    }
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationtable()
{
    yang_name = "qosMacClassificationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosmacclassificationtable::~Qosmacclassificationtable()
{
}

bool CiscoQosPibMib::Qosmacclassificationtable::has_data() const
{
    for (std::size_t index=0; index<qosmacclassificationentry_.size(); index++)
    {
        if(qosmacclassificationentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosmacclassificationtable::has_operation() const
{
    for (std::size_t index=0; index<qosmacclassificationentry_.size(); index++)
    {
        if(qosmacclassificationentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosmacclassificationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosmacclassificationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosmacclassificationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosMacClassificationEntry")
    {
        for(auto const & c : qosmacclassificationentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry>();
        c->parent = this;
        qosmacclassificationentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosmacclassificationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosmacclassificationentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosmacclassificationtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::Qosmacclassificationentry()
    :
    qosmacclassificationid{YType::uint32, "qosMacClassificationId"},
    qosdstmacaddress{YType::str, "qosDstMacAddress"},
    qosdstmaccos{YType::int32, "qosDstMacCos"},
    qosdstmacvlan{YType::int32, "qosDstMacVlan"}
{
    yang_name = "qosMacClassificationEntry"; yang_parent_name = "qosMacClassificationTable";
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::~Qosmacclassificationentry()
{
}

bool CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::has_data() const
{
    return qosmacclassificationid.is_set
	|| qosdstmacaddress.is_set
	|| qosdstmaccos.is_set
	|| qosdstmacvlan.is_set;
}

bool CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosmacclassificationid.operation)
	|| is_set(qosdstmacaddress.operation)
	|| is_set(qosdstmaccos.operation)
	|| is_set(qosdstmacvlan.operation);
}

std::string CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationEntry" <<"[qosMacClassificationId='" <<qosmacclassificationid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosMacClassificationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosmacclassificationid.is_set || is_set(qosmacclassificationid.operation)) leaf_name_data.push_back(qosmacclassificationid.get_name_leafdata());
    if (qosdstmacaddress.is_set || is_set(qosdstmacaddress.operation)) leaf_name_data.push_back(qosdstmacaddress.get_name_leafdata());
    if (qosdstmaccos.is_set || is_set(qosdstmaccos.operation)) leaf_name_data.push_back(qosdstmaccos.get_name_leafdata());
    if (qosdstmacvlan.is_set || is_set(qosdstmacvlan.operation)) leaf_name_data.push_back(qosdstmacvlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosMacClassificationId")
    {
        qosmacclassificationid = value;
    }
    if(value_path == "qosDstMacAddress")
    {
        qosdstmacaddress = value;
    }
    if(value_path == "qosDstMacCos")
    {
        qosdstmaccos = value;
    }
    if(value_path == "qosDstMacVlan")
    {
        qosdstmacvlan = value;
    }
}

CiscoQosPibMib::Qosipacetable::Qosipacetable()
{
    yang_name = "qosIpAceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipacetable::~Qosipacetable()
{
}

bool CiscoQosPibMib::Qosipacetable::has_data() const
{
    for (std::size_t index=0; index<qosipaceentry_.size(); index++)
    {
        if(qosipaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipacetable::has_operation() const
{
    for (std::size_t index=0; index<qosipaceentry_.size(); index++)
    {
        if(qosipaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosipacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAceEntry")
    {
        for(auto const & c : qosipaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipacetable::Qosipaceentry>();
        c->parent = this;
        qosipaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipacetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosipacetable::Qosipaceentry::Qosipaceentry()
    :
    qosipaceid{YType::uint32, "qosIpAceId"},
    qosipacedscpmax{YType::int32, "qosIpAceDscpMax"},
    qosipacedscpmin{YType::int32, "qosIpAceDscpMin"},
    qosipacedstaddr{YType::str, "qosIpAceDstAddr"},
    qosipacedstaddrmask{YType::str, "qosIpAceDstAddrMask"},
    qosipacedstl4portmax{YType::int32, "qosIpAceDstL4PortMax"},
    qosipacedstl4portmin{YType::int32, "qosIpAceDstL4PortMin"},
    qosipacepermit{YType::boolean, "qosIpAcePermit"},
    qosipaceprotocol{YType::int32, "qosIpAceProtocol"},
    qosipacesrcaddr{YType::str, "qosIpAceSrcAddr"},
    qosipacesrcaddrmask{YType::str, "qosIpAceSrcAddrMask"},
    qosipacesrcl4portmax{YType::int32, "qosIpAceSrcL4PortMax"},
    qosipacesrcl4portmin{YType::int32, "qosIpAceSrcL4PortMin"}
{
    yang_name = "qosIpAceEntry"; yang_parent_name = "qosIpAceTable";
}

CiscoQosPibMib::Qosipacetable::Qosipaceentry::~Qosipaceentry()
{
}

bool CiscoQosPibMib::Qosipacetable::Qosipaceentry::has_data() const
{
    return qosipaceid.is_set
	|| qosipacedscpmax.is_set
	|| qosipacedscpmin.is_set
	|| qosipacedstaddr.is_set
	|| qosipacedstaddrmask.is_set
	|| qosipacedstl4portmax.is_set
	|| qosipacedstl4portmin.is_set
	|| qosipacepermit.is_set
	|| qosipaceprotocol.is_set
	|| qosipacesrcaddr.is_set
	|| qosipacesrcaddrmask.is_set
	|| qosipacesrcl4portmax.is_set
	|| qosipacesrcl4portmin.is_set;
}

bool CiscoQosPibMib::Qosipacetable::Qosipaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosipaceid.operation)
	|| is_set(qosipacedscpmax.operation)
	|| is_set(qosipacedscpmin.operation)
	|| is_set(qosipacedstaddr.operation)
	|| is_set(qosipacedstaddrmask.operation)
	|| is_set(qosipacedstl4portmax.operation)
	|| is_set(qosipacedstl4portmin.operation)
	|| is_set(qosipacepermit.operation)
	|| is_set(qosipaceprotocol.operation)
	|| is_set(qosipacesrcaddr.operation)
	|| is_set(qosipacesrcaddrmask.operation)
	|| is_set(qosipacesrcl4portmax.operation)
	|| is_set(qosipacesrcl4portmin.operation);
}

std::string CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceEntry" <<"[qosIpAceId='" <<qosipaceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaceid.is_set || is_set(qosipaceid.operation)) leaf_name_data.push_back(qosipaceid.get_name_leafdata());
    if (qosipacedscpmax.is_set || is_set(qosipacedscpmax.operation)) leaf_name_data.push_back(qosipacedscpmax.get_name_leafdata());
    if (qosipacedscpmin.is_set || is_set(qosipacedscpmin.operation)) leaf_name_data.push_back(qosipacedscpmin.get_name_leafdata());
    if (qosipacedstaddr.is_set || is_set(qosipacedstaddr.operation)) leaf_name_data.push_back(qosipacedstaddr.get_name_leafdata());
    if (qosipacedstaddrmask.is_set || is_set(qosipacedstaddrmask.operation)) leaf_name_data.push_back(qosipacedstaddrmask.get_name_leafdata());
    if (qosipacedstl4portmax.is_set || is_set(qosipacedstl4portmax.operation)) leaf_name_data.push_back(qosipacedstl4portmax.get_name_leafdata());
    if (qosipacedstl4portmin.is_set || is_set(qosipacedstl4portmin.operation)) leaf_name_data.push_back(qosipacedstl4portmin.get_name_leafdata());
    if (qosipacepermit.is_set || is_set(qosipacepermit.operation)) leaf_name_data.push_back(qosipacepermit.get_name_leafdata());
    if (qosipaceprotocol.is_set || is_set(qosipaceprotocol.operation)) leaf_name_data.push_back(qosipaceprotocol.get_name_leafdata());
    if (qosipacesrcaddr.is_set || is_set(qosipacesrcaddr.operation)) leaf_name_data.push_back(qosipacesrcaddr.get_name_leafdata());
    if (qosipacesrcaddrmask.is_set || is_set(qosipacesrcaddrmask.operation)) leaf_name_data.push_back(qosipacesrcaddrmask.get_name_leafdata());
    if (qosipacesrcl4portmax.is_set || is_set(qosipacesrcl4portmax.operation)) leaf_name_data.push_back(qosipacesrcl4portmax.get_name_leafdata());
    if (qosipacesrcl4portmin.is_set || is_set(qosipacesrcl4portmin.operation)) leaf_name_data.push_back(qosipacesrcl4portmin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipacetable::Qosipaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIpAceId")
    {
        qosipaceid = value;
    }
    if(value_path == "qosIpAceDscpMax")
    {
        qosipacedscpmax = value;
    }
    if(value_path == "qosIpAceDscpMin")
    {
        qosipacedscpmin = value;
    }
    if(value_path == "qosIpAceDstAddr")
    {
        qosipacedstaddr = value;
    }
    if(value_path == "qosIpAceDstAddrMask")
    {
        qosipacedstaddrmask = value;
    }
    if(value_path == "qosIpAceDstL4PortMax")
    {
        qosipacedstl4portmax = value;
    }
    if(value_path == "qosIpAceDstL4PortMin")
    {
        qosipacedstl4portmin = value;
    }
    if(value_path == "qosIpAcePermit")
    {
        qosipacepermit = value;
    }
    if(value_path == "qosIpAceProtocol")
    {
        qosipaceprotocol = value;
    }
    if(value_path == "qosIpAceSrcAddr")
    {
        qosipacesrcaddr = value;
    }
    if(value_path == "qosIpAceSrcAddrMask")
    {
        qosipacesrcaddrmask = value;
    }
    if(value_path == "qosIpAceSrcL4PortMax")
    {
        qosipacesrcl4portmax = value;
    }
    if(value_path == "qosIpAceSrcL4PortMin")
    {
        qosipacesrcl4portmin = value;
    }
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitiontable()
{
    yang_name = "qosIpAclDefinitionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipacldefinitiontable::~Qosipacldefinitiontable()
{
}

bool CiscoQosPibMib::Qosipacldefinitiontable::has_data() const
{
    for (std::size_t index=0; index<qosipacldefinitionentry_.size(); index++)
    {
        if(qosipacldefinitionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipacldefinitiontable::has_operation() const
{
    for (std::size_t index=0; index<qosipacldefinitionentry_.size(); index++)
    {
        if(qosipacldefinitionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosipacldefinitiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacldefinitiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacldefinitiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclDefinitionEntry")
    {
        for(auto const & c : qosipacldefinitionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry>();
        c->parent = this;
        qosipacldefinitionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacldefinitiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipacldefinitionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipacldefinitiontable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::Qosipacldefinitionentry()
    :
    qosipacldefinitionid{YType::uint32, "qosIpAclDefinitionId"},
    qosipaceorder{YType::uint32, "qosIpAceOrder"},
    qosipacldefaceid{YType::uint32, "qosIpAclDefAceId"},
    qosipaclid{YType::uint32, "qosIpAclId"}
{
    yang_name = "qosIpAclDefinitionEntry"; yang_parent_name = "qosIpAclDefinitionTable";
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::~Qosipacldefinitionentry()
{
}

bool CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::has_data() const
{
    return qosipacldefinitionid.is_set
	|| qosipaceorder.is_set
	|| qosipacldefaceid.is_set
	|| qosipaclid.is_set;
}

bool CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosipacldefinitionid.operation)
	|| is_set(qosipaceorder.operation)
	|| is_set(qosipacldefaceid.operation)
	|| is_set(qosipaclid.operation);
}

std::string CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionEntry" <<"[qosIpAclDefinitionId='" <<qosipacldefinitionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclDefinitionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipacldefinitionid.is_set || is_set(qosipacldefinitionid.operation)) leaf_name_data.push_back(qosipacldefinitionid.get_name_leafdata());
    if (qosipaceorder.is_set || is_set(qosipaceorder.operation)) leaf_name_data.push_back(qosipaceorder.get_name_leafdata());
    if (qosipacldefaceid.is_set || is_set(qosipacldefaceid.operation)) leaf_name_data.push_back(qosipacldefaceid.get_name_leafdata());
    if (qosipaclid.is_set || is_set(qosipaclid.operation)) leaf_name_data.push_back(qosipaclid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIpAclDefinitionId")
    {
        qosipacldefinitionid = value;
    }
    if(value_path == "qosIpAceOrder")
    {
        qosipaceorder = value;
    }
    if(value_path == "qosIpAclDefAceId")
    {
        qosipacldefaceid = value;
    }
    if(value_path == "qosIpAclId")
    {
        qosipaclid = value;
    }
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactiontable()
{
    yang_name = "qosIpAclActionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipaclactiontable::~Qosipaclactiontable()
{
}

bool CiscoQosPibMib::Qosipaclactiontable::has_data() const
{
    for (std::size_t index=0; index<qosipaclactionentry_.size(); index++)
    {
        if(qosipaclactionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipaclactiontable::has_operation() const
{
    for (std::size_t index=0; index<qosipaclactionentry_.size(); index++)
    {
        if(qosipaclactionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosipaclactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipaclactiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipaclactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclActionEntry")
    {
        for(auto const & c : qosipaclactionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry>();
        c->parent = this;
        qosipaclactionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipaclactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipaclactionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipaclactiontable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::Qosipaclactionentry()
    :
    qosipaclactionid{YType::uint32, "qosIpAclActionId"},
    qosipaclactaclid{YType::uint32, "qosIpAclActAclId"},
    qosipaclaggregateid{YType::uint32, "qosIpAclAggregateId"},
    qosipacldscp{YType::int32, "qosIpAclDscp"},
    qosipacldscptrusted{YType::boolean, "qosIpAclDscpTrusted"},
    qosipaclinterfacedirection{YType::enumeration, "qosIpAclInterfaceDirection"},
    qosipaclinterfaceroles{YType::str, "qosIpAclInterfaceRoles"},
    qosipaclmicroflowpolicerid{YType::uint32, "qosIpAclMicroFlowPolicerId"},
    qosipaclorder{YType::uint32, "qosIpAclOrder"}
{
    yang_name = "qosIpAclActionEntry"; yang_parent_name = "qosIpAclActionTable";
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::~Qosipaclactionentry()
{
}

bool CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::has_data() const
{
    return qosipaclactionid.is_set
	|| qosipaclactaclid.is_set
	|| qosipaclaggregateid.is_set
	|| qosipacldscp.is_set
	|| qosipacldscptrusted.is_set
	|| qosipaclinterfacedirection.is_set
	|| qosipaclinterfaceroles.is_set
	|| qosipaclmicroflowpolicerid.is_set
	|| qosipaclorder.is_set;
}

bool CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosipaclactionid.operation)
	|| is_set(qosipaclactaclid.operation)
	|| is_set(qosipaclaggregateid.operation)
	|| is_set(qosipacldscp.operation)
	|| is_set(qosipacldscptrusted.operation)
	|| is_set(qosipaclinterfacedirection.operation)
	|| is_set(qosipaclinterfaceroles.operation)
	|| is_set(qosipaclmicroflowpolicerid.operation)
	|| is_set(qosipaclorder.operation);
}

std::string CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionEntry" <<"[qosIpAclActionId='" <<qosipaclactionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclActionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaclactionid.is_set || is_set(qosipaclactionid.operation)) leaf_name_data.push_back(qosipaclactionid.get_name_leafdata());
    if (qosipaclactaclid.is_set || is_set(qosipaclactaclid.operation)) leaf_name_data.push_back(qosipaclactaclid.get_name_leafdata());
    if (qosipaclaggregateid.is_set || is_set(qosipaclaggregateid.operation)) leaf_name_data.push_back(qosipaclaggregateid.get_name_leafdata());
    if (qosipacldscp.is_set || is_set(qosipacldscp.operation)) leaf_name_data.push_back(qosipacldscp.get_name_leafdata());
    if (qosipacldscptrusted.is_set || is_set(qosipacldscptrusted.operation)) leaf_name_data.push_back(qosipacldscptrusted.get_name_leafdata());
    if (qosipaclinterfacedirection.is_set || is_set(qosipaclinterfacedirection.operation)) leaf_name_data.push_back(qosipaclinterfacedirection.get_name_leafdata());
    if (qosipaclinterfaceroles.is_set || is_set(qosipaclinterfaceroles.operation)) leaf_name_data.push_back(qosipaclinterfaceroles.get_name_leafdata());
    if (qosipaclmicroflowpolicerid.is_set || is_set(qosipaclmicroflowpolicerid.operation)) leaf_name_data.push_back(qosipaclmicroflowpolicerid.get_name_leafdata());
    if (qosipaclorder.is_set || is_set(qosipaclorder.operation)) leaf_name_data.push_back(qosipaclorder.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIpAclActionId")
    {
        qosipaclactionid = value;
    }
    if(value_path == "qosIpAclActAclId")
    {
        qosipaclactaclid = value;
    }
    if(value_path == "qosIpAclAggregateId")
    {
        qosipaclaggregateid = value;
    }
    if(value_path == "qosIpAclDscp")
    {
        qosipacldscp = value;
    }
    if(value_path == "qosIpAclDscpTrusted")
    {
        qosipacldscptrusted = value;
    }
    if(value_path == "qosIpAclInterfaceDirection")
    {
        qosipaclinterfacedirection = value;
    }
    if(value_path == "qosIpAclInterfaceRoles")
    {
        qosipaclinterfaceroles = value;
    }
    if(value_path == "qosIpAclMicroFlowPolicerId")
    {
        qosipaclmicroflowpolicerid = value;
    }
    if(value_path == "qosIpAclOrder")
    {
        qosipaclorder = value;
    }
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferencestable()
{
    yang_name = "qosIfSchedulingPreferencesTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifschedulingpreferencestable::~Qosifschedulingpreferencestable()
{
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::has_data() const
{
    for (std::size_t index=0; index<qosifschedulingpreferenceentry_.size(); index++)
    {
        if(qosifschedulingpreferenceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::has_operation() const
{
    for (std::size_t index=0; index<qosifschedulingpreferenceentry_.size(); index++)
    {
        if(qosifschedulingpreferenceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosifschedulingpreferencestable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferencesTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifschedulingpreferencestable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifschedulingpreferencestable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfSchedulingPreferenceEntry")
    {
        for(auto const & c : qosifschedulingpreferenceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry>();
        c->parent = this;
        qosifschedulingpreferenceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifschedulingpreferencestable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifschedulingpreferenceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingpreferenceentry()
    :
    qosifschedulingpreferenceid{YType::uint32, "qosIfSchedulingPreferenceId"},
    qosifschedulingdiscipline{YType::enumeration, "qosIfSchedulingDiscipline"},
    qosifschedulingpreference{YType::int32, "qosIfSchedulingPreference"},
    qosifschedulingqueuetype{YType::enumeration, "qosIfSchedulingQueueType"},
    qosifschedulingroles{YType::str, "qosIfSchedulingRoles"}
{
    yang_name = "qosIfSchedulingPreferenceEntry"; yang_parent_name = "qosIfSchedulingPreferencesTable";
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::~Qosifschedulingpreferenceentry()
{
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::has_data() const
{
    return qosifschedulingpreferenceid.is_set
	|| qosifschedulingdiscipline.is_set
	|| qosifschedulingpreference.is_set
	|| qosifschedulingqueuetype.is_set
	|| qosifschedulingroles.is_set;
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosifschedulingpreferenceid.operation)
	|| is_set(qosifschedulingdiscipline.operation)
	|| is_set(qosifschedulingpreference.operation)
	|| is_set(qosifschedulingqueuetype.operation)
	|| is_set(qosifschedulingroles.operation);
}

std::string CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferenceEntry" <<"[qosIfSchedulingPreferenceId='" <<qosifschedulingpreferenceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfSchedulingPreferencesTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifschedulingpreferenceid.is_set || is_set(qosifschedulingpreferenceid.operation)) leaf_name_data.push_back(qosifschedulingpreferenceid.get_name_leafdata());
    if (qosifschedulingdiscipline.is_set || is_set(qosifschedulingdiscipline.operation)) leaf_name_data.push_back(qosifschedulingdiscipline.get_name_leafdata());
    if (qosifschedulingpreference.is_set || is_set(qosifschedulingpreference.operation)) leaf_name_data.push_back(qosifschedulingpreference.get_name_leafdata());
    if (qosifschedulingqueuetype.is_set || is_set(qosifschedulingqueuetype.operation)) leaf_name_data.push_back(qosifschedulingqueuetype.get_name_leafdata());
    if (qosifschedulingroles.is_set || is_set(qosifschedulingroles.operation)) leaf_name_data.push_back(qosifschedulingroles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfSchedulingPreferenceId")
    {
        qosifschedulingpreferenceid = value;
    }
    if(value_path == "qosIfSchedulingDiscipline")
    {
        qosifschedulingdiscipline = value;
    }
    if(value_path == "qosIfSchedulingPreference")
    {
        qosifschedulingpreference = value;
    }
    if(value_path == "qosIfSchedulingQueueType")
    {
        qosifschedulingqueuetype = value;
    }
    if(value_path == "qosIfSchedulingRoles")
    {
        qosifschedulingroles = value;
    }
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferencetable()
{
    yang_name = "qosIfDropPreferenceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifdroppreferencetable::~Qosifdroppreferencetable()
{
}

bool CiscoQosPibMib::Qosifdroppreferencetable::has_data() const
{
    for (std::size_t index=0; index<qosifdroppreferenceentry_.size(); index++)
    {
        if(qosifdroppreferenceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifdroppreferencetable::has_operation() const
{
    for (std::size_t index=0; index<qosifdroppreferenceentry_.size(); index++)
    {
        if(qosifdroppreferenceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosifdroppreferencetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdroppreferencetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdroppreferencetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDropPreferenceEntry")
    {
        for(auto const & c : qosifdroppreferenceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry>();
        c->parent = this;
        qosifdroppreferenceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdroppreferencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifdroppreferenceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifdroppreferencetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdroppreferenceentry()
    :
    qosifdroppreferenceid{YType::uint32, "qosIfDropPreferenceId"},
    qosifdropdiscipline{YType::enumeration, "qosIfDropDiscipline"},
    qosifdroppreference{YType::int32, "qosIfDropPreference"},
    qosifdroproles{YType::str, "qosIfDropRoles"}
{
    yang_name = "qosIfDropPreferenceEntry"; yang_parent_name = "qosIfDropPreferenceTable";
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::~Qosifdroppreferenceentry()
{
}

bool CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::has_data() const
{
    return qosifdroppreferenceid.is_set
	|| qosifdropdiscipline.is_set
	|| qosifdroppreference.is_set
	|| qosifdroproles.is_set;
}

bool CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosifdroppreferenceid.operation)
	|| is_set(qosifdropdiscipline.operation)
	|| is_set(qosifdroppreference.operation)
	|| is_set(qosifdroproles.operation);
}

std::string CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceEntry" <<"[qosIfDropPreferenceId='" <<qosifdroppreferenceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDropPreferenceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdroppreferenceid.is_set || is_set(qosifdroppreferenceid.operation)) leaf_name_data.push_back(qosifdroppreferenceid.get_name_leafdata());
    if (qosifdropdiscipline.is_set || is_set(qosifdropdiscipline.operation)) leaf_name_data.push_back(qosifdropdiscipline.get_name_leafdata());
    if (qosifdroppreference.is_set || is_set(qosifdroppreference.operation)) leaf_name_data.push_back(qosifdroppreference.get_name_leafdata());
    if (qosifdroproles.is_set || is_set(qosifdroproles.operation)) leaf_name_data.push_back(qosifdroproles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfDropPreferenceId")
    {
        qosifdroppreferenceid = value;
    }
    if(value_path == "qosIfDropDiscipline")
    {
        qosifdropdiscipline = value;
    }
    if(value_path == "qosIfDropPreference")
    {
        qosifdroppreference = value;
    }
    if(value_path == "qosIfDropRoles")
    {
        qosifdroproles = value;
    }
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmenttable()
{
    yang_name = "qosIfDscpAssignmentTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifdscpassignmenttable::~Qosifdscpassignmenttable()
{
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::has_data() const
{
    for (std::size_t index=0; index<qosifdscpassignmententry_.size(); index++)
    {
        if(qosifdscpassignmententry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::has_operation() const
{
    for (std::size_t index=0; index<qosifdscpassignmententry_.size(); index++)
    {
        if(qosifdscpassignmententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosifdscpassignmenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdscpassignmenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdscpassignmenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDscpAssignmentEntry")
    {
        for(auto const & c : qosifdscpassignmententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry>();
        c->parent = this;
        qosifdscpassignmententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdscpassignmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifdscpassignmententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifdscpassignmenttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::Qosifdscpassignmententry()
    :
    qosifdscpassignmentid{YType::uint32, "qosIfDscpAssignmentId"},
    qosifdscp{YType::int32, "qosIfDscp"},
    qosifdscproles{YType::str, "qosIfDscpRoles"},
    qosifqueue{YType::int32, "qosIfQueue"},
    qosifqueuetype{YType::enumeration, "qosIfQueueType"},
    qosifthresholdset{YType::int32, "qosIfThresholdSet"}
{
    yang_name = "qosIfDscpAssignmentEntry"; yang_parent_name = "qosIfDscpAssignmentTable";
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::~Qosifdscpassignmententry()
{
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::has_data() const
{
    return qosifdscpassignmentid.is_set
	|| qosifdscp.is_set
	|| qosifdscproles.is_set
	|| qosifqueue.is_set
	|| qosifqueuetype.is_set
	|| qosifthresholdset.is_set;
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosifdscpassignmentid.operation)
	|| is_set(qosifdscp.operation)
	|| is_set(qosifdscproles.operation)
	|| is_set(qosifqueue.operation)
	|| is_set(qosifqueuetype.operation)
	|| is_set(qosifthresholdset.operation);
}

std::string CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentEntry" <<"[qosIfDscpAssignmentId='" <<qosifdscpassignmentid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDscpAssignmentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdscpassignmentid.is_set || is_set(qosifdscpassignmentid.operation)) leaf_name_data.push_back(qosifdscpassignmentid.get_name_leafdata());
    if (qosifdscp.is_set || is_set(qosifdscp.operation)) leaf_name_data.push_back(qosifdscp.get_name_leafdata());
    if (qosifdscproles.is_set || is_set(qosifdscproles.operation)) leaf_name_data.push_back(qosifdscproles.get_name_leafdata());
    if (qosifqueue.is_set || is_set(qosifqueue.operation)) leaf_name_data.push_back(qosifqueue.get_name_leafdata());
    if (qosifqueuetype.is_set || is_set(qosifqueuetype.operation)) leaf_name_data.push_back(qosifqueuetype.get_name_leafdata());
    if (qosifthresholdset.is_set || is_set(qosifthresholdset.operation)) leaf_name_data.push_back(qosifthresholdset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfDscpAssignmentId")
    {
        qosifdscpassignmentid = value;
    }
    if(value_path == "qosIfDscp")
    {
        qosifdscp = value;
    }
    if(value_path == "qosIfDscpRoles")
    {
        qosifdscproles = value;
    }
    if(value_path == "qosIfQueue")
    {
        qosifqueue = value;
    }
    if(value_path == "qosIfQueueType")
    {
        qosifqueuetype = value;
    }
    if(value_path == "qosIfThresholdSet")
    {
        qosifthresholdset = value;
    }
}

CiscoQosPibMib::Qosifredtable::Qosifredtable()
{
    yang_name = "qosIfRedTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifredtable::~Qosifredtable()
{
}

bool CiscoQosPibMib::Qosifredtable::has_data() const
{
    for (std::size_t index=0; index<qosifredentry_.size(); index++)
    {
        if(qosifredentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifredtable::has_operation() const
{
    for (std::size_t index=0; index<qosifredentry_.size(); index++)
    {
        if(qosifredentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosifredtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifredtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifredtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfRedEntry")
    {
        for(auto const & c : qosifredentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifredtable::Qosifredentry>();
        c->parent = this;
        qosifredentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifredtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifredentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifredtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosifredtable::Qosifredentry::Qosifredentry()
    :
    qosifredid{YType::uint32, "qosIfRedId"},
    qosifrednumthresholdsets{YType::enumeration, "qosIfRedNumThresholdSets"},
    qosifredroles{YType::str, "qosIfRedRoles"},
    qosifredthresholdset{YType::int32, "qosIfRedThresholdSet"},
    qosifredthresholdsetlower{YType::int32, "qosIfRedThresholdSetLower"},
    qosifredthresholdsetupper{YType::int32, "qosIfRedThresholdSetUpper"}
{
    yang_name = "qosIfRedEntry"; yang_parent_name = "qosIfRedTable";
}

CiscoQosPibMib::Qosifredtable::Qosifredentry::~Qosifredentry()
{
}

bool CiscoQosPibMib::Qosifredtable::Qosifredentry::has_data() const
{
    return qosifredid.is_set
	|| qosifrednumthresholdsets.is_set
	|| qosifredroles.is_set
	|| qosifredthresholdset.is_set
	|| qosifredthresholdsetlower.is_set
	|| qosifredthresholdsetupper.is_set;
}

bool CiscoQosPibMib::Qosifredtable::Qosifredentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosifredid.operation)
	|| is_set(qosifrednumthresholdsets.operation)
	|| is_set(qosifredroles.operation)
	|| is_set(qosifredthresholdset.operation)
	|| is_set(qosifredthresholdsetlower.operation)
	|| is_set(qosifredthresholdsetupper.operation);
}

std::string CiscoQosPibMib::Qosifredtable::Qosifredentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedEntry" <<"[qosIfRedId='" <<qosifredid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifredtable::Qosifredentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfRedTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifredid.is_set || is_set(qosifredid.operation)) leaf_name_data.push_back(qosifredid.get_name_leafdata());
    if (qosifrednumthresholdsets.is_set || is_set(qosifrednumthresholdsets.operation)) leaf_name_data.push_back(qosifrednumthresholdsets.get_name_leafdata());
    if (qosifredroles.is_set || is_set(qosifredroles.operation)) leaf_name_data.push_back(qosifredroles.get_name_leafdata());
    if (qosifredthresholdset.is_set || is_set(qosifredthresholdset.operation)) leaf_name_data.push_back(qosifredthresholdset.get_name_leafdata());
    if (qosifredthresholdsetlower.is_set || is_set(qosifredthresholdsetlower.operation)) leaf_name_data.push_back(qosifredthresholdsetlower.get_name_leafdata());
    if (qosifredthresholdsetupper.is_set || is_set(qosifredthresholdsetupper.operation)) leaf_name_data.push_back(qosifredthresholdsetupper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifredtable::Qosifredentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifredtable::Qosifredentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifredtable::Qosifredentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfRedId")
    {
        qosifredid = value;
    }
    if(value_path == "qosIfRedNumThresholdSets")
    {
        qosifrednumthresholdsets = value;
    }
    if(value_path == "qosIfRedRoles")
    {
        qosifredroles = value;
    }
    if(value_path == "qosIfRedThresholdSet")
    {
        qosifredthresholdset = value;
    }
    if(value_path == "qosIfRedThresholdSetLower")
    {
        qosifredthresholdsetlower = value;
    }
    if(value_path == "qosIfRedThresholdSetUpper")
    {
        qosifredthresholdsetupper = value;
    }
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildroptable()
{
    yang_name = "qosIfTailDropTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosiftaildroptable::~Qosiftaildroptable()
{
}

bool CiscoQosPibMib::Qosiftaildroptable::has_data() const
{
    for (std::size_t index=0; index<qosiftaildropentry_.size(); index++)
    {
        if(qosiftaildropentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosiftaildroptable::has_operation() const
{
    for (std::size_t index=0; index<qosiftaildropentry_.size(); index++)
    {
        if(qosiftaildropentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosiftaildroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosiftaildroptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosiftaildroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfTailDropEntry")
    {
        for(auto const & c : qosiftaildropentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry>();
        c->parent = this;
        qosiftaildropentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosiftaildroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosiftaildropentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosiftaildroptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::Qosiftaildropentry()
    :
    qosiftaildropid{YType::uint32, "qosIfTailDropId"},
    qosiftaildropnumthresholdsets{YType::enumeration, "qosIfTailDropNumThresholdSets"},
    qosiftaildroproles{YType::str, "qosIfTailDropRoles"},
    qosiftaildropthresholdset{YType::int32, "qosIfTailDropThresholdSet"},
    qosiftaildropthresholdsetvalue{YType::int32, "qosIfTailDropThresholdSetValue"}
{
    yang_name = "qosIfTailDropEntry"; yang_parent_name = "qosIfTailDropTable";
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::~Qosiftaildropentry()
{
}

bool CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::has_data() const
{
    return qosiftaildropid.is_set
	|| qosiftaildropnumthresholdsets.is_set
	|| qosiftaildroproles.is_set
	|| qosiftaildropthresholdset.is_set
	|| qosiftaildropthresholdsetvalue.is_set;
}

bool CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosiftaildropid.operation)
	|| is_set(qosiftaildropnumthresholdsets.operation)
	|| is_set(qosiftaildroproles.operation)
	|| is_set(qosiftaildropthresholdset.operation)
	|| is_set(qosiftaildropthresholdsetvalue.operation);
}

std::string CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropEntry" <<"[qosIfTailDropId='" <<qosiftaildropid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfTailDropTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosiftaildropid.is_set || is_set(qosiftaildropid.operation)) leaf_name_data.push_back(qosiftaildropid.get_name_leafdata());
    if (qosiftaildropnumthresholdsets.is_set || is_set(qosiftaildropnumthresholdsets.operation)) leaf_name_data.push_back(qosiftaildropnumthresholdsets.get_name_leafdata());
    if (qosiftaildroproles.is_set || is_set(qosiftaildroproles.operation)) leaf_name_data.push_back(qosiftaildroproles.get_name_leafdata());
    if (qosiftaildropthresholdset.is_set || is_set(qosiftaildropthresholdset.operation)) leaf_name_data.push_back(qosiftaildropthresholdset.get_name_leafdata());
    if (qosiftaildropthresholdsetvalue.is_set || is_set(qosiftaildropthresholdsetvalue.operation)) leaf_name_data.push_back(qosiftaildropthresholdsetvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfTailDropId")
    {
        qosiftaildropid = value;
    }
    if(value_path == "qosIfTailDropNumThresholdSets")
    {
        qosiftaildropnumthresholdsets = value;
    }
    if(value_path == "qosIfTailDropRoles")
    {
        qosiftaildroproles = value;
    }
    if(value_path == "qosIfTailDropThresholdSet")
    {
        qosiftaildropthresholdset = value;
    }
    if(value_path == "qosIfTailDropThresholdSetValue")
    {
        qosiftaildropthresholdsetvalue = value;
    }
}

CiscoQosPibMib::Qosifweightstable::Qosifweightstable()
{
    yang_name = "qosIfWeightsTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifweightstable::~Qosifweightstable()
{
}

bool CiscoQosPibMib::Qosifweightstable::has_data() const
{
    for (std::size_t index=0; index<qosifweightsentry_.size(); index++)
    {
        if(qosifweightsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifweightstable::has_operation() const
{
    for (std::size_t index=0; index<qosifweightsentry_.size(); index++)
    {
        if(qosifweightsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoQosPibMib::Qosifweightstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifweightstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifweightstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfWeightsEntry")
    {
        for(auto const & c : qosifweightsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifweightstable::Qosifweightsentry>();
        c->parent = this;
        qosifweightsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifweightstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifweightsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifweightstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::Qosifweightsentry()
    :
    qosifweightsid{YType::uint32, "qosIfWeightsId"},
    qosifweightsdrainsize{YType::uint32, "qosIfWeightsDrainSize"},
    qosifweightsnumqueues{YType::enumeration, "qosIfWeightsNumQueues"},
    qosifweightsqueue{YType::int32, "qosIfWeightsQueue"},
    qosifweightsqueuesize{YType::uint32, "qosIfWeightsQueueSize"},
    qosifweightsroles{YType::str, "qosIfWeightsRoles"}
{
    yang_name = "qosIfWeightsEntry"; yang_parent_name = "qosIfWeightsTable";
}

CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::~Qosifweightsentry()
{
}

bool CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::has_data() const
{
    return qosifweightsid.is_set
	|| qosifweightsdrainsize.is_set
	|| qosifweightsnumqueues.is_set
	|| qosifweightsqueue.is_set
	|| qosifweightsqueuesize.is_set
	|| qosifweightsroles.is_set;
}

bool CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(qosifweightsid.operation)
	|| is_set(qosifweightsdrainsize.operation)
	|| is_set(qosifweightsnumqueues.operation)
	|| is_set(qosifweightsqueue.operation)
	|| is_set(qosifweightsqueuesize.operation)
	|| is_set(qosifweightsroles.operation);
}

std::string CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsEntry" <<"[qosIfWeightsId='" <<qosifweightsid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfWeightsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifweightsid.is_set || is_set(qosifweightsid.operation)) leaf_name_data.push_back(qosifweightsid.get_name_leafdata());
    if (qosifweightsdrainsize.is_set || is_set(qosifweightsdrainsize.operation)) leaf_name_data.push_back(qosifweightsdrainsize.get_name_leafdata());
    if (qosifweightsnumqueues.is_set || is_set(qosifweightsnumqueues.operation)) leaf_name_data.push_back(qosifweightsnumqueues.get_name_leafdata());
    if (qosifweightsqueue.is_set || is_set(qosifweightsqueue.operation)) leaf_name_data.push_back(qosifweightsqueue.get_name_leafdata());
    if (qosifweightsqueuesize.is_set || is_set(qosifweightsqueuesize.operation)) leaf_name_data.push_back(qosifweightsqueuesize.get_name_leafdata());
    if (qosifweightsroles.is_set || is_set(qosifweightsroles.operation)) leaf_name_data.push_back(qosifweightsroles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qosIfWeightsId")
    {
        qosifweightsid = value;
    }
    if(value_path == "qosIfWeightsDrainSize")
    {
        qosifweightsdrainsize = value;
    }
    if(value_path == "qosIfWeightsNumQueues")
    {
        qosifweightsnumqueues = value;
    }
    if(value_path == "qosIfWeightsQueue")
    {
        qosifweightsqueue = value;
    }
    if(value_path == "qosIfWeightsQueueSize")
    {
        qosifweightsqueuesize = value;
    }
    if(value_path == "qosIfWeightsRoles")
    {
        qosifweightsroles = value;
    }
}

const Enum::YLeaf QueuerangeEnum::oneQ {1, "oneQ"};
const Enum::YLeaf QueuerangeEnum::twoQ {2, "twoQ"};
const Enum::YLeaf QueuerangeEnum::threeQ {3, "threeQ"};
const Enum::YLeaf QueuerangeEnum::fourQ {4, "fourQ"};
const Enum::YLeaf QueuerangeEnum::eightQ {8, "eightQ"};
const Enum::YLeaf QueuerangeEnum::sixteenQ {16, "sixteenQ"};
const Enum::YLeaf QueuerangeEnum::thirtyTwoQ {32, "thirtyTwoQ"};
const Enum::YLeaf QueuerangeEnum::sixtyFourQ {64, "sixtyFourQ"};

const Enum::YLeaf QosinterfacequeuetypeEnum::oneQ1t {1, "oneQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneQ2t {2, "oneQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneQ4t {3, "oneQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneQ8t {4, "oneQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::twoQ1t {5, "twoQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::twoQ2t {6, "twoQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::twoQ4t {7, "twoQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::twoQ8t {8, "twoQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::threeQ1t {9, "threeQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::threeQ2t {10, "threeQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::threeQ4t {11, "threeQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::threeQ8t {12, "threeQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::fourQ1t {13, "fourQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::fourQ2t {14, "fourQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::fourQ4t {15, "fourQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::fourQ8t {16, "fourQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::eightQ1t {17, "eightQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::eightQ2t {18, "eightQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::eightQ4t {19, "eightQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::eightQ8t {20, "eightQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixteenQ1t {21, "sixteenQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixteenQ2t {22, "sixteenQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixteenQ4t {23, "sixteenQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixtyfourQ1t {24, "sixtyfourQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixtyfourQ2t {25, "sixtyfourQ2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixtyfourQ4t {26, "sixtyfourQ4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP1Q0t {27, "oneP1Q0t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP1Q4t {28, "oneP1Q4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP1Q8t {29, "oneP1Q8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP2Q1t {30, "oneP2Q1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP2Q2t {31, "oneP2Q2t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP3Q1t {32, "oneP3Q1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP7Q8t {33, "oneP7Q8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP3Q8t {34, "oneP3Q8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::sixteenQ8t {35, "sixteenQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP15Q8t {36, "oneP15Q8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP15Q1t {37, "oneP15Q1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP7Q1t {38, "oneP7Q1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP31Q1t {39, "oneP31Q1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::thirtytwoQ1t {40, "thirtytwoQ1t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::thirtytwoQ8t {41, "thirtytwoQ8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP31Q8t {42, "oneP31Q8t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP7Q4t {43, "oneP7Q4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP3Q4t {44, "oneP3Q4t"};
const Enum::YLeaf QosinterfacequeuetypeEnum::oneP7Q2t {45, "oneP7Q2t"};

const Enum::YLeaf ThresholdsetrangeEnum::zeroT {0, "zeroT"};
const Enum::YLeaf ThresholdsetrangeEnum::oneT {1, "oneT"};
const Enum::YLeaf ThresholdsetrangeEnum::twoT {2, "twoT"};
const Enum::YLeaf ThresholdsetrangeEnum::fourT {4, "fourT"};
const Enum::YLeaf ThresholdsetrangeEnum::eightT {8, "eightT"};

const Enum::YLeaf CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::QosunmatchedpolicydirectionEnum::in {0, "in"};
const Enum::YLeaf CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::QosunmatchedpolicydirectionEnum::out {1, "out"};

const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::QospoliceractionEnum::drop {0, "drop"};
const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::QospoliceractionEnum::mark {1, "mark"};
const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::QospoliceractionEnum::shape {2, "shape"};

const Enum::YLeaf CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::QosipaclinterfacedirectionEnum::in {0, "in"};
const Enum::YLeaf CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::QosipaclinterfacedirectionEnum::out {1, "out"};

const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::weightedFairQueueing {1, "weightedFairQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::weightedRoundRobin {2, "weightedRoundRobin"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::customQueueing {3, "customQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::priorityQueueing {4, "priorityQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::classBasedWFQ {5, "classBasedWFQ"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::fifo {6, "fifo"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::pqWrr {7, "pqWrr"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::QosifschedulingdisciplineEnum::pqCbwfq {8, "pqCbwfq"};

const Enum::YLeaf CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::QosifdropdisciplineEnum::qosIfDropWRED {1, "qosIfDropWRED"};
const Enum::YLeaf CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::QosifdropdisciplineEnum::qosIfDropTailDrop {2, "qosIfDropTailDrop"};


}
}

