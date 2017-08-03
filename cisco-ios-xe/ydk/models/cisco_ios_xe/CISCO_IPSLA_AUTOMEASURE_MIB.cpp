
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_AUTOMEASURE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

CiscoIpslaAutomeasureMib::CiscoIpslaAutomeasureMib()
    :
    cipslaautogroupdesttable(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable>())
	,cipslaautogroupschedtable(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable>())
	,cipslaautogrouptable(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable>())
	,cipslareacttable(std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable>())
{
    cipslaautogroupdesttable->parent = this;

    cipslaautogroupschedtable->parent = this;

    cipslaautogrouptable->parent = this;

    cipslareacttable->parent = this;

    yang_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::~CiscoIpslaAutomeasureMib()
{
}

bool CiscoIpslaAutomeasureMib::has_data() const
{
    return (cipslaautogroupdesttable !=  nullptr && cipslaautogroupdesttable->has_data())
	|| (cipslaautogroupschedtable !=  nullptr && cipslaautogroupschedtable->has_data())
	|| (cipslaautogrouptable !=  nullptr && cipslaautogrouptable->has_data())
	|| (cipslareacttable !=  nullptr && cipslareacttable->has_data());
}

bool CiscoIpslaAutomeasureMib::has_operation() const
{
    return is_set(yfilter)
	|| (cipslaautogroupdesttable !=  nullptr && cipslaautogroupdesttable->has_operation())
	|| (cipslaautogroupschedtable !=  nullptr && cipslaautogroupschedtable->has_operation())
	|| (cipslaautogrouptable !=  nullptr && cipslaautogrouptable->has_operation())
	|| (cipslareacttable !=  nullptr && cipslareacttable->has_operation());
}

std::string CiscoIpslaAutomeasureMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupDestTable")
    {
        if(cipslaautogroupdesttable == nullptr)
        {
            cipslaautogroupdesttable = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable>();
        }
        return cipslaautogroupdesttable;
    }

    if(child_yang_name == "cipslaAutoGroupSchedTable")
    {
        if(cipslaautogroupschedtable == nullptr)
        {
            cipslaautogroupschedtable = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable>();
        }
        return cipslaautogroupschedtable;
    }

    if(child_yang_name == "cipslaAutoGroupTable")
    {
        if(cipslaautogrouptable == nullptr)
        {
            cipslaautogrouptable = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable>();
        }
        return cipslaautogrouptable;
    }

    if(child_yang_name == "cipslaReactTable")
    {
        if(cipslareacttable == nullptr)
        {
            cipslareacttable = std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable>();
        }
        return cipslareacttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaautogroupdesttable != nullptr)
    {
        children["cipslaAutoGroupDestTable"] = cipslaautogroupdesttable;
    }

    if(cipslaautogroupschedtable != nullptr)
    {
        children["cipslaAutoGroupSchedTable"] = cipslaautogroupschedtable;
    }

    if(cipslaautogrouptable != nullptr)
    {
        children["cipslaAutoGroupTable"] = cipslaautogrouptable;
    }

    if(cipslareacttable != nullptr)
    {
        children["cipslaReactTable"] = cipslareacttable;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaAutomeasureMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::clone_ptr() const
{
    return std::make_shared<CiscoIpslaAutomeasureMib>();
}

std::string CiscoIpslaAutomeasureMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpslaAutomeasureMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpslaAutomeasureMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpslaAutomeasureMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpslaAutomeasureMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupDestTable" || name == "cipslaAutoGroupSchedTable" || name == "cipslaAutoGroupTable" || name == "cipslaReactTable")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogrouptable()
{
    yang_name = "cipslaAutoGroupTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::~Cipslaautogrouptable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupentry.size(); index++)
    {
        if(cipslaautogroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupentry.size(); index++)
    {
        if(cipslaautogroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupEntry")
    {
        for(auto const & c : cipslaautogroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry>();
        c->parent = this;
        cipslaautogroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupEntry")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::Cipslaautogroupentry()
    :
    cipslaautogroupname{YType::str, "cipslaAutoGroupName"},
    cipslaautogroupaddestipageout{YType::uint32, "cipslaAutoGroupADDestIPAgeout"},
    cipslaautogroupaddestport{YType::uint16, "cipslaAutoGroupADDestPort"},
    cipslaautogroupadmeasureretry{YType::uint32, "cipslaAutoGroupADMeasureRetry"},
    cipslaautogroupdescription{YType::str, "cipslaAutoGroupDescription"},
    cipslaautogroupdestinationname{YType::str, "cipslaAutoGroupDestinationName"},
    cipslaautogroupdestipadenable{YType::boolean, "cipslaAutoGroupDestIPADEnable"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslaautogroupqosenable{YType::boolean, "cipslaAutoGroupQoSEnable"},
    cipslaautogrouprowstatus{YType::enumeration, "cipslaAutoGroupRowStatus"},
    cipslaautogroupschedulerid{YType::str, "cipslaAutoGroupSchedulerId"},
    cipslaautogroupstoragetype{YType::enumeration, "cipslaAutoGroupStorageType"}
{
    yang_name = "cipslaAutoGroupEntry"; yang_parent_name = "cipslaAutoGroupTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::~Cipslaautogroupentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::has_data() const
{
    return cipslaautogroupname.is_set
	|| cipslaautogroupaddestipageout.is_set
	|| cipslaautogroupaddestport.is_set
	|| cipslaautogroupadmeasureretry.is_set
	|| cipslaautogroupdescription.is_set
	|| cipslaautogroupdestinationname.is_set
	|| cipslaautogroupdestipadenable.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslaautogroupopertype.is_set
	|| cipslaautogroupqosenable.is_set
	|| cipslaautogrouprowstatus.is_set
	|| cipslaautogroupschedulerid.is_set
	|| cipslaautogroupstoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupname.yfilter)
	|| ydk::is_set(cipslaautogroupaddestipageout.yfilter)
	|| ydk::is_set(cipslaautogroupaddestport.yfilter)
	|| ydk::is_set(cipslaautogroupadmeasureretry.yfilter)
	|| ydk::is_set(cipslaautogroupdescription.yfilter)
	|| ydk::is_set(cipslaautogroupdestinationname.yfilter)
	|| ydk::is_set(cipslaautogroupdestipadenable.yfilter)
	|| ydk::is_set(cipslaautogroupopertemplatename.yfilter)
	|| ydk::is_set(cipslaautogroupopertype.yfilter)
	|| ydk::is_set(cipslaautogroupqosenable.yfilter)
	|| ydk::is_set(cipslaautogrouprowstatus.yfilter)
	|| ydk::is_set(cipslaautogroupschedulerid.yfilter)
	|| ydk::is_set(cipslaautogroupstoragetype.yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupEntry" <<"[cipslaAutoGroupName='" <<cipslaautogroupname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupname.is_set || is_set(cipslaautogroupname.yfilter)) leaf_name_data.push_back(cipslaautogroupname.get_name_leafdata());
    if (cipslaautogroupaddestipageout.is_set || is_set(cipslaautogroupaddestipageout.yfilter)) leaf_name_data.push_back(cipslaautogroupaddestipageout.get_name_leafdata());
    if (cipslaautogroupaddestport.is_set || is_set(cipslaautogroupaddestport.yfilter)) leaf_name_data.push_back(cipslaautogroupaddestport.get_name_leafdata());
    if (cipslaautogroupadmeasureretry.is_set || is_set(cipslaautogroupadmeasureretry.yfilter)) leaf_name_data.push_back(cipslaautogroupadmeasureretry.get_name_leafdata());
    if (cipslaautogroupdescription.is_set || is_set(cipslaautogroupdescription.yfilter)) leaf_name_data.push_back(cipslaautogroupdescription.get_name_leafdata());
    if (cipslaautogroupdestinationname.is_set || is_set(cipslaautogroupdestinationname.yfilter)) leaf_name_data.push_back(cipslaautogroupdestinationname.get_name_leafdata());
    if (cipslaautogroupdestipadenable.is_set || is_set(cipslaautogroupdestipadenable.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipadenable.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.yfilter)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.yfilter)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslaautogroupqosenable.is_set || is_set(cipslaautogroupqosenable.yfilter)) leaf_name_data.push_back(cipslaautogroupqosenable.get_name_leafdata());
    if (cipslaautogrouprowstatus.is_set || is_set(cipslaautogrouprowstatus.yfilter)) leaf_name_data.push_back(cipslaautogrouprowstatus.get_name_leafdata());
    if (cipslaautogroupschedulerid.is_set || is_set(cipslaautogroupschedulerid.yfilter)) leaf_name_data.push_back(cipslaautogroupschedulerid.get_name_leafdata());
    if (cipslaautogroupstoragetype.is_set || is_set(cipslaautogroupstoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupName")
    {
        cipslaautogroupname = value;
        cipslaautogroupname.value_namespace = name_space;
        cipslaautogroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupADDestIPAgeout")
    {
        cipslaautogroupaddestipageout = value;
        cipslaautogroupaddestipageout.value_namespace = name_space;
        cipslaautogroupaddestipageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupADDestPort")
    {
        cipslaautogroupaddestport = value;
        cipslaautogroupaddestport.value_namespace = name_space;
        cipslaautogroupaddestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupADMeasureRetry")
    {
        cipslaautogroupadmeasureretry = value;
        cipslaautogroupadmeasureretry.value_namespace = name_space;
        cipslaautogroupadmeasureretry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDescription")
    {
        cipslaautogroupdescription = value;
        cipslaautogroupdescription.value_namespace = name_space;
        cipslaautogroupdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestinationName")
    {
        cipslaautogroupdestinationname = value;
        cipslaautogroupdestinationname.value_namespace = name_space;
        cipslaautogroupdestinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestIPADEnable")
    {
        cipslaautogroupdestipadenable = value;
        cipslaautogroupdestipadenable.value_namespace = name_space;
        cipslaautogroupdestipadenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename = value;
        cipslaautogroupopertemplatename.value_namespace = name_space;
        cipslaautogroupopertemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype = value;
        cipslaautogroupopertype.value_namespace = name_space;
        cipslaautogroupopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupQoSEnable")
    {
        cipslaautogroupqosenable = value;
        cipslaautogroupqosenable.value_namespace = name_space;
        cipslaautogroupqosenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupRowStatus")
    {
        cipslaautogrouprowstatus = value;
        cipslaautogrouprowstatus.value_namespace = name_space;
        cipslaautogrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedulerId")
    {
        cipslaautogroupschedulerid = value;
        cipslaautogroupschedulerid.value_namespace = name_space;
        cipslaautogroupschedulerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupStorageType")
    {
        cipslaautogroupstoragetype = value;
        cipslaautogroupstoragetype.value_namespace = name_space;
        cipslaautogroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupName")
    {
        cipslaautogroupname.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADDestIPAgeout")
    {
        cipslaautogroupaddestipageout.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADDestPort")
    {
        cipslaautogroupaddestport.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADMeasureRetry")
    {
        cipslaautogroupadmeasureretry.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDescription")
    {
        cipslaautogroupdescription.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestinationName")
    {
        cipslaautogroupdestinationname.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestIPADEnable")
    {
        cipslaautogroupdestipadenable.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupQoSEnable")
    {
        cipslaautogroupqosenable.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupRowStatus")
    {
        cipslaautogrouprowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedulerId")
    {
        cipslaautogroupschedulerid.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupStorageType")
    {
        cipslaautogroupstoragetype.yfilter = yfilter;
    }
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupName" || name == "cipslaAutoGroupADDestIPAgeout" || name == "cipslaAutoGroupADDestPort" || name == "cipslaAutoGroupADMeasureRetry" || name == "cipslaAutoGroupDescription" || name == "cipslaAutoGroupDestinationName" || name == "cipslaAutoGroupDestIPADEnable" || name == "cipslaAutoGroupOperTemplateName" || name == "cipslaAutoGroupOperType" || name == "cipslaAutoGroupQoSEnable" || name == "cipslaAutoGroupRowStatus" || name == "cipslaAutoGroupSchedulerId" || name == "cipslaAutoGroupStorageType")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdesttable()
{
    yang_name = "cipslaAutoGroupDestTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::~Cipslaautogroupdesttable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry.size(); index++)
    {
        if(cipslaautogroupdestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry.size(); index++)
    {
        if(cipslaautogroupdestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupDestEntry")
    {
        for(auto const & c : cipslaautogroupdestentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry>();
        c->parent = this;
        cipslaautogroupdestentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupdestentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupDestEntry")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::Cipslaautogroupdestentry()
    :
    cipslaautogroupdestname{YType::str, "cipslaAutoGroupDestName"},
    cipslaautogroupdestipaddrtype{YType::enumeration, "cipslaAutoGroupDestIpAddrType"},
    cipslaautogroupdestipaddr{YType::str, "cipslaAutoGroupDestIpAddr"},
    cipslaautogroupdestport{YType::uint16, "cipslaAutoGroupDestPort"},
    cipslaautogroupdestrowstatus{YType::enumeration, "cipslaAutoGroupDestRowStatus"},
    cipslaautogroupdeststoragetype{YType::enumeration, "cipslaAutoGroupDestStorageType"}
{
    yang_name = "cipslaAutoGroupDestEntry"; yang_parent_name = "cipslaAutoGroupDestTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::~Cipslaautogroupdestentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_data() const
{
    return cipslaautogroupdestname.is_set
	|| cipslaautogroupdestipaddrtype.is_set
	|| cipslaautogroupdestipaddr.is_set
	|| cipslaautogroupdestport.is_set
	|| cipslaautogroupdestrowstatus.is_set
	|| cipslaautogroupdeststoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupdestname.yfilter)
	|| ydk::is_set(cipslaautogroupdestipaddrtype.yfilter)
	|| ydk::is_set(cipslaautogroupdestipaddr.yfilter)
	|| ydk::is_set(cipslaautogroupdestport.yfilter)
	|| ydk::is_set(cipslaautogroupdestrowstatus.yfilter)
	|| ydk::is_set(cipslaautogroupdeststoragetype.yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestEntry" <<"[cipslaAutoGroupDestName='" <<cipslaautogroupdestname <<"']" <<"[cipslaAutoGroupDestIpAddrType='" <<cipslaautogroupdestipaddrtype <<"']" <<"[cipslaAutoGroupDestIpAddr='" <<cipslaautogroupdestipaddr <<"']" <<"[cipslaAutoGroupDestPort='" <<cipslaautogroupdestport <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupDestTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupdestname.is_set || is_set(cipslaautogroupdestname.yfilter)) leaf_name_data.push_back(cipslaautogroupdestname.get_name_leafdata());
    if (cipslaautogroupdestipaddrtype.is_set || is_set(cipslaautogroupdestipaddrtype.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipaddrtype.get_name_leafdata());
    if (cipslaautogroupdestipaddr.is_set || is_set(cipslaautogroupdestipaddr.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipaddr.get_name_leafdata());
    if (cipslaautogroupdestport.is_set || is_set(cipslaautogroupdestport.yfilter)) leaf_name_data.push_back(cipslaautogroupdestport.get_name_leafdata());
    if (cipslaautogroupdestrowstatus.is_set || is_set(cipslaautogroupdestrowstatus.yfilter)) leaf_name_data.push_back(cipslaautogroupdestrowstatus.get_name_leafdata());
    if (cipslaautogroupdeststoragetype.is_set || is_set(cipslaautogroupdeststoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupdeststoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupDestName")
    {
        cipslaautogroupdestname = value;
        cipslaautogroupdestname.value_namespace = name_space;
        cipslaautogroupdestname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestIpAddrType")
    {
        cipslaautogroupdestipaddrtype = value;
        cipslaautogroupdestipaddrtype.value_namespace = name_space;
        cipslaautogroupdestipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestIpAddr")
    {
        cipslaautogroupdestipaddr = value;
        cipslaautogroupdestipaddr.value_namespace = name_space;
        cipslaautogroupdestipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestPort")
    {
        cipslaautogroupdestport = value;
        cipslaautogroupdestport.value_namespace = name_space;
        cipslaautogroupdestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestRowStatus")
    {
        cipslaautogroupdestrowstatus = value;
        cipslaautogroupdestrowstatus.value_namespace = name_space;
        cipslaautogroupdestrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestStorageType")
    {
        cipslaautogroupdeststoragetype = value;
        cipslaautogroupdeststoragetype.value_namespace = name_space;
        cipslaautogroupdeststoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupDestName")
    {
        cipslaautogroupdestname.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestIpAddrType")
    {
        cipslaautogroupdestipaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestIpAddr")
    {
        cipslaautogroupdestipaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestPort")
    {
        cipslaautogroupdestport.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestRowStatus")
    {
        cipslaautogroupdestrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestStorageType")
    {
        cipslaautogroupdeststoragetype.yfilter = yfilter;
    }
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupDestName" || name == "cipslaAutoGroupDestIpAddrType" || name == "cipslaAutoGroupDestIpAddr" || name == "cipslaAutoGroupDestPort" || name == "cipslaAutoGroupDestRowStatus" || name == "cipslaAutoGroupDestStorageType")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareacttable()
{
    yang_name = "cipslaReactTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslareacttable::~Cipslareacttable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::has_data() const
{
    for (std::size_t index=0; index<cipslareactentry.size(); index++)
    {
        if(cipslareactentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::has_operation() const
{
    for (std::size_t index=0; index<cipslareactentry.size(); index++)
    {
        if(cipslareactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslareacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslareacttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslareacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaReactEntry")
    {
        for(auto const & c : cipslareactentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry>();
        c->parent = this;
        cipslareactentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslareacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslareactentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaReactEntry")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactentry()
    :
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslareactconfigindex{YType::uint32, "cipslaReactConfigIndex"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslareactactiontype{YType::enumeration, "cipslaReactActionType"},
    cipslareactrowstatus{YType::enumeration, "cipslaReactRowStatus"},
    cipslareactstoragetype{YType::enumeration, "cipslaReactStorageType"},
    cipslareactthresholdcountx{YType::uint32, "cipslaReactThresholdCountX"},
    cipslareactthresholdcounty{YType::uint32, "cipslaReactThresholdCountY"},
    cipslareactthresholdfalling{YType::uint32, "cipslaReactThresholdFalling"},
    cipslareactthresholdrising{YType::uint32, "cipslaReactThresholdRising"},
    cipslareactthresholdtype{YType::enumeration, "cipslaReactThresholdType"},
    cipslareactvar{YType::enumeration, "cipslaReactVar"}
{
    yang_name = "cipslaReactEntry"; yang_parent_name = "cipslaReactTable";
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::~Cipslareactentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::has_data() const
{
    return cipslaautogroupopertype.is_set
	|| cipslareactconfigindex.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslareactactiontype.is_set
	|| cipslareactrowstatus.is_set
	|| cipslareactstoragetype.is_set
	|| cipslareactthresholdcountx.is_set
	|| cipslareactthresholdcounty.is_set
	|| cipslareactthresholdfalling.is_set
	|| cipslareactthresholdrising.is_set
	|| cipslareactthresholdtype.is_set
	|| cipslareactvar.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupopertype.yfilter)
	|| ydk::is_set(cipslareactconfigindex.yfilter)
	|| ydk::is_set(cipslaautogroupopertemplatename.yfilter)
	|| ydk::is_set(cipslareactactiontype.yfilter)
	|| ydk::is_set(cipslareactrowstatus.yfilter)
	|| ydk::is_set(cipslareactstoragetype.yfilter)
	|| ydk::is_set(cipslareactthresholdcountx.yfilter)
	|| ydk::is_set(cipslareactthresholdcounty.yfilter)
	|| ydk::is_set(cipslareactthresholdfalling.yfilter)
	|| ydk::is_set(cipslareactthresholdrising.yfilter)
	|| ydk::is_set(cipslareactthresholdtype.yfilter)
	|| ydk::is_set(cipslareactvar.yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactEntry" <<"[cipslaAutoGroupOperType='" <<cipslaautogroupopertype <<"']" <<"[cipslaReactConfigIndex='" <<cipslareactconfigindex <<"']" <<"[cipslaAutoGroupOperTemplateName='" <<cipslaautogroupopertemplatename <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaReactTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.yfilter)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslareactconfigindex.is_set || is_set(cipslareactconfigindex.yfilter)) leaf_name_data.push_back(cipslareactconfigindex.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.yfilter)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslareactactiontype.is_set || is_set(cipslareactactiontype.yfilter)) leaf_name_data.push_back(cipslareactactiontype.get_name_leafdata());
    if (cipslareactrowstatus.is_set || is_set(cipslareactrowstatus.yfilter)) leaf_name_data.push_back(cipslareactrowstatus.get_name_leafdata());
    if (cipslareactstoragetype.is_set || is_set(cipslareactstoragetype.yfilter)) leaf_name_data.push_back(cipslareactstoragetype.get_name_leafdata());
    if (cipslareactthresholdcountx.is_set || is_set(cipslareactthresholdcountx.yfilter)) leaf_name_data.push_back(cipslareactthresholdcountx.get_name_leafdata());
    if (cipslareactthresholdcounty.is_set || is_set(cipslareactthresholdcounty.yfilter)) leaf_name_data.push_back(cipslareactthresholdcounty.get_name_leafdata());
    if (cipslareactthresholdfalling.is_set || is_set(cipslareactthresholdfalling.yfilter)) leaf_name_data.push_back(cipslareactthresholdfalling.get_name_leafdata());
    if (cipslareactthresholdrising.is_set || is_set(cipslareactthresholdrising.yfilter)) leaf_name_data.push_back(cipslareactthresholdrising.get_name_leafdata());
    if (cipslareactthresholdtype.is_set || is_set(cipslareactthresholdtype.yfilter)) leaf_name_data.push_back(cipslareactthresholdtype.get_name_leafdata());
    if (cipslareactvar.is_set || is_set(cipslareactvar.yfilter)) leaf_name_data.push_back(cipslareactvar.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype = value;
        cipslaautogroupopertype.value_namespace = name_space;
        cipslaautogroupopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactConfigIndex")
    {
        cipslareactconfigindex = value;
        cipslareactconfigindex.value_namespace = name_space;
        cipslareactconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename = value;
        cipslaautogroupopertemplatename.value_namespace = name_space;
        cipslaautogroupopertemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactActionType")
    {
        cipslareactactiontype = value;
        cipslareactactiontype.value_namespace = name_space;
        cipslareactactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactRowStatus")
    {
        cipslareactrowstatus = value;
        cipslareactrowstatus.value_namespace = name_space;
        cipslareactrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactStorageType")
    {
        cipslareactstoragetype = value;
        cipslareactstoragetype.value_namespace = name_space;
        cipslareactstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdCountX")
    {
        cipslareactthresholdcountx = value;
        cipslareactthresholdcountx.value_namespace = name_space;
        cipslareactthresholdcountx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdCountY")
    {
        cipslareactthresholdcounty = value;
        cipslareactthresholdcounty.value_namespace = name_space;
        cipslareactthresholdcounty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdFalling")
    {
        cipslareactthresholdfalling = value;
        cipslareactthresholdfalling.value_namespace = name_space;
        cipslareactthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdRising")
    {
        cipslareactthresholdrising = value;
        cipslareactthresholdrising.value_namespace = name_space;
        cipslareactthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdType")
    {
        cipslareactthresholdtype = value;
        cipslareactthresholdtype.value_namespace = name_space;
        cipslareactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactVar")
    {
        cipslareactvar = value;
        cipslareactvar.value_namespace = name_space;
        cipslareactvar.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactConfigIndex")
    {
        cipslareactconfigindex.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename.yfilter = yfilter;
    }
    if(value_path == "cipslaReactActionType")
    {
        cipslareactactiontype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactRowStatus")
    {
        cipslareactrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaReactStorageType")
    {
        cipslareactstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdCountX")
    {
        cipslareactthresholdcountx.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdCountY")
    {
        cipslareactthresholdcounty.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdFalling")
    {
        cipslareactthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdRising")
    {
        cipslareactthresholdrising.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdType")
    {
        cipslareactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactVar")
    {
        cipslareactvar.yfilter = yfilter;
    }
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupOperType" || name == "cipslaReactConfigIndex" || name == "cipslaAutoGroupOperTemplateName" || name == "cipslaReactActionType" || name == "cipslaReactRowStatus" || name == "cipslaReactStorageType" || name == "cipslaReactThresholdCountX" || name == "cipslaReactThresholdCountY" || name == "cipslaReactThresholdFalling" || name == "cipslaReactThresholdRising" || name == "cipslaReactThresholdType" || name == "cipslaReactVar")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedtable()
{
    yang_name = "cipslaAutoGroupSchedTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::~Cipslaautogroupschedtable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry.size(); index++)
    {
        if(cipslaautogroupschedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry.size(); index++)
    {
        if(cipslaautogroupschedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupSchedEntry")
    {
        for(auto const & c : cipslaautogroupschedentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry>();
        c->parent = this;
        cipslaautogroupschedentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupschedentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupSchedEntry")
        return true;
    return false;
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::Cipslaautogroupschedentry()
    :
    cipslaautogroupschedid{YType::str, "cipslaAutoGroupSchedId"},
    cipslaautogroupschedageout{YType::uint32, "cipslaAutoGroupSchedAgeout"},
    cipslaautogroupschedinterval{YType::uint32, "cipslaAutoGroupSchedInterval"},
    cipslaautogroupschedlife{YType::uint32, "cipslaAutoGroupSchedLife"},
    cipslaautogroupschedmaxinterval{YType::uint32, "cipslaAutoGroupSchedMaxInterval"},
    cipslaautogroupschedmininterval{YType::uint32, "cipslaAutoGroupSchedMinInterval"},
    cipslaautogroupschedperiod{YType::uint32, "cipslaAutoGroupSchedPeriod"},
    cipslaautogroupschedrowstatus{YType::enumeration, "cipslaAutoGroupSchedRowStatus"},
    cipslaautogroupschedstarttime{YType::uint32, "cipslaAutoGroupSchedStartTime"},
    cipslaautogroupschedstoragetype{YType::enumeration, "cipslaAutoGroupSchedStorageType"}
{
    yang_name = "cipslaAutoGroupSchedEntry"; yang_parent_name = "cipslaAutoGroupSchedTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::~Cipslaautogroupschedentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_data() const
{
    return cipslaautogroupschedid.is_set
	|| cipslaautogroupschedageout.is_set
	|| cipslaautogroupschedinterval.is_set
	|| cipslaautogroupschedlife.is_set
	|| cipslaautogroupschedmaxinterval.is_set
	|| cipslaautogroupschedmininterval.is_set
	|| cipslaautogroupschedperiod.is_set
	|| cipslaautogroupschedrowstatus.is_set
	|| cipslaautogroupschedstarttime.is_set
	|| cipslaautogroupschedstoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupschedid.yfilter)
	|| ydk::is_set(cipslaautogroupschedageout.yfilter)
	|| ydk::is_set(cipslaautogroupschedinterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedlife.yfilter)
	|| ydk::is_set(cipslaautogroupschedmaxinterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedmininterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedperiod.yfilter)
	|| ydk::is_set(cipslaautogroupschedrowstatus.yfilter)
	|| ydk::is_set(cipslaautogroupschedstarttime.yfilter)
	|| ydk::is_set(cipslaautogroupschedstoragetype.yfilter);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedEntry" <<"[cipslaAutoGroupSchedId='" <<cipslaautogroupschedid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupSchedTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupschedid.is_set || is_set(cipslaautogroupschedid.yfilter)) leaf_name_data.push_back(cipslaautogroupschedid.get_name_leafdata());
    if (cipslaautogroupschedageout.is_set || is_set(cipslaautogroupschedageout.yfilter)) leaf_name_data.push_back(cipslaautogroupschedageout.get_name_leafdata());
    if (cipslaautogroupschedinterval.is_set || is_set(cipslaautogroupschedinterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedinterval.get_name_leafdata());
    if (cipslaautogroupschedlife.is_set || is_set(cipslaautogroupschedlife.yfilter)) leaf_name_data.push_back(cipslaautogroupschedlife.get_name_leafdata());
    if (cipslaautogroupschedmaxinterval.is_set || is_set(cipslaautogroupschedmaxinterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedmaxinterval.get_name_leafdata());
    if (cipslaautogroupschedmininterval.is_set || is_set(cipslaautogroupschedmininterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedmininterval.get_name_leafdata());
    if (cipslaautogroupschedperiod.is_set || is_set(cipslaautogroupschedperiod.yfilter)) leaf_name_data.push_back(cipslaautogroupschedperiod.get_name_leafdata());
    if (cipslaautogroupschedrowstatus.is_set || is_set(cipslaautogroupschedrowstatus.yfilter)) leaf_name_data.push_back(cipslaautogroupschedrowstatus.get_name_leafdata());
    if (cipslaautogroupschedstarttime.is_set || is_set(cipslaautogroupschedstarttime.yfilter)) leaf_name_data.push_back(cipslaautogroupschedstarttime.get_name_leafdata());
    if (cipslaautogroupschedstoragetype.is_set || is_set(cipslaautogroupschedstoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupschedstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupSchedId")
    {
        cipslaautogroupschedid = value;
        cipslaautogroupschedid.value_namespace = name_space;
        cipslaautogroupschedid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedAgeout")
    {
        cipslaautogroupschedageout = value;
        cipslaautogroupschedageout.value_namespace = name_space;
        cipslaautogroupschedageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedInterval")
    {
        cipslaautogroupschedinterval = value;
        cipslaautogroupschedinterval.value_namespace = name_space;
        cipslaautogroupschedinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedLife")
    {
        cipslaautogroupschedlife = value;
        cipslaautogroupschedlife.value_namespace = name_space;
        cipslaautogroupschedlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedMaxInterval")
    {
        cipslaautogroupschedmaxinterval = value;
        cipslaautogroupschedmaxinterval.value_namespace = name_space;
        cipslaautogroupschedmaxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedMinInterval")
    {
        cipslaautogroupschedmininterval = value;
        cipslaautogroupschedmininterval.value_namespace = name_space;
        cipslaautogroupschedmininterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedPeriod")
    {
        cipslaautogroupschedperiod = value;
        cipslaautogroupschedperiod.value_namespace = name_space;
        cipslaautogroupschedperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedRowStatus")
    {
        cipslaautogroupschedrowstatus = value;
        cipslaautogroupschedrowstatus.value_namespace = name_space;
        cipslaautogroupschedrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedStartTime")
    {
        cipslaautogroupschedstarttime = value;
        cipslaautogroupschedstarttime.value_namespace = name_space;
        cipslaautogroupschedstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedStorageType")
    {
        cipslaautogroupschedstoragetype = value;
        cipslaautogroupschedstoragetype.value_namespace = name_space;
        cipslaautogroupschedstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupSchedId")
    {
        cipslaautogroupschedid.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedAgeout")
    {
        cipslaautogroupschedageout.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedInterval")
    {
        cipslaautogroupschedinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedLife")
    {
        cipslaautogroupschedlife.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedMaxInterval")
    {
        cipslaautogroupschedmaxinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedMinInterval")
    {
        cipslaautogroupschedmininterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedPeriod")
    {
        cipslaautogroupschedperiod.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedRowStatus")
    {
        cipslaautogroupschedrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedStartTime")
    {
        cipslaautogroupschedstarttime.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedStorageType")
    {
        cipslaautogroupschedstoragetype.yfilter = yfilter;
    }
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupSchedId" || name == "cipslaAutoGroupSchedAgeout" || name == "cipslaAutoGroupSchedInterval" || name == "cipslaAutoGroupSchedLife" || name == "cipslaAutoGroupSchedMaxInterval" || name == "cipslaAutoGroupSchedMinInterval" || name == "cipslaAutoGroupSchedPeriod" || name == "cipslaAutoGroupSchedRowStatus" || name == "cipslaAutoGroupSchedStartTime" || name == "cipslaAutoGroupSchedStorageType")
        return true;
    return false;
}

const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::never {1, "never"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::immediate {2, "immediate"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::consecutive {3, "consecutive"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::xOfy {4, "xOfy"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::average {5, "average"};

const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactactiontype::none {1, "none"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactactiontype::notificationOnly {2, "notificationOnly"};


}
}

