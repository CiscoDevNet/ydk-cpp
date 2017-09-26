
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pfm_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfm_oper {

PlatformFaultManager::PlatformFaultManager()
    :
    exclude(std::make_shared<PlatformFaultManager::Exclude>())
	,racks(std::make_shared<PlatformFaultManager::Racks>())
{
    exclude->parent = this;
    racks->parent = this;

    yang_name = "platform-fault-manager"; yang_parent_name = "Cisco-IOS-XR-pfm-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformFaultManager::~PlatformFaultManager()
{
}

bool PlatformFaultManager::has_data() const
{
    return (exclude !=  nullptr && exclude->has_data())
	|| (racks !=  nullptr && racks->has_data());
}

bool PlatformFaultManager::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation())
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformFaultManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<PlatformFaultManager::Exclude>();
        }
        return exclude;
    }

    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<PlatformFaultManager::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void PlatformFaultManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformFaultManager::clone_ptr() const
{
    return std::make_shared<PlatformFaultManager>();
}

std::string PlatformFaultManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformFaultManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformFaultManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformFaultManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformFaultManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "racks")
        return true;
    return false;
}

PlatformFaultManager::Exclude::Exclude()
    :
    fault_type1s(std::make_shared<PlatformFaultManager::Exclude::FaultType1S>())
{
    fault_type1s->parent = this;

    yang_name = "exclude"; yang_parent_name = "platform-fault-manager"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformFaultManager::Exclude::~Exclude()
{
}

bool PlatformFaultManager::Exclude::has_data() const
{
    return (fault_type1s !=  nullptr && fault_type1s->has_data());
}

bool PlatformFaultManager::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| (fault_type1s !=  nullptr && fault_type1s->has_operation());
}

std::string PlatformFaultManager::Exclude::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformFaultManager::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type1s")
    {
        if(fault_type1s == nullptr)
        {
            fault_type1s = std::make_shared<PlatformFaultManager::Exclude::FaultType1S>();
        }
        return fault_type1s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_type1s != nullptr)
    {
        children["fault-type1s"] = fault_type1s;
    }

    return children;
}

