
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONTEXT_MAPPING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONTEXT_MAPPING_MIB {

CISCOCONTEXTMAPPINGMIB::CISCOCONTEXTMAPPINGMIB()
    :
    ccontextmappingtable(std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable>())
	,ccontextmappingbridgedomaintable(std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable>())
	,ccontextmappingbridgeinstancetable(std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable>())
	,ccontextmappinglicensegrouptable(std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable>())
{
    ccontextmappingtable->parent = this;
    ccontextmappingbridgedomaintable->parent = this;
    ccontextmappingbridgeinstancetable->parent = this;
    ccontextmappinglicensegrouptable->parent = this;

    yang_name = "CISCO-CONTEXT-MAPPING-MIB"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::~CISCOCONTEXTMAPPINGMIB()
{
}

bool CISCOCONTEXTMAPPINGMIB::has_data() const
{
    return (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_data())
	|| (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_data())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_data())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_data());
}

bool CISCOCONTEXTMAPPINGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_operation())
	|| (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_operation())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_operation())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_operation());
}

std::string CISCOCONTEXTMAPPINGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingTable")
    {
        if(ccontextmappingtable == nullptr)
        {
            ccontextmappingtable = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable>();
        }
        return ccontextmappingtable;
    }

    if(child_yang_name == "cContextMappingBridgeDomainTable")
    {
        if(ccontextmappingbridgedomaintable == nullptr)
        {
            ccontextmappingbridgedomaintable = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable>();
        }
        return ccontextmappingbridgedomaintable;
    }

    if(child_yang_name == "cContextMappingBridgeInstanceTable")
    {
        if(ccontextmappingbridgeinstancetable == nullptr)
        {
            ccontextmappingbridgeinstancetable = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable>();
        }
        return ccontextmappingbridgeinstancetable;
    }

    if(child_yang_name == "cContextMappingLicenseGroupTable")
    {
        if(ccontextmappinglicensegrouptable == nullptr)
        {
            ccontextmappinglicensegrouptable = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable>();
        }
        return ccontextmappinglicensegrouptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccontextmappingtable != nullptr)
    {
        children["cContextMappingTable"] = ccontextmappingtable;
    }

    if(ccontextmappingbridgedomaintable != nullptr)
    {
        children["cContextMappingBridgeDomainTable"] = ccontextmappingbridgedomaintable;
    }

    if(ccontextmappingbridgeinstancetable != nullptr)
    {
        children["cContextMappingBridgeInstanceTable"] = ccontextmappingbridgeinstancetable;
    }

    if(ccontextmappinglicensegrouptable != nullptr)
    {
        children["cContextMappingLicenseGroupTable"] = ccontextmappinglicensegrouptable;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::clone_ptr() const
{
    return std::make_shared<CISCOCONTEXTMAPPINGMIB>();
}

std::string CISCOCONTEXTMAPPINGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCONTEXTMAPPINGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCONTEXTMAPPINGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCONTEXTMAPPINGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCONTEXTMAPPINGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingTable" || name == "cContextMappingBridgeDomainTable" || name == "cContextMappingBridgeInstanceTable" || name == "cContextMappingLicenseGroupTable")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingtable()
{

    yang_name = "cContextMappingTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::~Ccontextmappingtable()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingentry.size(); index++)
    {
        if(ccontextmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingentry.size(); index++)
    {
        if(ccontextmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingEntry")
    {
        for(auto const & c : ccontextmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry>();
        c->parent = this;
        ccontextmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::Ccontextmappingentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingvrfname{YType::str, "cContextMappingVrfName"},
    ccontextmappingtopologyname{YType::str, "cContextMappingTopologyName"},
    ccontextmappingprotoinstname{YType::str, "cContextMappingProtoInstName"},
    ccontextmappingstoragetype{YType::enumeration, "cContextMappingStorageType"},
    ccontextmappingrowstatus{YType::enumeration, "cContextMappingRowStatus"}
{

    yang_name = "cContextMappingEntry"; yang_parent_name = "cContextMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::~Ccontextmappingentry()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingvrfname.is_set
	|| ccontextmappingtopologyname.is_set
	|| ccontextmappingprotoinstname.is_set
	|| ccontextmappingstoragetype.is_set
	|| ccontextmappingrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingvrfname.yfilter)
	|| ydk::is_set(ccontextmappingtopologyname.yfilter)
	|| ydk::is_set(ccontextmappingprotoinstname.yfilter)
	|| ydk::is_set(ccontextmappingstoragetype.yfilter)
	|| ydk::is_set(ccontextmappingrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingvrfname.is_set || is_set(ccontextmappingvrfname.yfilter)) leaf_name_data.push_back(ccontextmappingvrfname.get_name_leafdata());
    if (ccontextmappingtopologyname.is_set || is_set(ccontextmappingtopologyname.yfilter)) leaf_name_data.push_back(ccontextmappingtopologyname.get_name_leafdata());
    if (ccontextmappingprotoinstname.is_set || is_set(ccontextmappingprotoinstname.yfilter)) leaf_name_data.push_back(ccontextmappingprotoinstname.get_name_leafdata());
    if (ccontextmappingstoragetype.is_set || is_set(ccontextmappingstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingstoragetype.get_name_leafdata());
    if (ccontextmappingrowstatus.is_set || is_set(ccontextmappingrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname = value;
        ccontextmappingvrfname.value_namespace = name_space;
        ccontextmappingvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname = value;
        ccontextmappingtopologyname.value_namespace = name_space;
        ccontextmappingtopologyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname = value;
        ccontextmappingprotoinstname.value_namespace = name_space;
        ccontextmappingprotoinstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype = value;
        ccontextmappingstoragetype.value_namespace = name_space;
        ccontextmappingstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus = value;
        ccontextmappingrowstatus.value_namespace = name_space;
        ccontextmappingrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingVrfName" || name == "cContextMappingTopologyName" || name == "cContextMappingProtoInstName" || name == "cContextMappingStorageType" || name == "cContextMappingRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomaintable()
{

    yang_name = "cContextMappingBridgeDomainTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::~Ccontextmappingbridgedomaintable()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.size(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.size(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingBridgeDomainEntry")
    {
        for(auto const & c : ccontextmappingbridgedomainentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry>();
        c->parent = this;
        ccontextmappingbridgedomainentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingbridgedomainentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeDomainEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::Ccontextmappingbridgedomainentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgedomainidentifier{YType::uint32, "cContextMappingBridgeDomainIdentifier"},
    ccontextmappingbridgedomainstoragetype{YType::enumeration, "cContextMappingBridgeDomainStorageType"},
    ccontextmappingbridgedomainrowstatus{YType::enumeration, "cContextMappingBridgeDomainRowStatus"}
{

    yang_name = "cContextMappingBridgeDomainEntry"; yang_parent_name = "cContextMappingBridgeDomainTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::~Ccontextmappingbridgedomainentry()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgedomainidentifier.is_set
	|| ccontextmappingbridgedomainstoragetype.is_set
	|| ccontextmappingbridgedomainrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainidentifier.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainstoragetype.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeDomainTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgedomainidentifier.is_set || is_set(ccontextmappingbridgedomainidentifier.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainidentifier.get_name_leafdata());
    if (ccontextmappingbridgedomainstoragetype.is_set || is_set(ccontextmappingbridgedomainstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainstoragetype.get_name_leafdata());
    if (ccontextmappingbridgedomainrowstatus.is_set || is_set(ccontextmappingbridgedomainrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainIdentifier")
    {
        ccontextmappingbridgedomainidentifier = value;
        ccontextmappingbridgedomainidentifier.value_namespace = name_space;
        ccontextmappingbridgedomainidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype = value;
        ccontextmappingbridgedomainstoragetype.value_namespace = name_space;
        ccontextmappingbridgedomainstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus = value;
        ccontextmappingbridgedomainrowstatus.value_namespace = name_space;
        ccontextmappingbridgedomainrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainIdentifier")
    {
        ccontextmappingbridgedomainidentifier.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeDomainIdentifier" || name == "cContextMappingBridgeDomainStorageType" || name == "cContextMappingBridgeDomainRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstancetable()
{

    yang_name = "cContextMappingBridgeInstanceTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::~Ccontextmappingbridgeinstancetable()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.size(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.size(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingBridgeInstanceEntry")
    {
        for(auto const & c : ccontextmappingbridgeinstanceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry>();
        c->parent = this;
        ccontextmappingbridgeinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingbridgeinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeInstanceEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::Ccontextmappingbridgeinstanceentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgeinstname{YType::str, "cContextMappingBridgeInstName"},
    ccontextmappingbridgeinststoragetype{YType::enumeration, "cContextMappingBridgeInstStorageType"},
    ccontextmappingbridgeinstrowstatus{YType::enumeration, "cContextMappingBridgeInstRowStatus"}
{

    yang_name = "cContextMappingBridgeInstanceEntry"; yang_parent_name = "cContextMappingBridgeInstanceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::~Ccontextmappingbridgeinstanceentry()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgeinstname.is_set
	|| ccontextmappingbridgeinststoragetype.is_set
	|| ccontextmappingbridgeinstrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinststoragetype.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgeinstname.is_set || is_set(ccontextmappingbridgeinstname.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstname.get_name_leafdata());
    if (ccontextmappingbridgeinststoragetype.is_set || is_set(ccontextmappingbridgeinststoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinststoragetype.get_name_leafdata());
    if (ccontextmappingbridgeinstrowstatus.is_set || is_set(ccontextmappingbridgeinstrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstName")
    {
        ccontextmappingbridgeinstname = value;
        ccontextmappingbridgeinstname.value_namespace = name_space;
        ccontextmappingbridgeinstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype = value;
        ccontextmappingbridgeinststoragetype.value_namespace = name_space;
        ccontextmappingbridgeinststoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus = value;
        ccontextmappingbridgeinstrowstatus.value_namespace = name_space;
        ccontextmappingbridgeinstrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstName")
    {
        ccontextmappingbridgeinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeInstName" || name == "cContextMappingBridgeInstStorageType" || name == "cContextMappingBridgeInstRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegrouptable()
{

    yang_name = "cContextMappingLicenseGroupTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::~Ccontextmappinglicensegrouptable()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.size(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.size(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingLicenseGroupEntry")
    {
        for(auto const & c : ccontextmappinglicensegroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry>();
        c->parent = this;
        ccontextmappinglicensegroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappinglicensegroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingLicenseGroupEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::Ccontextmappinglicensegroupentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappinglicensegroupname{YType::str, "cContextMappingLicenseGroupName"},
    ccontextmappinglicensegroupstoragetype{YType::enumeration, "cContextMappingLicenseGroupStorageType"},
    ccontextmappinglicensegrouprowstatus{YType::enumeration, "cContextMappingLicenseGroupRowStatus"}
{

    yang_name = "cContextMappingLicenseGroupEntry"; yang_parent_name = "cContextMappingLicenseGroupTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::~Ccontextmappinglicensegroupentry()
{
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappinglicensegroupname.is_set
	|| ccontextmappinglicensegroupstoragetype.is_set
	|| ccontextmappinglicensegrouprowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupstoragetype.yfilter)
	|| ydk::is_set(ccontextmappinglicensegrouprowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingLicenseGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappinglicensegroupname.is_set || is_set(ccontextmappinglicensegroupname.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupname.get_name_leafdata());
    if (ccontextmappinglicensegroupstoragetype.is_set || is_set(ccontextmappinglicensegroupstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupstoragetype.get_name_leafdata());
    if (ccontextmappinglicensegrouprowstatus.is_set || is_set(ccontextmappinglicensegrouprowstatus.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupName")
    {
        ccontextmappinglicensegroupname = value;
        ccontextmappinglicensegroupname.value_namespace = name_space;
        ccontextmappinglicensegroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype = value;
        ccontextmappinglicensegroupstoragetype.value_namespace = name_space;
        ccontextmappinglicensegroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus = value;
        ccontextmappinglicensegrouprowstatus.value_namespace = name_space;
        ccontextmappinglicensegrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupName")
    {
        ccontextmappinglicensegroupname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingLicenseGroupName" || name == "cContextMappingLicenseGroupStorageType" || name == "cContextMappingLicenseGroupRowStatus")
        return true;
    return false;
}


}
}

