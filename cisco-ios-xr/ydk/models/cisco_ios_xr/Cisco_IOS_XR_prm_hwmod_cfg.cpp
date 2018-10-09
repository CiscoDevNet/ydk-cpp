
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_prm_hwmod_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_prm_hwmod_cfg {

HardwareModule::HardwareModule()
    :
    urpf{YType::enumeration, "urpf"}
        ,
    loadbalancing(std::make_shared<HardwareModule::Loadbalancing>())
{
    loadbalancing->parent = this;

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-prm-hwmod-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    if (is_presence_container) return true;
    return urpf.is_set
	|| (loadbalancing !=  nullptr && loadbalancing->has_data());
}

bool HardwareModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(urpf.yfilter)
	|| (loadbalancing !=  nullptr && loadbalancing->has_operation());
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-cfg:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (urpf.is_set || is_set(urpf.yfilter)) leaf_name_data.push_back(urpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loadbalancing")
    {
        if(loadbalancing == nullptr)
        {
            loadbalancing = std::make_shared<HardwareModule::Loadbalancing>();
        }
        return loadbalancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(loadbalancing != nullptr)
    {
        children["loadbalancing"] = loadbalancing;
    }

    return children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "urpf")
    {
        urpf = value;
        urpf.value_namespace = name_space;
        urpf.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "urpf")
    {
        urpf.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadbalancing" || name == "urpf")
        return true;
    return false;
}

HardwareModule::Loadbalancing::Loadbalancing()
    :
    bgp3107(std::make_shared<HardwareModule::Loadbalancing::Bgp3107>())
{
    bgp3107->parent = this;

    yang_name = "loadbalancing"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Loadbalancing::~Loadbalancing()
{
}

bool HardwareModule::Loadbalancing::has_data() const
{
    if (is_presence_container) return true;
    return (bgp3107 !=  nullptr && bgp3107->has_data());
}

bool HardwareModule::Loadbalancing::has_operation() const
{
    return is_set(yfilter)
	|| (bgp3107 !=  nullptr && bgp3107->has_operation());
}

std::string HardwareModule::Loadbalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Loadbalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadbalancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Loadbalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Loadbalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp3107")
    {
        if(bgp3107 == nullptr)
        {
            bgp3107 = std::make_shared<HardwareModule::Loadbalancing::Bgp3107>();
        }
        return bgp3107;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Loadbalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp3107 != nullptr)
    {
        children["bgp3107"] = bgp3107;
    }

    return children;
}

void HardwareModule::Loadbalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Loadbalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Loadbalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp3107")
        return true;
    return false;
}

HardwareModule::Loadbalancing::Bgp3107::Bgp3107()
    :
    ecmp(std::make_shared<HardwareModule::Loadbalancing::Bgp3107::Ecmp>())
{
    ecmp->parent = this;

    yang_name = "bgp3107"; yang_parent_name = "loadbalancing"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Loadbalancing::Bgp3107::~Bgp3107()
{
}

bool HardwareModule::Loadbalancing::Bgp3107::has_data() const
{
    if (is_presence_container) return true;
    return (ecmp !=  nullptr && ecmp->has_data());
}

bool HardwareModule::Loadbalancing::Bgp3107::has_operation() const
{
    return is_set(yfilter)
	|| (ecmp !=  nullptr && ecmp->has_operation());
}

std::string HardwareModule::Loadbalancing::Bgp3107::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-cfg:hardware-module/loadbalancing/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Loadbalancing::Bgp3107::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp3107";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Loadbalancing::Bgp3107::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Loadbalancing::Bgp3107::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ecmp")
    {
        if(ecmp == nullptr)
        {
            ecmp = std::make_shared<HardwareModule::Loadbalancing::Bgp3107::Ecmp>();
        }
        return ecmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Loadbalancing::Bgp3107::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ecmp != nullptr)
    {
        children["ecmp"] = ecmp;
    }

    return children;
}

void HardwareModule::Loadbalancing::Bgp3107::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Loadbalancing::Bgp3107::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Loadbalancing::Bgp3107::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecmp")
        return true;
    return false;
}

HardwareModule::Loadbalancing::Bgp3107::Ecmp::Ecmp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "ecmp"; yang_parent_name = "bgp3107"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Loadbalancing::Bgp3107::Ecmp::~Ecmp()
{
}

bool HardwareModule::Loadbalancing::Bgp3107::Ecmp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool HardwareModule::Loadbalancing::Bgp3107::Ecmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string HardwareModule::Loadbalancing::Bgp3107::Ecmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-cfg:hardware-module/loadbalancing/bgp3107/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Loadbalancing::Bgp3107::Ecmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Loadbalancing::Bgp3107::Ecmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Loadbalancing::Bgp3107::Ecmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Loadbalancing::Bgp3107::Ecmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Loadbalancing::Bgp3107::Ecmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Loadbalancing::Bgp3107::Ecmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool HardwareModule::Loadbalancing::Bgp3107::Ecmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

const Enum::YLeaf UrpfConfig::disable {0, "disable"};
const Enum::YLeaf UrpfConfig::enable {1, "enable"};


}
}