void PlatformFaultManager::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type1s")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1S()
{

    yang_name = "fault-type1s"; yang_parent_name = "exclude"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformFaultManager::Exclude::FaultType1S::~FaultType1S()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::has_data() const
{
    for (std::size_t index=0; index<fault_type1.size(); index++)
    {
        if(fault_type1[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::has_operation() const
{
    for (std::size_t index=0; index<fault_type1.size(); index++)
    {
        if(fault_type1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager/exclude/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformFaultManager::Exclude::FaultType1S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type1s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type1")
    {
        for(auto const & c : fault_type1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1>();
        c->parent = this;
        fault_type1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fault_type1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type1")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType1()
    :
    hw_fault_type1{YType::str, "hw-fault-type1"}
    	,
    fault_type2s(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S>())
	,racks(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks>())
{
    fault_type2s->parent = this;
    racks->parent = this;

    yang_name = "fault-type1"; yang_parent_name = "fault-type1s"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::~FaultType1()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::has_data() const
{
    return hw_fault_type1.is_set
	|| (fault_type2s !=  nullptr && fault_type2s->has_data())
	|| (racks !=  nullptr && racks->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type1.yfilter)
	|| (fault_type2s !=  nullptr && fault_type2s->has_operation())
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager/exclude/fault-type1s/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type1" <<"[hw-fault-type1='" <<hw_fault_type1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type1.is_set || is_set(hw_fault_type1.yfilter)) leaf_name_data.push_back(hw_fault_type1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type2s")
    {
        if(fault_type2s == nullptr)
        {
            fault_type2s = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S>();
        }
        return fault_type2s;
    }

    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_type2s != nullptr)
    {
        children["fault-type2s"] = fault_type2s;
    }

    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type1")
    {
        hw_fault_type1 = value;
        hw_fault_type1.value_namespace = name_space;
        hw_fault_type1.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type1")
    {
        hw_fault_type1.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type2s" || name == "racks" || name == "hw-fault-type1")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2S()
{

    yang_name = "fault-type2s"; yang_parent_name = "fault-type1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::~FaultType2S()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::has_data() const
{
    for (std::size_t index=0; index<fault_type2.size(); index++)
    {
        if(fault_type2[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::has_operation() const
{
    for (std::size_t index=0; index<fault_type2.size(); index++)
    {
        if(fault_type2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type2s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type2")
    {
        for(auto const & c : fault_type2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2>();
        c->parent = this;
        fault_type2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fault_type2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type2")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType2()
    :
    hw_fault_type2{YType::str, "hw-fault-type2"}
    	,
    fault_type3s(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S>())
	,racks(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks>())
{
    fault_type3s->parent = this;
    racks->parent = this;

    yang_name = "fault-type2"; yang_parent_name = "fault-type2s"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::~FaultType2()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::has_data() const
{
    return hw_fault_type2.is_set
	|| (fault_type3s !=  nullptr && fault_type3s->has_data())
	|| (racks !=  nullptr && racks->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type2.yfilter)
	|| (fault_type3s !=  nullptr && fault_type3s->has_operation())
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type2" <<"[hw-fault-type2='" <<hw_fault_type2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type2.is_set || is_set(hw_fault_type2.yfilter)) leaf_name_data.push_back(hw_fault_type2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type3s")
    {
        if(fault_type3s == nullptr)
        {
            fault_type3s = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S>();
        }
        return fault_type3s;
    }

    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_type3s != nullptr)
    {
        children["fault-type3s"] = fault_type3s;
    }

    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type2")
    {
        hw_fault_type2 = value;
        hw_fault_type2.value_namespace = name_space;
        hw_fault_type2.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type2")
    {
        hw_fault_type2.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type3s" || name == "racks" || name == "hw-fault-type2")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3S()
{

    yang_name = "fault-type3s"; yang_parent_name = "fault-type2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::~FaultType3S()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::has_data() const
{
    for (std::size_t index=0; index<fault_type3.size(); index++)
    {
        if(fault_type3[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::has_operation() const
{
    for (std::size_t index=0; index<fault_type3.size(); index++)
    {
        if(fault_type3[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type3s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type3")
    {
        for(auto const & c : fault_type3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3>();
        c->parent = this;
        fault_type3.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fault_type3)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type3")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::FaultType3()
    :
    hw_fault_type3{YType::str, "hw-fault-type3"}
    	,
    racks(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks>())
{
    racks->parent = this;

    yang_name = "fault-type3"; yang_parent_name = "fault-type3s"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::~FaultType3()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::has_data() const
{
    return hw_fault_type3.is_set
	|| (racks !=  nullptr && racks->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type3.yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type3" <<"[hw-fault-type3='" <<hw_fault_type3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type3.is_set || is_set(hw_fault_type3.yfilter)) leaf_name_data.push_back(hw_fault_type3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type3")
    {
        hw_fault_type3 = value;
        hw_fault_type3.value_namespace = name_space;
        hw_fault_type3.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type3")
    {
        hw_fault_type3.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks" || name == "hw-fault-type3")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Racks()
{

    yang_name = "racks"; yang_parent_name = "fault-type3"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::~Racks()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Rack()
    :
    rack{YType::int32, "rack"}
    	,
    slots(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::~Rack()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::has_data() const
{
    return rack.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack='" <<rack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::~Slots()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::Slot()
    :
    slot{YType::str, "slot"}
    	,
    fault_summary(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary>())
	,hardware_fault_devices(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices>())
{
    fault_summary->parent = this;
    hardware_fault_devices->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::~Slot()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::has_data() const
{
    return slot.is_set
	|| (fault_summary !=  nullptr && fault_summary->has_data())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| (fault_summary !=  nullptr && fault_summary->has_operation())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-summary")
    {
        if(fault_summary == nullptr)
        {
            fault_summary = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary>();
        }
        return fault_summary;
    }

    if(child_yang_name == "hardware-fault-devices")
    {
        if(hardware_fault_devices == nullptr)
        {
            hardware_fault_devices = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices>();
        }
        return hardware_fault_devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_summary != nullptr)
    {
        children["fault-summary"] = fault_summary;
    }

    if(hardware_fault_devices != nullptr)
    {
        children["hardware-fault-devices"] = hardware_fault_devices;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-summary" || name == "hardware-fault-devices" || name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::FaultSummary()
    :
    severity_critical_count{YType::int32, "severity-critical-count"},
    severity_emergency_or_alert_count{YType::int32, "severity-emergency-or-alert-count"},
    severity_error_count{YType::int32, "severity-error-count"},
    total{YType::int32, "total"}
{

    yang_name = "fault-summary"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::~FaultSummary()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::has_data() const
{
    return severity_critical_count.is_set
	|| severity_emergency_or_alert_count.is_set
	|| severity_error_count.is_set
	|| total.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity_critical_count.yfilter)
	|| ydk::is_set(severity_emergency_or_alert_count.yfilter)
	|| ydk::is_set(severity_error_count.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_critical_count.is_set || is_set(severity_critical_count.yfilter)) leaf_name_data.push_back(severity_critical_count.get_name_leafdata());
    if (severity_emergency_or_alert_count.is_set || is_set(severity_emergency_or_alert_count.yfilter)) leaf_name_data.push_back(severity_emergency_or_alert_count.get_name_leafdata());
    if (severity_error_count.is_set || is_set(severity_error_count.yfilter)) leaf_name_data.push_back(severity_error_count.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count = value;
        severity_critical_count.value_namespace = name_space;
        severity_critical_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count = value;
        severity_emergency_or_alert_count.value_namespace = name_space;
        severity_emergency_or_alert_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count = value;
        severity_error_count.value_namespace = name_space;
        severity_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count.yfilter = yfilter;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count.yfilter = yfilter;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::FaultSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity-critical-count" || name == "severity-emergency-or-alert-count" || name == "severity-error-count" || name == "total")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevices()
{

    yang_name = "hardware-fault-devices"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::~HardwareFaultDevices()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-device")
    {
        for(auto const & c : hardware_fault_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice>();
        c->parent = this;
        hardware_fault_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultDevice()
    :
    hw_fault_device{YType::str, "hw-fault-device"}
{

    yang_name = "hardware-fault-device"; yang_parent_name = "hardware-fault-devices"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::~HardwareFaultDevice()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_data())
            return true;
    }
    return hw_fault_device.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_device.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-device" <<"[hw-fault-device='" <<hw_fault_device <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_device.is_set || is_set(hw_fault_device.yfilter)) leaf_name_data.push_back(hw_fault_device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-type")
    {
        for(auto const & c : hardware_fault_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType>();
        c->parent = this;
        hardware_fault_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device = value;
        hw_fault_device.value_namespace = name_space;
        hw_fault_device.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-type" || name == "hw-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::HardwareFaultType()
    :
    hw_fault_type{YType::str, "hw-fault-type"},
    condition_description{YType::str, "condition-description"},
    condition_name{YType::str, "condition-name"},
    condition_raised_timestamp{YType::str, "condition-raised-timestamp"},
    condition_severity{YType::str, "condition-severity"},
    device_description{YType::str, "device-description"},
    device_key{YType::str, "device-key"},
    device_version{YType::int32, "device-version"},
    process_id{YType::int32, "process-id"}
{

    yang_name = "hardware-fault-type"; yang_parent_name = "hardware-fault-device"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::~HardwareFaultType()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_data() const
{
    return hw_fault_type.is_set
	|| condition_description.is_set
	|| condition_name.is_set
	|| condition_raised_timestamp.is_set
	|| condition_severity.is_set
	|| device_description.is_set
	|| device_key.is_set
	|| device_version.is_set
	|| process_id.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type.yfilter)
	|| ydk::is_set(condition_description.yfilter)
	|| ydk::is_set(condition_name.yfilter)
	|| ydk::is_set(condition_raised_timestamp.yfilter)
	|| ydk::is_set(condition_severity.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(device_key.yfilter)
	|| ydk::is_set(device_version.yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-type" <<"[hw-fault-type='" <<hw_fault_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type.is_set || is_set(hw_fault_type.yfilter)) leaf_name_data.push_back(hw_fault_type.get_name_leafdata());
    if (condition_description.is_set || is_set(condition_description.yfilter)) leaf_name_data.push_back(condition_description.get_name_leafdata());
    if (condition_name.is_set || is_set(condition_name.yfilter)) leaf_name_data.push_back(condition_name.get_name_leafdata());
    if (condition_raised_timestamp.is_set || is_set(condition_raised_timestamp.yfilter)) leaf_name_data.push_back(condition_raised_timestamp.get_name_leafdata());
    if (condition_severity.is_set || is_set(condition_severity.yfilter)) leaf_name_data.push_back(condition_severity.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_key.is_set || is_set(device_key.yfilter)) leaf_name_data.push_back(device_key.get_name_leafdata());
    if (device_version.is_set || is_set(device_version.yfilter)) leaf_name_data.push_back(device_version.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type = value;
        hw_fault_type.value_namespace = name_space;
        hw_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-description")
    {
        condition_description = value;
        condition_description.value_namespace = name_space;
        condition_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-name")
    {
        condition_name = value;
        condition_name.value_namespace = name_space;
        condition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp = value;
        condition_raised_timestamp.value_namespace = name_space;
        condition_raised_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-severity")
    {
        condition_severity = value;
        condition_severity.value_namespace = name_space;
        condition_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-key")
    {
        device_key = value;
        device_key.value_namespace = name_space;
        device_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-version")
    {
        device_version = value;
        device_version.value_namespace = name_space;
        device_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type.yfilter = yfilter;
    }
    if(value_path == "condition-description")
    {
        condition_description.yfilter = yfilter;
    }
    if(value_path == "condition-name")
    {
        condition_name.yfilter = yfilter;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp.yfilter = yfilter;
    }
    if(value_path == "condition-severity")
    {
        condition_severity.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "device-key")
    {
        device_key.yfilter = yfilter;
    }
    if(value_path == "device-version")
    {
        device_version.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::FaultType3S::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-fault-type" || name == "condition-description" || name == "condition-name" || name == "condition-raised-timestamp" || name == "condition-severity" || name == "device-description" || name == "device-key" || name == "device-version" || name == "process-id")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Racks()
{

    yang_name = "racks"; yang_parent_name = "fault-type2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::~Racks()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Rack()
    :
    rack{YType::int32, "rack"}
    	,
    slots(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::~Rack()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::has_data() const
{
    return rack.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack='" <<rack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::~Slots()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::Slot()
    :
    slot{YType::str, "slot"}
    	,
    fault_summary(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary>())
	,hardware_fault_devices(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices>())
{
    fault_summary->parent = this;
    hardware_fault_devices->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::~Slot()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::has_data() const
{
    return slot.is_set
	|| (fault_summary !=  nullptr && fault_summary->has_data())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| (fault_summary !=  nullptr && fault_summary->has_operation())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-summary")
    {
        if(fault_summary == nullptr)
        {
            fault_summary = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary>();
        }
        return fault_summary;
    }

    if(child_yang_name == "hardware-fault-devices")
    {
        if(hardware_fault_devices == nullptr)
        {
            hardware_fault_devices = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices>();
        }
        return hardware_fault_devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_summary != nullptr)
    {
        children["fault-summary"] = fault_summary;
    }

    if(hardware_fault_devices != nullptr)
    {
        children["hardware-fault-devices"] = hardware_fault_devices;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-summary" || name == "hardware-fault-devices" || name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::FaultSummary()
    :
    severity_critical_count{YType::int32, "severity-critical-count"},
    severity_emergency_or_alert_count{YType::int32, "severity-emergency-or-alert-count"},
    severity_error_count{YType::int32, "severity-error-count"},
    total{YType::int32, "total"}
{

    yang_name = "fault-summary"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::~FaultSummary()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::has_data() const
{
    return severity_critical_count.is_set
	|| severity_emergency_or_alert_count.is_set
	|| severity_error_count.is_set
	|| total.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity_critical_count.yfilter)
	|| ydk::is_set(severity_emergency_or_alert_count.yfilter)
	|| ydk::is_set(severity_error_count.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_critical_count.is_set || is_set(severity_critical_count.yfilter)) leaf_name_data.push_back(severity_critical_count.get_name_leafdata());
    if (severity_emergency_or_alert_count.is_set || is_set(severity_emergency_or_alert_count.yfilter)) leaf_name_data.push_back(severity_emergency_or_alert_count.get_name_leafdata());
    if (severity_error_count.is_set || is_set(severity_error_count.yfilter)) leaf_name_data.push_back(severity_error_count.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count = value;
        severity_critical_count.value_namespace = name_space;
        severity_critical_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count = value;
        severity_emergency_or_alert_count.value_namespace = name_space;
        severity_emergency_or_alert_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count = value;
        severity_error_count.value_namespace = name_space;
        severity_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count.yfilter = yfilter;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count.yfilter = yfilter;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::FaultSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity-critical-count" || name == "severity-emergency-or-alert-count" || name == "severity-error-count" || name == "total")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevices()
{

    yang_name = "hardware-fault-devices"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::~HardwareFaultDevices()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-device")
    {
        for(auto const & c : hardware_fault_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice>();
        c->parent = this;
        hardware_fault_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultDevice()
    :
    hw_fault_device{YType::str, "hw-fault-device"}
{

    yang_name = "hardware-fault-device"; yang_parent_name = "hardware-fault-devices"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::~HardwareFaultDevice()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_data())
            return true;
    }
    return hw_fault_device.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_device.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-device" <<"[hw-fault-device='" <<hw_fault_device <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_device.is_set || is_set(hw_fault_device.yfilter)) leaf_name_data.push_back(hw_fault_device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-type")
    {
        for(auto const & c : hardware_fault_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType>();
        c->parent = this;
        hardware_fault_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device = value;
        hw_fault_device.value_namespace = name_space;
        hw_fault_device.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-type" || name == "hw-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::HardwareFaultType()
    :
    hw_fault_type{YType::str, "hw-fault-type"},
    condition_description{YType::str, "condition-description"},
    condition_name{YType::str, "condition-name"},
    condition_raised_timestamp{YType::str, "condition-raised-timestamp"},
    condition_severity{YType::str, "condition-severity"},
    device_description{YType::str, "device-description"},
    device_key{YType::str, "device-key"},
    device_version{YType::int32, "device-version"},
    process_id{YType::int32, "process-id"}
{

    yang_name = "hardware-fault-type"; yang_parent_name = "hardware-fault-device"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::~HardwareFaultType()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_data() const
{
    return hw_fault_type.is_set
	|| condition_description.is_set
	|| condition_name.is_set
	|| condition_raised_timestamp.is_set
	|| condition_severity.is_set
	|| device_description.is_set
	|| device_key.is_set
	|| device_version.is_set
	|| process_id.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type.yfilter)
	|| ydk::is_set(condition_description.yfilter)
	|| ydk::is_set(condition_name.yfilter)
	|| ydk::is_set(condition_raised_timestamp.yfilter)
	|| ydk::is_set(condition_severity.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(device_key.yfilter)
	|| ydk::is_set(device_version.yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-type" <<"[hw-fault-type='" <<hw_fault_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type.is_set || is_set(hw_fault_type.yfilter)) leaf_name_data.push_back(hw_fault_type.get_name_leafdata());
    if (condition_description.is_set || is_set(condition_description.yfilter)) leaf_name_data.push_back(condition_description.get_name_leafdata());
    if (condition_name.is_set || is_set(condition_name.yfilter)) leaf_name_data.push_back(condition_name.get_name_leafdata());
    if (condition_raised_timestamp.is_set || is_set(condition_raised_timestamp.yfilter)) leaf_name_data.push_back(condition_raised_timestamp.get_name_leafdata());
    if (condition_severity.is_set || is_set(condition_severity.yfilter)) leaf_name_data.push_back(condition_severity.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_key.is_set || is_set(device_key.yfilter)) leaf_name_data.push_back(device_key.get_name_leafdata());
    if (device_version.is_set || is_set(device_version.yfilter)) leaf_name_data.push_back(device_version.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type = value;
        hw_fault_type.value_namespace = name_space;
        hw_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-description")
    {
        condition_description = value;
        condition_description.value_namespace = name_space;
        condition_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-name")
    {
        condition_name = value;
        condition_name.value_namespace = name_space;
        condition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp = value;
        condition_raised_timestamp.value_namespace = name_space;
        condition_raised_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-severity")
    {
        condition_severity = value;
        condition_severity.value_namespace = name_space;
        condition_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-key")
    {
        device_key = value;
        device_key.value_namespace = name_space;
        device_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-version")
    {
        device_version = value;
        device_version.value_namespace = name_space;
        device_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type.yfilter = yfilter;
    }
    if(value_path == "condition-description")
    {
        condition_description.yfilter = yfilter;
    }
    if(value_path == "condition-name")
    {
        condition_name.yfilter = yfilter;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp.yfilter = yfilter;
    }
    if(value_path == "condition-severity")
    {
        condition_severity.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "device-key")
    {
        device_key.yfilter = yfilter;
    }
    if(value_path == "device-version")
    {
        device_version.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::FaultType2S::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-fault-type" || name == "condition-description" || name == "condition-name" || name == "condition-raised-timestamp" || name == "condition-severity" || name == "device-description" || name == "device-key" || name == "device-version" || name == "process-id")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Racks()
{

    yang_name = "racks"; yang_parent_name = "fault-type1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::~Racks()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Rack()
    :
    rack{YType::int32, "rack"}
    	,
    slots(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::~Rack()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::has_data() const
{
    return rack.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack='" <<rack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::~Slots()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::Slot()
    :
    slot{YType::str, "slot"}
    	,
    fault_summary(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary>())
	,hardware_fault_devices(std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices>())
{
    fault_summary->parent = this;
    hardware_fault_devices->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::~Slot()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::has_data() const
{
    return slot.is_set
	|| (fault_summary !=  nullptr && fault_summary->has_data())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_data());
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| (fault_summary !=  nullptr && fault_summary->has_operation())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_operation());
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-summary")
    {
        if(fault_summary == nullptr)
        {
            fault_summary = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary>();
        }
        return fault_summary;
    }

    if(child_yang_name == "hardware-fault-devices")
    {
        if(hardware_fault_devices == nullptr)
        {
            hardware_fault_devices = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices>();
        }
        return hardware_fault_devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_summary != nullptr)
    {
        children["fault-summary"] = fault_summary;
    }

    if(hardware_fault_devices != nullptr)
    {
        children["hardware-fault-devices"] = hardware_fault_devices;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-summary" || name == "hardware-fault-devices" || name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::FaultSummary()
    :
    severity_critical_count{YType::int32, "severity-critical-count"},
    severity_emergency_or_alert_count{YType::int32, "severity-emergency-or-alert-count"},
    severity_error_count{YType::int32, "severity-error-count"},
    total{YType::int32, "total"}
{

    yang_name = "fault-summary"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::~FaultSummary()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::has_data() const
{
    return severity_critical_count.is_set
	|| severity_emergency_or_alert_count.is_set
	|| severity_error_count.is_set
	|| total.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity_critical_count.yfilter)
	|| ydk::is_set(severity_emergency_or_alert_count.yfilter)
	|| ydk::is_set(severity_error_count.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_critical_count.is_set || is_set(severity_critical_count.yfilter)) leaf_name_data.push_back(severity_critical_count.get_name_leafdata());
    if (severity_emergency_or_alert_count.is_set || is_set(severity_emergency_or_alert_count.yfilter)) leaf_name_data.push_back(severity_emergency_or_alert_count.get_name_leafdata());
    if (severity_error_count.is_set || is_set(severity_error_count.yfilter)) leaf_name_data.push_back(severity_error_count.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count = value;
        severity_critical_count.value_namespace = name_space;
        severity_critical_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count = value;
        severity_emergency_or_alert_count.value_namespace = name_space;
        severity_emergency_or_alert_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count = value;
        severity_error_count.value_namespace = name_space;
        severity_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count.yfilter = yfilter;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count.yfilter = yfilter;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::FaultSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity-critical-count" || name == "severity-emergency-or-alert-count" || name == "severity-error-count" || name == "total")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevices()
{

    yang_name = "hardware-fault-devices"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::~HardwareFaultDevices()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-device")
    {
        for(auto const & c : hardware_fault_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice>();
        c->parent = this;
        hardware_fault_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultDevice()
    :
    hw_fault_device{YType::str, "hw-fault-device"}
{

    yang_name = "hardware-fault-device"; yang_parent_name = "hardware-fault-devices"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::~HardwareFaultDevice()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_data())
            return true;
    }
    return hw_fault_device.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_device.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-device" <<"[hw-fault-device='" <<hw_fault_device <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_device.is_set || is_set(hw_fault_device.yfilter)) leaf_name_data.push_back(hw_fault_device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-type")
    {
        for(auto const & c : hardware_fault_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType>();
        c->parent = this;
        hardware_fault_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device = value;
        hw_fault_device.value_namespace = name_space;
        hw_fault_device.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-type" || name == "hw-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::HardwareFaultType()
    :
    hw_fault_type{YType::str, "hw-fault-type"},
    condition_description{YType::str, "condition-description"},
    condition_name{YType::str, "condition-name"},
    condition_raised_timestamp{YType::str, "condition-raised-timestamp"},
    condition_severity{YType::str, "condition-severity"},
    device_description{YType::str, "device-description"},
    device_key{YType::str, "device-key"},
    device_version{YType::int32, "device-version"},
    process_id{YType::int32, "process-id"}
{

    yang_name = "hardware-fault-type"; yang_parent_name = "hardware-fault-device"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::~HardwareFaultType()
{
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_data() const
{
    return hw_fault_type.is_set
	|| condition_description.is_set
	|| condition_name.is_set
	|| condition_raised_timestamp.is_set
	|| condition_severity.is_set
	|| device_description.is_set
	|| device_key.is_set
	|| device_version.is_set
	|| process_id.is_set;
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type.yfilter)
	|| ydk::is_set(condition_description.yfilter)
	|| ydk::is_set(condition_name.yfilter)
	|| ydk::is_set(condition_raised_timestamp.yfilter)
	|| ydk::is_set(condition_severity.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(device_key.yfilter)
	|| ydk::is_set(device_version.yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-type" <<"[hw-fault-type='" <<hw_fault_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type.is_set || is_set(hw_fault_type.yfilter)) leaf_name_data.push_back(hw_fault_type.get_name_leafdata());
    if (condition_description.is_set || is_set(condition_description.yfilter)) leaf_name_data.push_back(condition_description.get_name_leafdata());
    if (condition_name.is_set || is_set(condition_name.yfilter)) leaf_name_data.push_back(condition_name.get_name_leafdata());
    if (condition_raised_timestamp.is_set || is_set(condition_raised_timestamp.yfilter)) leaf_name_data.push_back(condition_raised_timestamp.get_name_leafdata());
    if (condition_severity.is_set || is_set(condition_severity.yfilter)) leaf_name_data.push_back(condition_severity.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_key.is_set || is_set(device_key.yfilter)) leaf_name_data.push_back(device_key.get_name_leafdata());
    if (device_version.is_set || is_set(device_version.yfilter)) leaf_name_data.push_back(device_version.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type = value;
        hw_fault_type.value_namespace = name_space;
        hw_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-description")
    {
        condition_description = value;
        condition_description.value_namespace = name_space;
        condition_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-name")
    {
        condition_name = value;
        condition_name.value_namespace = name_space;
        condition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp = value;
        condition_raised_timestamp.value_namespace = name_space;
        condition_raised_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-severity")
    {
        condition_severity = value;
        condition_severity.value_namespace = name_space;
        condition_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-key")
    {
        device_key = value;
        device_key.value_namespace = name_space;
        device_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-version")
    {
        device_version = value;
        device_version.value_namespace = name_space;
        device_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type.yfilter = yfilter;
    }
    if(value_path == "condition-description")
    {
        condition_description.yfilter = yfilter;
    }
    if(value_path == "condition-name")
    {
        condition_name.yfilter = yfilter;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp.yfilter = yfilter;
    }
    if(value_path == "condition-severity")
    {
        condition_severity.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "device-key")
    {
        device_key.yfilter = yfilter;
    }
    if(value_path == "device-version")
    {
        device_version.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Exclude::FaultType1S::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-fault-type" || name == "condition-description" || name == "condition-name" || name == "condition-raised-timestamp" || name == "condition-severity" || name == "device-description" || name == "device-key" || name == "device-version" || name == "process-id")
        return true;
    return false;
}

PlatformFaultManager::Racks::Racks()
{

    yang_name = "racks"; yang_parent_name = "platform-fault-manager"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformFaultManager::Racks::~Racks()
{
}

bool PlatformFaultManager::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformFaultManager::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Rack()
    :
    rack{YType::int32, "rack"}
    	,
    slots(std::make_shared<PlatformFaultManager::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformFaultManager::Racks::Rack::~Rack()
{
}

bool PlatformFaultManager::Racks::Rack::has_data() const
{
    return rack.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool PlatformFaultManager::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string PlatformFaultManager::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfm-oper:platform-fault-manager/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformFaultManager::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack='" <<rack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<PlatformFaultManager::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void PlatformFaultManager::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "rack")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::~Slots()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::Slot()
    :
    slot{YType::str, "slot"}
    	,
    fault_summary(std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary>())
	,hardware_fault_devices(std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices>())
{
    fault_summary->parent = this;
    hardware_fault_devices->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::~Slot()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::has_data() const
{
    return slot.is_set
	|| (fault_summary !=  nullptr && fault_summary->has_data())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_data());
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| (fault_summary !=  nullptr && fault_summary->has_operation())
	|| (hardware_fault_devices !=  nullptr && hardware_fault_devices->has_operation());
}

std::string PlatformFaultManager::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-summary")
    {
        if(fault_summary == nullptr)
        {
            fault_summary = std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary>();
        }
        return fault_summary;
    }

    if(child_yang_name == "hardware-fault-devices")
    {
        if(hardware_fault_devices == nullptr)
        {
            hardware_fault_devices = std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices>();
        }
        return hardware_fault_devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_summary != nullptr)
    {
        children["fault-summary"] = fault_summary;
    }

    if(hardware_fault_devices != nullptr)
    {
        children["hardware-fault-devices"] = hardware_fault_devices;
    }

    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-summary" || name == "hardware-fault-devices" || name == "slot")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::FaultSummary()
    :
    severity_critical_count{YType::int32, "severity-critical-count"},
    severity_emergency_or_alert_count{YType::int32, "severity-emergency-or-alert-count"},
    severity_error_count{YType::int32, "severity-error-count"},
    total{YType::int32, "total"}
{

    yang_name = "fault-summary"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::~FaultSummary()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::has_data() const
{
    return severity_critical_count.is_set
	|| severity_emergency_or_alert_count.is_set
	|| severity_error_count.is_set
	|| total.is_set;
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity_critical_count.yfilter)
	|| ydk::is_set(severity_emergency_or_alert_count.yfilter)
	|| ydk::is_set(severity_error_count.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_critical_count.is_set || is_set(severity_critical_count.yfilter)) leaf_name_data.push_back(severity_critical_count.get_name_leafdata());
    if (severity_emergency_or_alert_count.is_set || is_set(severity_emergency_or_alert_count.yfilter)) leaf_name_data.push_back(severity_emergency_or_alert_count.get_name_leafdata());
    if (severity_error_count.is_set || is_set(severity_error_count.yfilter)) leaf_name_data.push_back(severity_error_count.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count = value;
        severity_critical_count.value_namespace = name_space;
        severity_critical_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count = value;
        severity_emergency_or_alert_count.value_namespace = name_space;
        severity_emergency_or_alert_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count = value;
        severity_error_count.value_namespace = name_space;
        severity_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity-critical-count")
    {
        severity_critical_count.yfilter = yfilter;
    }
    if(value_path == "severity-emergency-or-alert-count")
    {
        severity_emergency_or_alert_count.yfilter = yfilter;
    }
    if(value_path == "severity-error-count")
    {
        severity_error_count.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity-critical-count" || name == "severity-emergency-or-alert-count" || name == "severity-error-count" || name == "total")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevices()
{

    yang_name = "hardware-fault-devices"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::~HardwareFaultDevices()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_device.size(); index++)
    {
        if(hardware_fault_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-device")
    {
        for(auto const & c : hardware_fault_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice>();
        c->parent = this;
        hardware_fault_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultDevice()
    :
    hw_fault_device{YType::str, "hw-fault-device"}
{

    yang_name = "hardware-fault-device"; yang_parent_name = "hardware-fault-devices"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::~HardwareFaultDevice()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_data() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_data())
            return true;
    }
    return hw_fault_device.is_set;
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_operation() const
{
    for (std::size_t index=0; index<hardware_fault_type.size(); index++)
    {
        if(hardware_fault_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_device.yfilter);
}

std::string PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-device" <<"[hw-fault-device='" <<hw_fault_device <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_device.is_set || is_set(hw_fault_device.yfilter)) leaf_name_data.push_back(hw_fault_device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-fault-type")
    {
        for(auto const & c : hardware_fault_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType>();
        c->parent = this;
        hardware_fault_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_fault_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device = value;
        hw_fault_device.value_namespace = name_space;
        hw_fault_device.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-device")
    {
        hw_fault_device.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-fault-type" || name == "hw-fault-device")
        return true;
    return false;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::HardwareFaultType()
    :
    hw_fault_type{YType::str, "hw-fault-type"},
    condition_description{YType::str, "condition-description"},
    condition_name{YType::str, "condition-name"},
    condition_raised_timestamp{YType::str, "condition-raised-timestamp"},
    condition_severity{YType::str, "condition-severity"},
    device_description{YType::str, "device-description"},
    device_key{YType::str, "device-key"},
    device_version{YType::int32, "device-version"},
    process_id{YType::int32, "process-id"}
{

    yang_name = "hardware-fault-type"; yang_parent_name = "hardware-fault-device"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::~HardwareFaultType()
{
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_data() const
{
    return hw_fault_type.is_set
	|| condition_description.is_set
	|| condition_name.is_set
	|| condition_raised_timestamp.is_set
	|| condition_severity.is_set
	|| device_description.is_set
	|| device_key.is_set
	|| device_version.is_set
	|| process_id.is_set;
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_fault_type.yfilter)
	|| ydk::is_set(condition_description.yfilter)
	|| ydk::is_set(condition_name.yfilter)
	|| ydk::is_set(condition_raised_timestamp.yfilter)
	|| ydk::is_set(condition_severity.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(device_key.yfilter)
	|| ydk::is_set(device_version.yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-fault-type" <<"[hw-fault-type='" <<hw_fault_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_fault_type.is_set || is_set(hw_fault_type.yfilter)) leaf_name_data.push_back(hw_fault_type.get_name_leafdata());
    if (condition_description.is_set || is_set(condition_description.yfilter)) leaf_name_data.push_back(condition_description.get_name_leafdata());
    if (condition_name.is_set || is_set(condition_name.yfilter)) leaf_name_data.push_back(condition_name.get_name_leafdata());
    if (condition_raised_timestamp.is_set || is_set(condition_raised_timestamp.yfilter)) leaf_name_data.push_back(condition_raised_timestamp.get_name_leafdata());
    if (condition_severity.is_set || is_set(condition_severity.yfilter)) leaf_name_data.push_back(condition_severity.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_key.is_set || is_set(device_key.yfilter)) leaf_name_data.push_back(device_key.get_name_leafdata());
    if (device_version.is_set || is_set(device_version.yfilter)) leaf_name_data.push_back(device_version.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type = value;
        hw_fault_type.value_namespace = name_space;
        hw_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-description")
    {
        condition_description = value;
        condition_description.value_namespace = name_space;
        condition_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-name")
    {
        condition_name = value;
        condition_name.value_namespace = name_space;
        condition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp = value;
        condition_raised_timestamp.value_namespace = name_space;
        condition_raised_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition-severity")
    {
        condition_severity = value;
        condition_severity.value_namespace = name_space;
        condition_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-key")
    {
        device_key = value;
        device_key.value_namespace = name_space;
        device_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-version")
    {
        device_version = value;
        device_version.value_namespace = name_space;
        device_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-fault-type")
    {
        hw_fault_type.yfilter = yfilter;
    }
    if(value_path == "condition-description")
    {
        condition_description.yfilter = yfilter;
    }
    if(value_path == "condition-name")
    {
        condition_name.yfilter = yfilter;
    }
    if(value_path == "condition-raised-timestamp")
    {
        condition_raised_timestamp.yfilter = yfilter;
    }
    if(value_path == "condition-severity")
    {
        condition_severity.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "device-key")
    {
        device_key.yfilter = yfilter;
    }
    if(value_path == "device-version")
    {
        device_version.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-fault-type" || name == "condition-description" || name == "condition-name" || name == "condition-raised-timestamp" || name == "condition-severity" || name == "device-description" || name == "device-key" || name == "device-version" || name == "process-id")
        return true;
    return false;
}


}
}

