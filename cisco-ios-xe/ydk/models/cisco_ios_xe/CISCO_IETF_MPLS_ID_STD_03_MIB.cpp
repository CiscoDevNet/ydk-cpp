
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_MPLS_ID_STD_03_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_ID_STD_03_MIB {

CISCOIETFMPLSIDSTD03MIB::CISCOIETFMPLSIDSTD03MIB()
    :
    cmplsidobjects(std::make_shared<CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects>())
{
    cmplsidobjects->parent = this;

    yang_name = "CISCO-IETF-MPLS-ID-STD-03-MIB"; yang_parent_name = "CISCO-IETF-MPLS-ID-STD-03-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFMPLSIDSTD03MIB::~CISCOIETFMPLSIDSTD03MIB()
{
}

bool CISCOIETFMPLSIDSTD03MIB::has_data() const
{
    if (is_presence_container) return true;
    return (cmplsidobjects !=  nullptr && cmplsidobjects->has_data());
}

bool CISCOIETFMPLSIDSTD03MIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsidobjects !=  nullptr && cmplsidobjects->has_operation());
}

std::string CISCOIETFMPLSIDSTD03MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-ID-STD-03-MIB:CISCO-IETF-MPLS-ID-STD-03-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSIDSTD03MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFMPLSIDSTD03MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsIdObjects")
    {
        if(cmplsidobjects == nullptr)
        {
            cmplsidobjects = std::make_shared<CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects>();
        }
        return cmplsidobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFMPLSIDSTD03MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cmplsidobjects != nullptr)
    {
        children["cmplsIdObjects"] = cmplsidobjects;
    }

    return children;
}

void CISCOIETFMPLSIDSTD03MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSIDSTD03MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFMPLSIDSTD03MIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFMPLSIDSTD03MIB>();
}

std::string CISCOIETFMPLSIDSTD03MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFMPLSIDSTD03MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFMPLSIDSTD03MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFMPLSIDSTD03MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFMPLSIDSTD03MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsIdObjects")
        return true;
    return false;
}

CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::CmplsIdObjects()
    :
    cmplsglobalid{YType::str, "cmplsGlobalId"},
    cmplsicc{YType::str, "cmplsIcc"},
    cmplsnodeid{YType::uint32, "cmplsNodeId"}
{

    yang_name = "cmplsIdObjects"; yang_parent_name = "CISCO-IETF-MPLS-ID-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::~CmplsIdObjects()
{
}

bool CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::has_data() const
{
    if (is_presence_container) return true;
    return cmplsglobalid.is_set
	|| cmplsicc.is_set
	|| cmplsnodeid.is_set;
}

bool CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsglobalid.yfilter)
	|| ydk::is_set(cmplsicc.yfilter)
	|| ydk::is_set(cmplsnodeid.yfilter);
}

std::string CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-ID-STD-03-MIB:CISCO-IETF-MPLS-ID-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsIdObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsglobalid.is_set || is_set(cmplsglobalid.yfilter)) leaf_name_data.push_back(cmplsglobalid.get_name_leafdata());
    if (cmplsicc.is_set || is_set(cmplsicc.yfilter)) leaf_name_data.push_back(cmplsicc.get_name_leafdata());
    if (cmplsnodeid.is_set || is_set(cmplsnodeid.yfilter)) leaf_name_data.push_back(cmplsnodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFMPLSIDSTD03MIB::CmplsIdObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsGlobalId" || name == "cmplsIcc" || name == "cmplsNodeId")
        return true;
    return false;
}


}
}

