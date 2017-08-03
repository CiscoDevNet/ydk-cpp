
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_MPLS_TE_EXT_STD_03_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_TE_EXT_STD_03_MIB {

CiscoIetfMplsTeExtStd03Mib::CiscoIetfMplsTeExtStd03Mib()
    :
    cmplsnodeconfigtable(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable>())
	,cmplsnodeiccmaptable(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable>())
	,cmplsnodeipmaptable(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable>())
	,cmplstunnelexttable(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable>())
	,cmplstunnelreverseperftable(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable>())
{
    cmplsnodeconfigtable->parent = this;

    cmplsnodeiccmaptable->parent = this;

    cmplsnodeipmaptable->parent = this;

    cmplstunnelexttable->parent = this;

    cmplstunnelreverseperftable->parent = this;

    yang_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::~CiscoIetfMplsTeExtStd03Mib()
{
}

bool CiscoIetfMplsTeExtStd03Mib::has_data() const
{
    return (cmplsnodeconfigtable !=  nullptr && cmplsnodeconfigtable->has_data())
	|| (cmplsnodeiccmaptable !=  nullptr && cmplsnodeiccmaptable->has_data())
	|| (cmplsnodeipmaptable !=  nullptr && cmplsnodeipmaptable->has_data())
	|| (cmplstunnelexttable !=  nullptr && cmplstunnelexttable->has_data())
	|| (cmplstunnelreverseperftable !=  nullptr && cmplstunnelreverseperftable->has_data());
}

bool CiscoIetfMplsTeExtStd03Mib::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsnodeconfigtable !=  nullptr && cmplsnodeconfigtable->has_operation())
	|| (cmplsnodeiccmaptable !=  nullptr && cmplsnodeiccmaptable->has_operation())
	|| (cmplsnodeipmaptable !=  nullptr && cmplsnodeipmaptable->has_operation())
	|| (cmplstunnelexttable !=  nullptr && cmplstunnelexttable->has_operation())
	|| (cmplstunnelreverseperftable !=  nullptr && cmplstunnelreverseperftable->has_operation());
}

