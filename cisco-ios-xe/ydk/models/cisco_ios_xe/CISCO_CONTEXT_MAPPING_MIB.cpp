
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONTEXT_MAPPING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONTEXT_MAPPING_MIB {

CiscoContextMappingMib::CiscoContextMappingMib()
    :
    ccontextmappingbridgedomaintable(std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgedomaintable>())
	,ccontextmappingbridgeinstancetable(std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgeinstancetable>())
	,ccontextmappinglicensegrouptable(std::make_shared<CiscoContextMappingMib::Ccontextmappinglicensegrouptable>())
	,ccontextmappingtable(std::make_shared<CiscoContextMappingMib::Ccontextmappingtable>())
{
    ccontextmappingbridgedomaintable->parent = this;

    ccontextmappingbridgeinstancetable->parent = this;

    ccontextmappinglicensegrouptable->parent = this;

    ccontextmappingtable->parent = this;

    yang_name = "CISCO-CONTEXT-MAPPING-MIB"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB";
}

CiscoContextMappingMib::~CiscoContextMappingMib()
{
}

bool CiscoContextMappingMib::has_data() const
{
    return (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_data())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_data())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_data())
	|| (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_data());
}

bool CiscoContextMappingMib::has_operation() const
{
    return is_set(yfilter)
	|| (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_operation())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_operation())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_operation())
	|| (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_operation());
}

std::string CiscoContextMappingMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoContextMappingMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingBridgeDomainTable")
    {
        if(ccontextmappingbridgedomaintable == nullptr)
        {
            ccontextmappingbridgedomaintable = std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgedomaintable>();
        }
        return ccontextmappingbridgedomaintable;
    }

    if(child_yang_name == "cContextMappingBridgeInstanceTable")
    {
        if(ccontextmappingbridgeinstancetable == nullptr)
        {
            ccontextmappingbridgeinstancetable = std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgeinstancetable>();
        }
        return ccontextmappingbridgeinstancetable;
    }

    if(child_yang_name == "cContextMappingLicenseGroupTable")
    {
        if(ccontextmappinglicensegrouptable == nullptr)
        {
            ccontextmappinglicensegrouptable = std::make_shared<CiscoContextMappingMib::Ccontextmappinglicensegrouptable>();
        }
        return ccontextmappinglicensegrouptable;
    }

    if(child_yang_name == "cContextMappingTable")
    {
        if(ccontextmappingtable == nullptr)
        {
            ccontextmappingtable = std::make_shared<CiscoContextMappingMib::Ccontextmappingtable>();
        }
        return ccontextmappingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(ccontextmappingtable != nullptr)
    {
        children["cContextMappingTable"] = ccontextmappingtable;
    }

    return children;
}

void CiscoContextMappingMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoContextMappingMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoContextMappingMib::clone_ptr() const
{
    return std::make_shared<CiscoContextMappingMib>();
}

std::string CiscoContextMappingMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoContextMappingMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoContextMappingMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoContextMappingMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoContextMappingMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeDomainTable" || name == "cContextMappingBridgeInstanceTable" || name == "cContextMappingLicenseGroupTable" || name == "cContextMappingTable")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingtable()
{
    yang_name = "cContextMappingTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB";
}

CiscoContextMappingMib::Ccontextmappingtable::~Ccontextmappingtable()
{
}

