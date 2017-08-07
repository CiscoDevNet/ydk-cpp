
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_MPLS_ID_STD_03_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_ID_STD_03_MIB {

CiscoIetfMplsIdStd03Mib::CiscoIetfMplsIdStd03Mib()
    :
    cmplsidobjects(std::make_shared<CiscoIetfMplsIdStd03Mib::Cmplsidobjects>())
{
    cmplsidobjects->parent = this;

    yang_name = "CISCO-IETF-MPLS-ID-STD-03-MIB"; yang_parent_name = "CISCO-IETF-MPLS-ID-STD-03-MIB";
}

CiscoIetfMplsIdStd03Mib::~CiscoIetfMplsIdStd03Mib()
{
}

bool CiscoIetfMplsIdStd03Mib::has_data() const
{
    return (cmplsidobjects !=  nullptr && cmplsidobjects->has_data());
}

bool CiscoIetfMplsIdStd03Mib::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsidobjects !=  nullptr && cmplsidobjects->has_operation());
}

std::string CiscoIetfMplsIdStd03Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-ID-STD-03-MIB:CISCO-IETF-MPLS-ID-STD-03-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsIdStd03Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfMplsIdStd03Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsIdObjects")
    {
        if(cmplsidobjects == nullptr)
        {
            cmplsidobjects = std::make_shared<CiscoIetfMplsIdStd03Mib::Cmplsidobjects>();
        }
        return cmplsidobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsIdStd03Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsidobjects != nullptr)
    {
        children["cmplsIdObjects"] = cmplsidobjects;
    }

    return children;
}

void CiscoIetfMplsIdStd03Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfMplsIdStd03Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIetfMplsIdStd03Mib::clone_ptr() const
{
    return std::make_shared<CiscoIetfMplsIdStd03Mib>();
}

std::string CiscoIetfMplsIdStd03Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfMplsIdStd03Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfMplsIdStd03Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfMplsIdStd03Mib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfMplsIdStd03Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsIdObjects")
        return true;
    return false;
}

CiscoIetfMplsIdStd03Mib::Cmplsidobjects::Cmplsidobjects()
    :
    cmplsglobalid{YType::str, "cmplsGlobalId"},
    cmplsicc{YType::str, "cmplsIcc"},
    cmplsnodeid{YType::uint32, "cmplsNodeId"}
{
    yang_name = "cmplsIdObjects"; yang_parent_name = "CISCO-IETF-MPLS-ID-STD-03-MIB";
}

CiscoIetfMplsIdStd03Mib::Cmplsidobjects::~Cmplsidobjects()
{
}

bool CiscoIetfMplsIdStd03Mib::Cmplsidobjects::has_data() const
{
    return cmplsglobalid.is_set
	|| cmplsicc.is_set
	|| cmplsnodeid.is_set;
}

bool CiscoIetfMplsIdStd03Mib::Cmplsidobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsglobalid.yfilter)
	|| ydk::is_set(cmplsicc.yfilter)
	|| ydk::is_set(cmplsnodeid.yfilter);
}

std::string CiscoIetfMplsIdStd03Mib::Cmplsidobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsIdObjects";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsIdStd03Mib::Cmplsidobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-ID-STD-03-MIB:CISCO-IETF-MPLS-ID-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsglobalid.is_set || is_set(cmplsglobalid.yfilter)) leaf_name_data.push_back(cmplsglobalid.get_name_leafdata());
    if (cmplsicc.is_set || is_set(cmplsicc.yfilter)) leaf_name_data.push_back(cmplsicc.get_name_leafdata());
    if (cmplsnodeid.is_set || is_set(cmplsnodeid.yfilter)) leaf_name_data.push_back(cmplsnodeid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsIdStd03Mib::Cmplsidobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsIdStd03Mib::Cmplsidobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsIdStd03Mib::Cmplsidobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsGlobalId")
    {
        cmplsglobalid = value;
        cmplsglobalid.value_namespace = name_space;
        cmplsglobalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsIcc")
    {
        cmplsicc = value;
        cmplsicc.value_namespace = name_space;
        cmplsicc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeId")
    {
        cmplsnodeid = value;
        cmplsnodeid.value_namespace = name_space;
        cmplsnodeid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfMplsIdStd03Mib::Cmplsidobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsGlobalId")
    {
        cmplsglobalid.yfilter = yfilter;
    }
    if(value_path == "cmplsIcc")
    {
        cmplsicc.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeId")
    {
        cmplsnodeid.yfilter = yfilter;
    }
}

bool CiscoIetfMplsIdStd03Mib::Cmplsidobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsGlobalId" || name == "cmplsIcc" || name == "cmplsNodeId")
        return true;
    return false;
}


}
}