std::string CiscoIetfMplsTeExtStd03Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigTable")
    {
        if(cmplsnodeconfigtable == nullptr)
        {
            cmplsnodeconfigtable = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable>();
        }
        return cmplsnodeconfigtable;
    }

    if(child_yang_name == "cmplsNodeIccMapTable")
    {
        if(cmplsnodeiccmaptable == nullptr)
        {
            cmplsnodeiccmaptable = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable>();
        }
        return cmplsnodeiccmaptable;
    }

    if(child_yang_name == "cmplsNodeIpMapTable")
    {
        if(cmplsnodeipmaptable == nullptr)
        {
            cmplsnodeipmaptable = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable>();
        }
        return cmplsnodeipmaptable;
    }

    if(child_yang_name == "cmplsTunnelExtTable")
    {
        if(cmplstunnelexttable == nullptr)
        {
            cmplstunnelexttable = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable>();
        }
        return cmplstunnelexttable;
    }

    if(child_yang_name == "cmplsTunnelReversePerfTable")
    {
        if(cmplstunnelreverseperftable == nullptr)
        {
            cmplstunnelreverseperftable = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable>();
        }
        return cmplstunnelreverseperftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsnodeconfigtable != nullptr)
    {
        children["cmplsNodeConfigTable"] = cmplsnodeconfigtable;
    }

    if(cmplsnodeiccmaptable != nullptr)
    {
        children["cmplsNodeIccMapTable"] = cmplsnodeiccmaptable;
    }

    if(cmplsnodeipmaptable != nullptr)
    {
        children["cmplsNodeIpMapTable"] = cmplsnodeipmaptable;
    }

    if(cmplstunnelexttable != nullptr)
    {
        children["cmplsTunnelExtTable"] = cmplstunnelexttable;
    }

    if(cmplstunnelreverseperftable != nullptr)
    {
        children["cmplsTunnelReversePerfTable"] = cmplstunnelreverseperftable;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::clone_ptr() const
{
    return std::make_shared<CiscoIetfMplsTeExtStd03Mib>();
}

std::string CiscoIetfMplsTeExtStd03Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfMplsTeExtStd03Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfMplsTeExtStd03Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfMplsTeExtStd03Mib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfMplsTeExtStd03Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigTable" || name == "cmplsNodeIccMapTable" || name == "cmplsNodeIpMapTable" || name == "cmplsTunnelExtTable" || name == "cmplsTunnelReversePerfTable")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigtable()
{
    yang_name = "cmplsNodeConfigTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::~Cmplsnodeconfigtable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeconfigentry.size(); index++)
    {
        if(cmplsnodeconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeconfigentry.size(); index++)
    {
        if(cmplsnodeconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigEntry")
    {
        for(auto const & c : cmplsnodeconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry>();
        c->parent = this;
        cmplsnodeconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigEntry")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::Cmplsnodeconfigentry()
    :
    cmplsnodeconfiglocalid{YType::uint32, "cmplsNodeConfigLocalId"},
    cmplsnodeconfigglobalid{YType::str, "cmplsNodeConfigGlobalId"},
    cmplsnodeconfigiccid{YType::str, "cmplsNodeConfigIccId"},
    cmplsnodeconfignodeid{YType::uint32, "cmplsNodeConfigNodeId"},
    cmplsnodeconfigrowstatus{YType::enumeration, "cmplsNodeConfigRowStatus"},
    cmplsnodeconfigstoragetype{YType::enumeration, "cmplsNodeConfigStorageType"}
{
    yang_name = "cmplsNodeConfigEntry"; yang_parent_name = "cmplsNodeConfigTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::~Cmplsnodeconfigentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::has_data() const
{
    return cmplsnodeconfiglocalid.is_set
	|| cmplsnodeconfigglobalid.is_set
	|| cmplsnodeconfigiccid.is_set
	|| cmplsnodeconfignodeid.is_set
	|| cmplsnodeconfigrowstatus.is_set
	|| cmplsnodeconfigstoragetype.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeconfiglocalid.yfilter)
	|| ydk::is_set(cmplsnodeconfigglobalid.yfilter)
	|| ydk::is_set(cmplsnodeconfigiccid.yfilter)
	|| ydk::is_set(cmplsnodeconfignodeid.yfilter)
	|| ydk::is_set(cmplsnodeconfigrowstatus.yfilter)
	|| ydk::is_set(cmplsnodeconfigstoragetype.yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigEntry" <<"[cmplsNodeConfigLocalId='" <<cmplsnodeconfiglocalid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeconfiglocalid.is_set || is_set(cmplsnodeconfiglocalid.yfilter)) leaf_name_data.push_back(cmplsnodeconfiglocalid.get_name_leafdata());
    if (cmplsnodeconfigglobalid.is_set || is_set(cmplsnodeconfigglobalid.yfilter)) leaf_name_data.push_back(cmplsnodeconfigglobalid.get_name_leafdata());
    if (cmplsnodeconfigiccid.is_set || is_set(cmplsnodeconfigiccid.yfilter)) leaf_name_data.push_back(cmplsnodeconfigiccid.get_name_leafdata());
    if (cmplsnodeconfignodeid.is_set || is_set(cmplsnodeconfignodeid.yfilter)) leaf_name_data.push_back(cmplsnodeconfignodeid.get_name_leafdata());
    if (cmplsnodeconfigrowstatus.is_set || is_set(cmplsnodeconfigrowstatus.yfilter)) leaf_name_data.push_back(cmplsnodeconfigrowstatus.get_name_leafdata());
    if (cmplsnodeconfigstoragetype.is_set || is_set(cmplsnodeconfigstoragetype.yfilter)) leaf_name_data.push_back(cmplsnodeconfigstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeConfigLocalId")
    {
        cmplsnodeconfiglocalid = value;
        cmplsnodeconfiglocalid.value_namespace = name_space;
        cmplsnodeconfiglocalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigGlobalId")
    {
        cmplsnodeconfigglobalid = value;
        cmplsnodeconfigglobalid.value_namespace = name_space;
        cmplsnodeconfigglobalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigIccId")
    {
        cmplsnodeconfigiccid = value;
        cmplsnodeconfigiccid.value_namespace = name_space;
        cmplsnodeconfigiccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigNodeId")
    {
        cmplsnodeconfignodeid = value;
        cmplsnodeconfignodeid.value_namespace = name_space;
        cmplsnodeconfignodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigRowStatus")
    {
        cmplsnodeconfigrowstatus = value;
        cmplsnodeconfigrowstatus.value_namespace = name_space;
        cmplsnodeconfigrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigStorageType")
    {
        cmplsnodeconfigstoragetype = value;
        cmplsnodeconfigstoragetype.value_namespace = name_space;
        cmplsnodeconfigstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeConfigLocalId")
    {
        cmplsnodeconfiglocalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigGlobalId")
    {
        cmplsnodeconfigglobalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigIccId")
    {
        cmplsnodeconfigiccid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigNodeId")
    {
        cmplsnodeconfignodeid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigRowStatus")
    {
        cmplsnodeconfigrowstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigStorageType")
    {
        cmplsnodeconfigstoragetype.yfilter = yfilter;
    }
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigLocalId" || name == "cmplsNodeConfigGlobalId" || name == "cmplsNodeConfigIccId" || name == "cmplsNodeConfigNodeId" || name == "cmplsNodeConfigRowStatus" || name == "cmplsNodeConfigStorageType")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmaptable()
{
    yang_name = "cmplsNodeIpMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::~Cmplsnodeipmaptable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeipmapentry.size(); index++)
    {
        if(cmplsnodeipmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeipmapentry.size(); index++)
    {
        if(cmplsnodeipmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIpMapEntry")
    {
        for(auto const & c : cmplsnodeipmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry>();
        c->parent = this;
        cmplsnodeipmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeipmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIpMapEntry")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::Cmplsnodeipmapentry()
    :
    cmplsnodeipmapglobalid{YType::str, "cmplsNodeIpMapGlobalId"},
    cmplsnodeipmapnodeid{YType::uint32, "cmplsNodeIpMapNodeId"},
    cmplsnodeipmaplocalid{YType::uint32, "cmplsNodeIpMapLocalId"}
{
    yang_name = "cmplsNodeIpMapEntry"; yang_parent_name = "cmplsNodeIpMapTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::~Cmplsnodeipmapentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::has_data() const
{
    return cmplsnodeipmapglobalid.is_set
	|| cmplsnodeipmapnodeid.is_set
	|| cmplsnodeipmaplocalid.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeipmapglobalid.yfilter)
	|| ydk::is_set(cmplsnodeipmapnodeid.yfilter)
	|| ydk::is_set(cmplsnodeipmaplocalid.yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapEntry" <<"[cmplsNodeIpMapGlobalId='" <<cmplsnodeipmapglobalid <<"']" <<"[cmplsNodeIpMapNodeId='" <<cmplsnodeipmapnodeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIpMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeipmapglobalid.is_set || is_set(cmplsnodeipmapglobalid.yfilter)) leaf_name_data.push_back(cmplsnodeipmapglobalid.get_name_leafdata());
    if (cmplsnodeipmapnodeid.is_set || is_set(cmplsnodeipmapnodeid.yfilter)) leaf_name_data.push_back(cmplsnodeipmapnodeid.get_name_leafdata());
    if (cmplsnodeipmaplocalid.is_set || is_set(cmplsnodeipmaplocalid.yfilter)) leaf_name_data.push_back(cmplsnodeipmaplocalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeIpMapGlobalId")
    {
        cmplsnodeipmapglobalid = value;
        cmplsnodeipmapglobalid.value_namespace = name_space;
        cmplsnodeipmapglobalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIpMapNodeId")
    {
        cmplsnodeipmapnodeid = value;
        cmplsnodeipmapnodeid.value_namespace = name_space;
        cmplsnodeipmapnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIpMapLocalId")
    {
        cmplsnodeipmaplocalid = value;
        cmplsnodeipmaplocalid.value_namespace = name_space;
        cmplsnodeipmaplocalid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeIpMapGlobalId")
    {
        cmplsnodeipmapglobalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIpMapNodeId")
    {
        cmplsnodeipmapnodeid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIpMapLocalId")
    {
        cmplsnodeipmaplocalid.yfilter = yfilter;
    }
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIpMapGlobalId" || name == "cmplsNodeIpMapNodeId" || name == "cmplsNodeIpMapLocalId")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmaptable()
{
    yang_name = "cmplsNodeIccMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::~Cmplsnodeiccmaptable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeiccmapentry.size(); index++)
    {
        if(cmplsnodeiccmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeiccmapentry.size(); index++)
    {
        if(cmplsnodeiccmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIccMapEntry")
    {
        for(auto const & c : cmplsnodeiccmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry>();
        c->parent = this;
        cmplsnodeiccmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeiccmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIccMapEntry")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::Cmplsnodeiccmapentry()
    :
    cmplsnodeiccmapiccid{YType::str, "cmplsNodeIccMapIccId"},
    cmplsnodeiccmaplocalid{YType::uint32, "cmplsNodeIccMapLocalId"}
{
    yang_name = "cmplsNodeIccMapEntry"; yang_parent_name = "cmplsNodeIccMapTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::~Cmplsnodeiccmapentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::has_data() const
{
    return cmplsnodeiccmapiccid.is_set
	|| cmplsnodeiccmaplocalid.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeiccmapiccid.yfilter)
	|| ydk::is_set(cmplsnodeiccmaplocalid.yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapEntry" <<"[cmplsNodeIccMapIccId='" <<cmplsnodeiccmapiccid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIccMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeiccmapiccid.is_set || is_set(cmplsnodeiccmapiccid.yfilter)) leaf_name_data.push_back(cmplsnodeiccmapiccid.get_name_leafdata());
    if (cmplsnodeiccmaplocalid.is_set || is_set(cmplsnodeiccmaplocalid.yfilter)) leaf_name_data.push_back(cmplsnodeiccmaplocalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeIccMapIccId")
    {
        cmplsnodeiccmapiccid = value;
        cmplsnodeiccmapiccid.value_namespace = name_space;
        cmplsnodeiccmapiccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIccMapLocalId")
    {
        cmplsnodeiccmaplocalid = value;
        cmplsnodeiccmaplocalid.value_namespace = name_space;
        cmplsnodeiccmaplocalid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeIccMapIccId")
    {
        cmplsnodeiccmapiccid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIccMapLocalId")
    {
        cmplsnodeiccmaplocalid.yfilter = yfilter;
    }
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIccMapIccId" || name == "cmplsNodeIccMapLocalId")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelexttable()
{
    yang_name = "cmplsTunnelExtTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::~Cmplstunnelexttable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::has_data() const
{
    for (std::size_t index=0; index<cmplstunnelextentry.size(); index++)
    {
        if(cmplstunnelextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelextentry.size(); index++)
    {
        if(cmplstunnelextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelExtEntry")
    {
        for(auto const & c : cmplstunnelextentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry>();
        c->parent = this;
        cmplstunnelextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplstunnelextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsTunnelExtEntry")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::Cmplstunnelextentry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunnelextdesttnlindex{YType::uint32, "cmplsTunnelExtDestTnlIndex"},
    cmplstunnelextdesttnllspindex{YType::uint32, "cmplsTunnelExtDestTnlLspIndex"},
    cmplstunnelextdesttnlvalid{YType::boolean, "cmplsTunnelExtDestTnlValid"},
    cmplstunnelextoppositedirtnlvalid{YType::boolean, "cmplsTunnelExtOppositeDirTnlValid"},
    cmplstunneloppositedirptr{YType::str, "cmplsTunnelOppositeDirPtr"}
{
    yang_name = "cmplsTunnelExtEntry"; yang_parent_name = "cmplsTunnelExtTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::~Cmplstunnelextentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::has_data() const
{
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunnelextdesttnlindex.is_set
	|| cmplstunnelextdesttnllspindex.is_set
	|| cmplstunnelextdesttnlvalid.is_set
	|| cmplstunnelextoppositedirtnlvalid.is_set
	|| cmplstunneloppositedirptr.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnlindex.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnllspindex.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnlvalid.yfilter)
	|| ydk::is_set(cmplstunnelextoppositedirtnlvalid.yfilter)
	|| ydk::is_set(cmplstunneloppositedirptr.yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunnelextdesttnlindex.is_set || is_set(cmplstunnelextdesttnlindex.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnlindex.get_name_leafdata());
    if (cmplstunnelextdesttnllspindex.is_set || is_set(cmplstunnelextdesttnllspindex.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnllspindex.get_name_leafdata());
    if (cmplstunnelextdesttnlvalid.is_set || is_set(cmplstunnelextdesttnlvalid.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnlvalid.get_name_leafdata());
    if (cmplstunnelextoppositedirtnlvalid.is_set || is_set(cmplstunnelextoppositedirtnlvalid.yfilter)) leaf_name_data.push_back(cmplstunnelextoppositedirtnlvalid.get_name_leafdata());
    if (cmplstunneloppositedirptr.is_set || is_set(cmplstunneloppositedirptr.yfilter)) leaf_name_data.push_back(cmplstunneloppositedirptr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
        mplstunnelindex.value_namespace = name_space;
        mplstunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
        mplstunnelinstance.value_namespace = name_space;
        mplstunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
        mplstunnelingresslsrid.value_namespace = name_space;
        mplstunnelingresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
        mplstunnelegresslsrid.value_namespace = name_space;
        mplstunnelegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlIndex")
    {
        cmplstunnelextdesttnlindex = value;
        cmplstunnelextdesttnlindex.value_namespace = name_space;
        cmplstunnelextdesttnlindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlLspIndex")
    {
        cmplstunnelextdesttnllspindex = value;
        cmplstunnelextdesttnllspindex.value_namespace = name_space;
        cmplstunnelextdesttnllspindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlValid")
    {
        cmplstunnelextdesttnlvalid = value;
        cmplstunnelextdesttnlvalid.value_namespace = name_space;
        cmplstunnelextdesttnlvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtOppositeDirTnlValid")
    {
        cmplstunnelextoppositedirtnlvalid = value;
        cmplstunnelextoppositedirtnlvalid.value_namespace = name_space;
        cmplstunnelextoppositedirtnlvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelOppositeDirPtr")
    {
        cmplstunneloppositedirptr = value;
        cmplstunneloppositedirptr.value_namespace = name_space;
        cmplstunneloppositedirptr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlIndex")
    {
        cmplstunnelextdesttnlindex.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlLspIndex")
    {
        cmplstunnelextdesttnllspindex.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlValid")
    {
        cmplstunnelextdesttnlvalid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtOppositeDirTnlValid")
    {
        cmplstunnelextoppositedirtnlvalid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelOppositeDirPtr")
    {
        cmplstunneloppositedirptr.yfilter = yfilter;
    }
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "cmplsTunnelExtDestTnlIndex" || name == "cmplsTunnelExtDestTnlLspIndex" || name == "cmplsTunnelExtDestTnlValid" || name == "cmplsTunnelExtOppositeDirTnlValid" || name == "cmplsTunnelOppositeDirPtr")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperftable()
{
    yang_name = "cmplsTunnelReversePerfTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::~Cmplstunnelreverseperftable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::has_data() const
{
    for (std::size_t index=0; index<cmplstunnelreverseperfentry.size(); index++)
    {
        if(cmplstunnelreverseperfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelreverseperfentry.size(); index++)
    {
        if(cmplstunnelreverseperfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelReversePerfEntry")
    {
        for(auto const & c : cmplstunnelreverseperfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry>();
        c->parent = this;
        cmplstunnelreverseperfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplstunnelreverseperfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsTunnelReversePerfEntry")
        return true;
    return false;
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::Cmplstunnelreverseperfentry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunnelreverseperfbytes{YType::uint32, "cmplsTunnelReversePerfBytes"},
    cmplstunnelreverseperferrors{YType::uint32, "cmplsTunnelReversePerfErrors"},
    cmplstunnelreverseperfhcbytes{YType::uint64, "cmplsTunnelReversePerfHCBytes"},
    cmplstunnelreverseperfhcpackets{YType::uint64, "cmplsTunnelReversePerfHCPackets"},
    cmplstunnelreverseperfpackets{YType::uint32, "cmplsTunnelReversePerfPackets"}
{
    yang_name = "cmplsTunnelReversePerfEntry"; yang_parent_name = "cmplsTunnelReversePerfTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::~Cmplstunnelreverseperfentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::has_data() const
{
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunnelreverseperfbytes.is_set
	|| cmplstunnelreverseperferrors.is_set
	|| cmplstunnelreverseperfhcbytes.is_set
	|| cmplstunnelreverseperfhcpackets.is_set
	|| cmplstunnelreverseperfpackets.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfbytes.yfilter)
	|| ydk::is_set(cmplstunnelreverseperferrors.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfhcbytes.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfhcpackets.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfpackets.yfilter);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelReversePerfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunnelreverseperfbytes.is_set || is_set(cmplstunnelreverseperfbytes.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfbytes.get_name_leafdata());
    if (cmplstunnelreverseperferrors.is_set || is_set(cmplstunnelreverseperferrors.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperferrors.get_name_leafdata());
    if (cmplstunnelreverseperfhcbytes.is_set || is_set(cmplstunnelreverseperfhcbytes.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfhcbytes.get_name_leafdata());
    if (cmplstunnelreverseperfhcpackets.is_set || is_set(cmplstunnelreverseperfhcpackets.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfhcpackets.get_name_leafdata());
    if (cmplstunnelreverseperfpackets.is_set || is_set(cmplstunnelreverseperfpackets.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
        mplstunnelindex.value_namespace = name_space;
        mplstunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
        mplstunnelinstance.value_namespace = name_space;
        mplstunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
        mplstunnelingresslsrid.value_namespace = name_space;
        mplstunnelingresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
        mplstunnelegresslsrid.value_namespace = name_space;
        mplstunnelegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfBytes")
    {
        cmplstunnelreverseperfbytes = value;
        cmplstunnelreverseperfbytes.value_namespace = name_space;
        cmplstunnelreverseperfbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfErrors")
    {
        cmplstunnelreverseperferrors = value;
        cmplstunnelreverseperferrors.value_namespace = name_space;
        cmplstunnelreverseperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfHCBytes")
    {
        cmplstunnelreverseperfhcbytes = value;
        cmplstunnelreverseperfhcbytes.value_namespace = name_space;
        cmplstunnelreverseperfhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfHCPackets")
    {
        cmplstunnelreverseperfhcpackets = value;
        cmplstunnelreverseperfhcpackets.value_namespace = name_space;
        cmplstunnelreverseperfhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfPackets")
    {
        cmplstunnelreverseperfpackets = value;
        cmplstunnelreverseperfpackets.value_namespace = name_space;
        cmplstunnelreverseperfpackets.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfBytes")
    {
        cmplstunnelreverseperfbytes.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfErrors")
    {
        cmplstunnelreverseperferrors.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfHCBytes")
    {
        cmplstunnelreverseperfhcbytes.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfHCPackets")
    {
        cmplstunnelreverseperfhcpackets.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfPackets")
    {
        cmplstunnelreverseperfpackets.yfilter = yfilter;
    }
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "cmplsTunnelReversePerfBytes" || name == "cmplsTunnelReversePerfErrors" || name == "cmplsTunnelReversePerfHCBytes" || name == "cmplsTunnelReversePerfHCPackets" || name == "cmplsTunnelReversePerfPackets")
        return true;
    return false;
}


}
}