bool CiscoContextMappingMib::Ccontextmappingtable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingentry.size(); index++)
    {
        if(ccontextmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoContextMappingMib::Ccontextmappingtable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingentry.size(); index++)
    {
        if(ccontextmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry>();
        c->parent = this;
        ccontextmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoContextMappingMib::Ccontextmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoContextMappingMib::Ccontextmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoContextMappingMib::Ccontextmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingEntry")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::Ccontextmappingentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingprotoinstname{YType::str, "cContextMappingProtoInstName"},
    ccontextmappingrowstatus{YType::enumeration, "cContextMappingRowStatus"},
    ccontextmappingstoragetype{YType::enumeration, "cContextMappingStorageType"},
    ccontextmappingtopologyname{YType::str, "cContextMappingTopologyName"},
    ccontextmappingvrfname{YType::str, "cContextMappingVrfName"}
{
    yang_name = "cContextMappingEntry"; yang_parent_name = "cContextMappingTable";
}

CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::~Ccontextmappingentry()
{
}

bool CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingprotoinstname.is_set
	|| ccontextmappingrowstatus.is_set
	|| ccontextmappingstoragetype.is_set
	|| ccontextmappingtopologyname.is_set
	|| ccontextmappingvrfname.is_set;
}

bool CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingprotoinstname.yfilter)
	|| ydk::is_set(ccontextmappingrowstatus.yfilter)
	|| ydk::is_set(ccontextmappingstoragetype.yfilter)
	|| ydk::is_set(ccontextmappingtopologyname.yfilter)
	|| ydk::is_set(ccontextmappingvrfname.yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingprotoinstname.is_set || is_set(ccontextmappingprotoinstname.yfilter)) leaf_name_data.push_back(ccontextmappingprotoinstname.get_name_leafdata());
    if (ccontextmappingrowstatus.is_set || is_set(ccontextmappingrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingrowstatus.get_name_leafdata());
    if (ccontextmappingstoragetype.is_set || is_set(ccontextmappingstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingstoragetype.get_name_leafdata());
    if (ccontextmappingtopologyname.is_set || is_set(ccontextmappingtopologyname.yfilter)) leaf_name_data.push_back(ccontextmappingtopologyname.get_name_leafdata());
    if (ccontextmappingvrfname.is_set || is_set(ccontextmappingvrfname.yfilter)) leaf_name_data.push_back(ccontextmappingvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname = value;
        ccontextmappingprotoinstname.value_namespace = name_space;
        ccontextmappingprotoinstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus = value;
        ccontextmappingrowstatus.value_namespace = name_space;
        ccontextmappingrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype = value;
        ccontextmappingstoragetype.value_namespace = name_space;
        ccontextmappingstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname = value;
        ccontextmappingtopologyname.value_namespace = name_space;
        ccontextmappingtopologyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname = value;
        ccontextmappingvrfname.value_namespace = name_space;
        ccontextmappingvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus.yfilter = yfilter;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname.yfilter = yfilter;
    }
}

bool CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingProtoInstName" || name == "cContextMappingRowStatus" || name == "cContextMappingStorageType" || name == "cContextMappingTopologyName" || name == "cContextMappingVrfName")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomaintable()
{
    yang_name = "cContextMappingBridgeDomainTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB";
}

CiscoContextMappingMib::Ccontextmappingbridgedomaintable::~Ccontextmappingbridgedomaintable()
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.size(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.size(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingbridgedomaintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainTable";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingbridgedomaintable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingbridgedomaintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry>();
        c->parent = this;
        ccontextmappingbridgedomainentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingbridgedomaintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingbridgedomainentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoContextMappingMib::Ccontextmappingbridgedomaintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoContextMappingMib::Ccontextmappingbridgedomaintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeDomainEntry")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::Ccontextmappingbridgedomainentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgedomainidentifier{YType::uint32, "cContextMappingBridgeDomainIdentifier"},
    ccontextmappingbridgedomainrowstatus{YType::enumeration, "cContextMappingBridgeDomainRowStatus"},
    ccontextmappingbridgedomainstoragetype{YType::enumeration, "cContextMappingBridgeDomainStorageType"}
{
    yang_name = "cContextMappingBridgeDomainEntry"; yang_parent_name = "cContextMappingBridgeDomainTable";
}

CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::~Ccontextmappingbridgedomainentry()
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgedomainidentifier.is_set
	|| ccontextmappingbridgedomainrowstatus.is_set
	|| ccontextmappingbridgedomainstoragetype.is_set;
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainidentifier.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainrowstatus.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainstoragetype.yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeDomainTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgedomainidentifier.is_set || is_set(ccontextmappingbridgedomainidentifier.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainidentifier.get_name_leafdata());
    if (ccontextmappingbridgedomainrowstatus.is_set || is_set(ccontextmappingbridgedomainrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainrowstatus.get_name_leafdata());
    if (ccontextmappingbridgedomainstoragetype.is_set || is_set(ccontextmappingbridgedomainstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus = value;
        ccontextmappingbridgedomainrowstatus.value_namespace = name_space;
        ccontextmappingbridgedomainrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype = value;
        ccontextmappingbridgedomainstoragetype.value_namespace = name_space;
        ccontextmappingbridgedomainstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainIdentifier")
    {
        ccontextmappingbridgedomainidentifier.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype.yfilter = yfilter;
    }
}

bool CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeDomainIdentifier" || name == "cContextMappingBridgeDomainRowStatus" || name == "cContextMappingBridgeDomainStorageType")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstancetable()
{
    yang_name = "cContextMappingBridgeInstanceTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB";
}

CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::~Ccontextmappingbridgeinstancetable()
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.size(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.size(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry>();
        c->parent = this;
        ccontextmappingbridgeinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappingbridgeinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeInstanceEntry")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::Ccontextmappingbridgeinstanceentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgeinstname{YType::str, "cContextMappingBridgeInstName"},
    ccontextmappingbridgeinstrowstatus{YType::enumeration, "cContextMappingBridgeInstRowStatus"},
    ccontextmappingbridgeinststoragetype{YType::enumeration, "cContextMappingBridgeInstStorageType"}
{
    yang_name = "cContextMappingBridgeInstanceEntry"; yang_parent_name = "cContextMappingBridgeInstanceTable";
}

CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::~Ccontextmappingbridgeinstanceentry()
{
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgeinstname.is_set
	|| ccontextmappingbridgeinstrowstatus.is_set
	|| ccontextmappingbridgeinststoragetype.is_set;
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstrowstatus.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinststoragetype.yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgeinstname.is_set || is_set(ccontextmappingbridgeinstname.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstname.get_name_leafdata());
    if (ccontextmappingbridgeinstrowstatus.is_set || is_set(ccontextmappingbridgeinstrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstrowstatus.get_name_leafdata());
    if (ccontextmappingbridgeinststoragetype.is_set || is_set(ccontextmappingbridgeinststoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinststoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus = value;
        ccontextmappingbridgeinstrowstatus.value_namespace = name_space;
        ccontextmappingbridgeinstrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype = value;
        ccontextmappingbridgeinststoragetype.value_namespace = name_space;
        ccontextmappingbridgeinststoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstName")
    {
        ccontextmappingbridgeinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype.yfilter = yfilter;
    }
}

bool CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeInstName" || name == "cContextMappingBridgeInstRowStatus" || name == "cContextMappingBridgeInstStorageType")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegrouptable()
{
    yang_name = "cContextMappingLicenseGroupTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB";
}

CiscoContextMappingMib::Ccontextmappinglicensegrouptable::~Ccontextmappinglicensegrouptable()
{
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::has_data() const
{
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.size(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.size(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappinglicensegrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupTable";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappinglicensegrouptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappinglicensegrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry>();
        c->parent = this;
        ccontextmappinglicensegroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappinglicensegrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccontextmappinglicensegroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoContextMappingMib::Ccontextmappinglicensegrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoContextMappingMib::Ccontextmappinglicensegrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingLicenseGroupEntry")
        return true;
    return false;
}

CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::Ccontextmappinglicensegroupentry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappinglicensegroupname{YType::str, "cContextMappingLicenseGroupName"},
    ccontextmappinglicensegrouprowstatus{YType::enumeration, "cContextMappingLicenseGroupRowStatus"},
    ccontextmappinglicensegroupstoragetype{YType::enumeration, "cContextMappingLicenseGroupStorageType"}
{
    yang_name = "cContextMappingLicenseGroupEntry"; yang_parent_name = "cContextMappingLicenseGroupTable";
}

CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::~Ccontextmappinglicensegroupentry()
{
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_data() const
{
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappinglicensegroupname.is_set
	|| ccontextmappinglicensegrouprowstatus.is_set
	|| ccontextmappinglicensegroupstoragetype.is_set;
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegrouprowstatus.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupstoragetype.yfilter);
}

std::string CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupEntry" <<"[cContextMappingVacmContextName='" <<ccontextmappingvacmcontextname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingLicenseGroupTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappinglicensegroupname.is_set || is_set(ccontextmappinglicensegroupname.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupname.get_name_leafdata());
    if (ccontextmappinglicensegrouprowstatus.is_set || is_set(ccontextmappinglicensegrouprowstatus.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegrouprowstatus.get_name_leafdata());
    if (ccontextmappinglicensegroupstoragetype.is_set || is_set(ccontextmappinglicensegroupstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus = value;
        ccontextmappinglicensegrouprowstatus.value_namespace = name_space;
        ccontextmappinglicensegrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype = value;
        ccontextmappinglicensegroupstoragetype.value_namespace = name_space;
        ccontextmappinglicensegroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupName")
    {
        ccontextmappinglicensegroupname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype.yfilter = yfilter;
    }
}

bool CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingLicenseGroupName" || name == "cContextMappingLicenseGroupRowStatus" || name == "cContextMappingLicenseGroupStorageType")
        return true;
    return false;
}


}
}

