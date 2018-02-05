
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_AUTOMEASURE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

CISCOIPSLAAUTOMEASUREMIB::CISCOIPSLAAUTOMEASUREMIB()
    :
    cipslaautogrouptable(std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable>())
	,cipslaautogroupdesttable(std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable>())
	,cipslareacttable(std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable>())
	,cipslaautogroupschedtable(std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable>())
{
    cipslaautogrouptable->parent = this;
    cipslaautogroupdesttable->parent = this;
    cipslareacttable->parent = this;
    cipslaautogroupschedtable->parent = this;

    yang_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::~CISCOIPSLAAUTOMEASUREMIB()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::has_data() const
{
    return (cipslaautogrouptable !=  nullptr && cipslaautogrouptable->has_data())
	|| (cipslaautogroupdesttable !=  nullptr && cipslaautogroupdesttable->has_data())
	|| (cipslareacttable !=  nullptr && cipslareacttable->has_data())
	|| (cipslaautogroupschedtable !=  nullptr && cipslaautogroupschedtable->has_data());
}

bool CISCOIPSLAAUTOMEASUREMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cipslaautogrouptable !=  nullptr && cipslaautogrouptable->has_operation())
	|| (cipslaautogroupdesttable !=  nullptr && cipslaautogroupdesttable->has_operation())
	|| (cipslareacttable !=  nullptr && cipslareacttable->has_operation())
	|| (cipslaautogroupschedtable !=  nullptr && cipslaautogroupschedtable->has_operation());
}

std::string CISCOIPSLAAUTOMEASUREMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupTable")
    {
        if(cipslaautogrouptable == nullptr)
        {
            cipslaautogrouptable = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable>();
        }
        return cipslaautogrouptable;
    }

    if(child_yang_name == "cipslaAutoGroupDestTable")
    {
        if(cipslaautogroupdesttable == nullptr)
        {
            cipslaautogroupdesttable = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable>();
        }
        return cipslaautogroupdesttable;
    }

    if(child_yang_name == "cipslaReactTable")
    {
        if(cipslareacttable == nullptr)
        {
            cipslareacttable = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable>();
        }
        return cipslareacttable;
    }

    if(child_yang_name == "cipslaAutoGroupSchedTable")
    {
        if(cipslaautogroupschedtable == nullptr)
        {
            cipslaautogroupschedtable = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable>();
        }
        return cipslaautogroupschedtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cipslaautogrouptable != nullptr)
    {
        children["cipslaAutoGroupTable"] = cipslaautogrouptable;
    }

    if(cipslaautogroupdesttable != nullptr)
    {
        children["cipslaAutoGroupDestTable"] = cipslaautogroupdesttable;
    }

    if(cipslareacttable != nullptr)
    {
        children["cipslaReactTable"] = cipslareacttable;
    }

    if(cipslaautogroupschedtable != nullptr)
    {
        children["cipslaAutoGroupSchedTable"] = cipslaautogroupschedtable;
    }

    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAAUTOMEASUREMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPSLAAUTOMEASUREMIB>();
}

std::string CISCOIPSLAAUTOMEASUREMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPSLAAUTOMEASUREMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPSLAAUTOMEASUREMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPSLAAUTOMEASUREMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPSLAAUTOMEASUREMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupTable" || name == "cipslaAutoGroupDestTable" || name == "cipslaReactTable" || name == "cipslaAutoGroupSchedTable")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogrouptable()
{

    yang_name = "cipslaAutoGroupTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::~Cipslaautogrouptable()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupentry.size(); index++)
    {
        if(cipslaautogroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupentry.size(); index++)
    {
        if(cipslaautogroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupEntry")
    {
        auto c = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry>();
        c->parent = this;
        cipslaautogroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipslaautogroupentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupEntry")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::Cipslaautogroupentry()
    :
    cipslaautogroupname{YType::str, "cipslaAutoGroupName"},
    cipslaautogroupdescription{YType::str, "cipslaAutoGroupDescription"},
    cipslaautogroupdestinationname{YType::str, "cipslaAutoGroupDestinationName"},
    cipslaautogroupaddestport{YType::uint16, "cipslaAutoGroupADDestPort"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslaautogroupschedulerid{YType::str, "cipslaAutoGroupSchedulerId"},
    cipslaautogroupqosenable{YType::boolean, "cipslaAutoGroupQoSEnable"},
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslaautogroupdestipadenable{YType::boolean, "cipslaAutoGroupDestIPADEnable"},
    cipslaautogroupadmeasureretry{YType::uint32, "cipslaAutoGroupADMeasureRetry"},
    cipslaautogroupaddestipageout{YType::uint32, "cipslaAutoGroupADDestIPAgeout"},
    cipslaautogroupstoragetype{YType::enumeration, "cipslaAutoGroupStorageType"},
    cipslaautogrouprowstatus{YType::enumeration, "cipslaAutoGroupRowStatus"}
{

    yang_name = "cipslaAutoGroupEntry"; yang_parent_name = "cipslaAutoGroupTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::~Cipslaautogroupentry()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::has_data() const
{
    return cipslaautogroupname.is_set
	|| cipslaautogroupdescription.is_set
	|| cipslaautogroupdestinationname.is_set
	|| cipslaautogroupaddestport.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslaautogroupschedulerid.is_set
	|| cipslaautogroupqosenable.is_set
	|| cipslaautogroupopertype.is_set
	|| cipslaautogroupdestipadenable.is_set
	|| cipslaautogroupadmeasureretry.is_set
	|| cipslaautogroupaddestipageout.is_set
	|| cipslaautogroupstoragetype.is_set
	|| cipslaautogrouprowstatus.is_set;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupname.yfilter)
	|| ydk::is_set(cipslaautogroupdescription.yfilter)
	|| ydk::is_set(cipslaautogroupdestinationname.yfilter)
	|| ydk::is_set(cipslaautogroupaddestport.yfilter)
	|| ydk::is_set(cipslaautogroupopertemplatename.yfilter)
	|| ydk::is_set(cipslaautogroupschedulerid.yfilter)
	|| ydk::is_set(cipslaautogroupqosenable.yfilter)
	|| ydk::is_set(cipslaautogroupopertype.yfilter)
	|| ydk::is_set(cipslaautogroupdestipadenable.yfilter)
	|| ydk::is_set(cipslaautogroupadmeasureretry.yfilter)
	|| ydk::is_set(cipslaautogroupaddestipageout.yfilter)
	|| ydk::is_set(cipslaautogroupstoragetype.yfilter)
	|| ydk::is_set(cipslaautogrouprowstatus.yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupEntry" <<"[cipslaAutoGroupName='" <<cipslaautogroupname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupname.is_set || is_set(cipslaautogroupname.yfilter)) leaf_name_data.push_back(cipslaautogroupname.get_name_leafdata());
    if (cipslaautogroupdescription.is_set || is_set(cipslaautogroupdescription.yfilter)) leaf_name_data.push_back(cipslaautogroupdescription.get_name_leafdata());
    if (cipslaautogroupdestinationname.is_set || is_set(cipslaautogroupdestinationname.yfilter)) leaf_name_data.push_back(cipslaautogroupdestinationname.get_name_leafdata());
    if (cipslaautogroupaddestport.is_set || is_set(cipslaautogroupaddestport.yfilter)) leaf_name_data.push_back(cipslaautogroupaddestport.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.yfilter)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslaautogroupschedulerid.is_set || is_set(cipslaautogroupschedulerid.yfilter)) leaf_name_data.push_back(cipslaautogroupschedulerid.get_name_leafdata());
    if (cipslaautogroupqosenable.is_set || is_set(cipslaautogroupqosenable.yfilter)) leaf_name_data.push_back(cipslaautogroupqosenable.get_name_leafdata());
    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.yfilter)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslaautogroupdestipadenable.is_set || is_set(cipslaautogroupdestipadenable.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipadenable.get_name_leafdata());
    if (cipslaautogroupadmeasureretry.is_set || is_set(cipslaautogroupadmeasureretry.yfilter)) leaf_name_data.push_back(cipslaautogroupadmeasureretry.get_name_leafdata());
    if (cipslaautogroupaddestipageout.is_set || is_set(cipslaautogroupaddestipageout.yfilter)) leaf_name_data.push_back(cipslaautogroupaddestipageout.get_name_leafdata());
    if (cipslaautogroupstoragetype.is_set || is_set(cipslaautogroupstoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupstoragetype.get_name_leafdata());
    if (cipslaautogrouprowstatus.is_set || is_set(cipslaautogrouprowstatus.yfilter)) leaf_name_data.push_back(cipslaautogrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupName")
    {
        cipslaautogroupname = value;
        cipslaautogroupname.value_namespace = name_space;
        cipslaautogroupname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cipslaAutoGroupADDestPort")
    {
        cipslaautogroupaddestport = value;
        cipslaautogroupaddestport.value_namespace = name_space;
        cipslaautogroupaddestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename = value;
        cipslaautogroupopertemplatename.value_namespace = name_space;
        cipslaautogroupopertemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedulerId")
    {
        cipslaautogroupschedulerid = value;
        cipslaautogroupschedulerid.value_namespace = name_space;
        cipslaautogroupschedulerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupQoSEnable")
    {
        cipslaautogroupqosenable = value;
        cipslaautogroupqosenable.value_namespace = name_space;
        cipslaautogroupqosenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype = value;
        cipslaautogroupopertype.value_namespace = name_space;
        cipslaautogroupopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestIPADEnable")
    {
        cipslaautogroupdestipadenable = value;
        cipslaautogroupdestipadenable.value_namespace = name_space;
        cipslaautogroupdestipadenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupADMeasureRetry")
    {
        cipslaautogroupadmeasureretry = value;
        cipslaautogroupadmeasureretry.value_namespace = name_space;
        cipslaautogroupadmeasureretry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupADDestIPAgeout")
    {
        cipslaautogroupaddestipageout = value;
        cipslaautogroupaddestipageout.value_namespace = name_space;
        cipslaautogroupaddestipageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupStorageType")
    {
        cipslaautogroupstoragetype = value;
        cipslaautogroupstoragetype.value_namespace = name_space;
        cipslaautogroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupRowStatus")
    {
        cipslaautogrouprowstatus = value;
        cipslaautogrouprowstatus.value_namespace = name_space;
        cipslaautogrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupName")
    {
        cipslaautogroupname.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDescription")
    {
        cipslaautogroupdescription.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestinationName")
    {
        cipslaautogroupdestinationname.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADDestPort")
    {
        cipslaautogroupaddestport.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedulerId")
    {
        cipslaautogroupschedulerid.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupQoSEnable")
    {
        cipslaautogroupqosenable.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestIPADEnable")
    {
        cipslaautogroupdestipadenable.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADMeasureRetry")
    {
        cipslaautogroupadmeasureretry.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupADDestIPAgeout")
    {
        cipslaautogroupaddestipageout.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupStorageType")
    {
        cipslaautogroupstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupRowStatus")
    {
        cipslaautogrouprowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupName" || name == "cipslaAutoGroupDescription" || name == "cipslaAutoGroupDestinationName" || name == "cipslaAutoGroupADDestPort" || name == "cipslaAutoGroupOperTemplateName" || name == "cipslaAutoGroupSchedulerId" || name == "cipslaAutoGroupQoSEnable" || name == "cipslaAutoGroupOperType" || name == "cipslaAutoGroupDestIPADEnable" || name == "cipslaAutoGroupADMeasureRetry" || name == "cipslaAutoGroupADDestIPAgeout" || name == "cipslaAutoGroupStorageType" || name == "cipslaAutoGroupRowStatus")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdesttable()
{

    yang_name = "cipslaAutoGroupDestTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::~Cipslaautogroupdesttable()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry.size(); index++)
    {
        if(cipslaautogroupdestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry.size(); index++)
    {
        if(cipslaautogroupdestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupDestEntry")
    {
        auto c = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry>();
        c->parent = this;
        cipslaautogroupdestentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipslaautogroupdestentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupDestEntry")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::Cipslaautogroupdestentry()
    :
    cipslaautogroupdestname{YType::str, "cipslaAutoGroupDestName"},
    cipslaautogroupdestipaddrtype{YType::enumeration, "cipslaAutoGroupDestIpAddrType"},
    cipslaautogroupdestipaddr{YType::str, "cipslaAutoGroupDestIpAddr"},
    cipslaautogroupdestport{YType::uint16, "cipslaAutoGroupDestPort"},
    cipslaautogroupdeststoragetype{YType::enumeration, "cipslaAutoGroupDestStorageType"},
    cipslaautogroupdestrowstatus{YType::enumeration, "cipslaAutoGroupDestRowStatus"}
{

    yang_name = "cipslaAutoGroupDestEntry"; yang_parent_name = "cipslaAutoGroupDestTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::~Cipslaautogroupdestentry()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_data() const
{
    return cipslaautogroupdestname.is_set
	|| cipslaautogroupdestipaddrtype.is_set
	|| cipslaautogroupdestipaddr.is_set
	|| cipslaautogroupdestport.is_set
	|| cipslaautogroupdeststoragetype.is_set
	|| cipslaautogroupdestrowstatus.is_set;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupdestname.yfilter)
	|| ydk::is_set(cipslaautogroupdestipaddrtype.yfilter)
	|| ydk::is_set(cipslaautogroupdestipaddr.yfilter)
	|| ydk::is_set(cipslaautogroupdestport.yfilter)
	|| ydk::is_set(cipslaautogroupdeststoragetype.yfilter)
	|| ydk::is_set(cipslaautogroupdestrowstatus.yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupDestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestEntry" <<"[cipslaAutoGroupDestName='" <<cipslaautogroupdestname <<"']" <<"[cipslaAutoGroupDestIpAddrType='" <<cipslaautogroupdestipaddrtype <<"']" <<"[cipslaAutoGroupDestIpAddr='" <<cipslaautogroupdestipaddr <<"']" <<"[cipslaAutoGroupDestPort='" <<cipslaautogroupdestport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupdestname.is_set || is_set(cipslaautogroupdestname.yfilter)) leaf_name_data.push_back(cipslaautogroupdestname.get_name_leafdata());
    if (cipslaautogroupdestipaddrtype.is_set || is_set(cipslaautogroupdestipaddrtype.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipaddrtype.get_name_leafdata());
    if (cipslaautogroupdestipaddr.is_set || is_set(cipslaautogroupdestipaddr.yfilter)) leaf_name_data.push_back(cipslaautogroupdestipaddr.get_name_leafdata());
    if (cipslaautogroupdestport.is_set || is_set(cipslaautogroupdestport.yfilter)) leaf_name_data.push_back(cipslaautogroupdestport.get_name_leafdata());
    if (cipslaautogroupdeststoragetype.is_set || is_set(cipslaautogroupdeststoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupdeststoragetype.get_name_leafdata());
    if (cipslaautogroupdestrowstatus.is_set || is_set(cipslaautogroupdestrowstatus.yfilter)) leaf_name_data.push_back(cipslaautogroupdestrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipslaAutoGroupDestStorageType")
    {
        cipslaautogroupdeststoragetype = value;
        cipslaautogroupdeststoragetype.value_namespace = name_space;
        cipslaautogroupdeststoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupDestRowStatus")
    {
        cipslaautogroupdestrowstatus = value;
        cipslaautogroupdestrowstatus.value_namespace = name_space;
        cipslaautogroupdestrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cipslaAutoGroupDestStorageType")
    {
        cipslaautogroupdeststoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupDestRowStatus")
    {
        cipslaautogroupdestrowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupDestName" || name == "cipslaAutoGroupDestIpAddrType" || name == "cipslaAutoGroupDestIpAddr" || name == "cipslaAutoGroupDestPort" || name == "cipslaAutoGroupDestStorageType" || name == "cipslaAutoGroupDestRowStatus")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareacttable()
{

    yang_name = "cipslaReactTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::~Cipslareacttable()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::has_data() const
{
    for (std::size_t index=0; index<cipslareactentry.size(); index++)
    {
        if(cipslareactentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::has_operation() const
{
    for (std::size_t index=0; index<cipslareactentry.size(); index++)
    {
        if(cipslareactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaReactEntry")
    {
        auto c = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry>();
        c->parent = this;
        cipslareactentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipslareactentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaReactEntry")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactentry()
    :
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslareactconfigindex{YType::uint32, "cipslaReactConfigIndex"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslareactvar{YType::enumeration, "cipslaReactVar"},
    cipslareactthresholdtype{YType::enumeration, "cipslaReactThresholdType"},
    cipslareactactiontype{YType::enumeration, "cipslaReactActionType"},
    cipslareactthresholdrising{YType::uint32, "cipslaReactThresholdRising"},
    cipslareactthresholdfalling{YType::uint32, "cipslaReactThresholdFalling"},
    cipslareactthresholdcountx{YType::uint32, "cipslaReactThresholdCountX"},
    cipslareactthresholdcounty{YType::uint32, "cipslaReactThresholdCountY"},
    cipslareactstoragetype{YType::enumeration, "cipslaReactStorageType"},
    cipslareactrowstatus{YType::enumeration, "cipslaReactRowStatus"}
{

    yang_name = "cipslaReactEntry"; yang_parent_name = "cipslaReactTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::~Cipslareactentry()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::has_data() const
{
    return cipslaautogroupopertype.is_set
	|| cipslareactconfigindex.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslareactvar.is_set
	|| cipslareactthresholdtype.is_set
	|| cipslareactactiontype.is_set
	|| cipslareactthresholdrising.is_set
	|| cipslareactthresholdfalling.is_set
	|| cipslareactthresholdcountx.is_set
	|| cipslareactthresholdcounty.is_set
	|| cipslareactstoragetype.is_set
	|| cipslareactrowstatus.is_set;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupopertype.yfilter)
	|| ydk::is_set(cipslareactconfigindex.yfilter)
	|| ydk::is_set(cipslaautogroupopertemplatename.yfilter)
	|| ydk::is_set(cipslareactvar.yfilter)
	|| ydk::is_set(cipslareactthresholdtype.yfilter)
	|| ydk::is_set(cipslareactactiontype.yfilter)
	|| ydk::is_set(cipslareactthresholdrising.yfilter)
	|| ydk::is_set(cipslareactthresholdfalling.yfilter)
	|| ydk::is_set(cipslareactthresholdcountx.yfilter)
	|| ydk::is_set(cipslareactthresholdcounty.yfilter)
	|| ydk::is_set(cipslareactstoragetype.yfilter)
	|| ydk::is_set(cipslareactrowstatus.yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaReactTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactEntry" <<"[cipslaAutoGroupOperType='" <<cipslaautogroupopertype <<"']" <<"[cipslaReactConfigIndex='" <<cipslareactconfigindex <<"']" <<"[cipslaAutoGroupOperTemplateName='" <<cipslaautogroupopertemplatename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.yfilter)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslareactconfigindex.is_set || is_set(cipslareactconfigindex.yfilter)) leaf_name_data.push_back(cipslareactconfigindex.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.yfilter)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslareactvar.is_set || is_set(cipslareactvar.yfilter)) leaf_name_data.push_back(cipslareactvar.get_name_leafdata());
    if (cipslareactthresholdtype.is_set || is_set(cipslareactthresholdtype.yfilter)) leaf_name_data.push_back(cipslareactthresholdtype.get_name_leafdata());
    if (cipslareactactiontype.is_set || is_set(cipslareactactiontype.yfilter)) leaf_name_data.push_back(cipslareactactiontype.get_name_leafdata());
    if (cipslareactthresholdrising.is_set || is_set(cipslareactthresholdrising.yfilter)) leaf_name_data.push_back(cipslareactthresholdrising.get_name_leafdata());
    if (cipslareactthresholdfalling.is_set || is_set(cipslareactthresholdfalling.yfilter)) leaf_name_data.push_back(cipslareactthresholdfalling.get_name_leafdata());
    if (cipslareactthresholdcountx.is_set || is_set(cipslareactthresholdcountx.yfilter)) leaf_name_data.push_back(cipslareactthresholdcountx.get_name_leafdata());
    if (cipslareactthresholdcounty.is_set || is_set(cipslareactthresholdcounty.yfilter)) leaf_name_data.push_back(cipslareactthresholdcounty.get_name_leafdata());
    if (cipslareactstoragetype.is_set || is_set(cipslareactstoragetype.yfilter)) leaf_name_data.push_back(cipslareactstoragetype.get_name_leafdata());
    if (cipslareactrowstatus.is_set || is_set(cipslareactrowstatus.yfilter)) leaf_name_data.push_back(cipslareactrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipslaReactVar")
    {
        cipslareactvar = value;
        cipslareactvar.value_namespace = name_space;
        cipslareactvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdType")
    {
        cipslareactthresholdtype = value;
        cipslareactthresholdtype.value_namespace = name_space;
        cipslareactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactActionType")
    {
        cipslareactactiontype = value;
        cipslareactactiontype.value_namespace = name_space;
        cipslareactactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdRising")
    {
        cipslareactthresholdrising = value;
        cipslareactthresholdrising.value_namespace = name_space;
        cipslareactthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactThresholdFalling")
    {
        cipslareactthresholdfalling = value;
        cipslareactthresholdfalling.value_namespace = name_space;
        cipslareactthresholdfalling.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cipslaReactStorageType")
    {
        cipslareactstoragetype = value;
        cipslareactstoragetype.value_namespace = name_space;
        cipslareactstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaReactRowStatus")
    {
        cipslareactrowstatus = value;
        cipslareactrowstatus.value_namespace = name_space;
        cipslareactrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cipslaReactVar")
    {
        cipslareactvar.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdType")
    {
        cipslareactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactActionType")
    {
        cipslareactactiontype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdRising")
    {
        cipslareactthresholdrising.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdFalling")
    {
        cipslareactthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdCountX")
    {
        cipslareactthresholdcountx.yfilter = yfilter;
    }
    if(value_path == "cipslaReactThresholdCountY")
    {
        cipslareactthresholdcounty.yfilter = yfilter;
    }
    if(value_path == "cipslaReactStorageType")
    {
        cipslareactstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaReactRowStatus")
    {
        cipslareactrowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupOperType" || name == "cipslaReactConfigIndex" || name == "cipslaAutoGroupOperTemplateName" || name == "cipslaReactVar" || name == "cipslaReactThresholdType" || name == "cipslaReactActionType" || name == "cipslaReactThresholdRising" || name == "cipslaReactThresholdFalling" || name == "cipslaReactThresholdCountX" || name == "cipslaReactThresholdCountY" || name == "cipslaReactStorageType" || name == "cipslaReactRowStatus")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedtable()
{

    yang_name = "cipslaAutoGroupSchedTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::~Cipslaautogroupschedtable()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry.size(); index++)
    {
        if(cipslaautogroupschedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry.size(); index++)
    {
        if(cipslaautogroupschedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupSchedEntry")
    {
        auto c = std::make_shared<CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry>();
        c->parent = this;
        cipslaautogroupschedentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipslaautogroupschedentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupSchedEntry")
        return true;
    return false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::Cipslaautogroupschedentry()
    :
    cipslaautogroupschedid{YType::str, "cipslaAutoGroupSchedId"},
    cipslaautogroupschedperiod{YType::uint32, "cipslaAutoGroupSchedPeriod"},
    cipslaautogroupschedinterval{YType::uint32, "cipslaAutoGroupSchedInterval"},
    cipslaautogroupschedlife{YType::uint32, "cipslaAutoGroupSchedLife"},
    cipslaautogroupschedageout{YType::uint32, "cipslaAutoGroupSchedAgeout"},
    cipslaautogroupschedmaxinterval{YType::uint32, "cipslaAutoGroupSchedMaxInterval"},
    cipslaautogroupschedmininterval{YType::uint32, "cipslaAutoGroupSchedMinInterval"},
    cipslaautogroupschedstarttime{YType::uint32, "cipslaAutoGroupSchedStartTime"},
    cipslaautogroupschedstoragetype{YType::enumeration, "cipslaAutoGroupSchedStorageType"},
    cipslaautogroupschedrowstatus{YType::enumeration, "cipslaAutoGroupSchedRowStatus"}
{

    yang_name = "cipslaAutoGroupSchedEntry"; yang_parent_name = "cipslaAutoGroupSchedTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::~Cipslaautogroupschedentry()
{
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_data() const
{
    return cipslaautogroupschedid.is_set
	|| cipslaautogroupschedperiod.is_set
	|| cipslaautogroupschedinterval.is_set
	|| cipslaautogroupschedlife.is_set
	|| cipslaautogroupschedageout.is_set
	|| cipslaautogroupschedmaxinterval.is_set
	|| cipslaautogroupschedmininterval.is_set
	|| cipslaautogroupschedstarttime.is_set
	|| cipslaautogroupschedstoragetype.is_set
	|| cipslaautogroupschedrowstatus.is_set;
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaautogroupschedid.yfilter)
	|| ydk::is_set(cipslaautogroupschedperiod.yfilter)
	|| ydk::is_set(cipslaautogroupschedinterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedlife.yfilter)
	|| ydk::is_set(cipslaautogroupschedageout.yfilter)
	|| ydk::is_set(cipslaautogroupschedmaxinterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedmininterval.yfilter)
	|| ydk::is_set(cipslaautogroupschedstarttime.yfilter)
	|| ydk::is_set(cipslaautogroupschedstoragetype.yfilter)
	|| ydk::is_set(cipslaautogroupschedrowstatus.yfilter);
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupSchedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedEntry" <<"[cipslaAutoGroupSchedId='" <<cipslaautogroupschedid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupschedid.is_set || is_set(cipslaautogroupschedid.yfilter)) leaf_name_data.push_back(cipslaautogroupschedid.get_name_leafdata());
    if (cipslaautogroupschedperiod.is_set || is_set(cipslaautogroupschedperiod.yfilter)) leaf_name_data.push_back(cipslaautogroupschedperiod.get_name_leafdata());
    if (cipslaautogroupschedinterval.is_set || is_set(cipslaautogroupschedinterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedinterval.get_name_leafdata());
    if (cipslaautogroupschedlife.is_set || is_set(cipslaautogroupschedlife.yfilter)) leaf_name_data.push_back(cipslaautogroupschedlife.get_name_leafdata());
    if (cipslaautogroupschedageout.is_set || is_set(cipslaautogroupschedageout.yfilter)) leaf_name_data.push_back(cipslaautogroupschedageout.get_name_leafdata());
    if (cipslaautogroupschedmaxinterval.is_set || is_set(cipslaautogroupschedmaxinterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedmaxinterval.get_name_leafdata());
    if (cipslaautogroupschedmininterval.is_set || is_set(cipslaautogroupschedmininterval.yfilter)) leaf_name_data.push_back(cipslaautogroupschedmininterval.get_name_leafdata());
    if (cipslaautogroupschedstarttime.is_set || is_set(cipslaautogroupschedstarttime.yfilter)) leaf_name_data.push_back(cipslaautogroupschedstarttime.get_name_leafdata());
    if (cipslaautogroupschedstoragetype.is_set || is_set(cipslaautogroupschedstoragetype.yfilter)) leaf_name_data.push_back(cipslaautogroupschedstoragetype.get_name_leafdata());
    if (cipslaautogroupschedrowstatus.is_set || is_set(cipslaautogroupschedrowstatus.yfilter)) leaf_name_data.push_back(cipslaautogroupschedrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaAutoGroupSchedId")
    {
        cipslaautogroupschedid = value;
        cipslaautogroupschedid.value_namespace = name_space;
        cipslaautogroupschedid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaAutoGroupSchedPeriod")
    {
        cipslaautogroupschedperiod = value;
        cipslaautogroupschedperiod.value_namespace = name_space;
        cipslaautogroupschedperiod.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cipslaAutoGroupSchedAgeout")
    {
        cipslaautogroupschedageout = value;
        cipslaautogroupschedageout.value_namespace = name_space;
        cipslaautogroupschedageout.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cipslaAutoGroupSchedRowStatus")
    {
        cipslaautogroupschedrowstatus = value;
        cipslaautogroupschedrowstatus.value_namespace = name_space;
        cipslaautogroupschedrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaAutoGroupSchedId")
    {
        cipslaautogroupschedid.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedPeriod")
    {
        cipslaautogroupschedperiod.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedInterval")
    {
        cipslaautogroupschedinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedLife")
    {
        cipslaautogroupschedlife.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedAgeout")
    {
        cipslaautogroupschedageout.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedMaxInterval")
    {
        cipslaautogroupschedmaxinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedMinInterval")
    {
        cipslaautogroupschedmininterval.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedStartTime")
    {
        cipslaautogroupschedstarttime.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedStorageType")
    {
        cipslaautogroupschedstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaAutoGroupSchedRowStatus")
    {
        cipslaautogroupschedrowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaAutoGroupSchedId" || name == "cipslaAutoGroupSchedPeriod" || name == "cipslaAutoGroupSchedInterval" || name == "cipslaAutoGroupSchedLife" || name == "cipslaAutoGroupSchedAgeout" || name == "cipslaAutoGroupSchedMaxInterval" || name == "cipslaAutoGroupSchedMinInterval" || name == "cipslaAutoGroupSchedStartTime" || name == "cipslaAutoGroupSchedStorageType" || name == "cipslaAutoGroupSchedRowStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::never {1, "never"};
const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::immediate {2, "immediate"};
const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::consecutive {3, "consecutive"};
const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::xOfy {4, "xOfy"};
const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype::average {5, "average"};

const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactactiontype::none {1, "none"};
const Enum::YLeaf CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactactiontype::notificationOnly {2, "notificationOnly"};


}
}

