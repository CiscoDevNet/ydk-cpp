
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_oor_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_oor_cfg {

OorHwConfig::OorHwConfig()
    :
    hw(std::make_shared<OorHwConfig::Hw>())
{
    hw->parent = this;

    yang_name = "oor-hw-config"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-oor-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

OorHwConfig::~OorHwConfig()
{
}

bool OorHwConfig::has_data() const
{
    return (hw !=  nullptr && hw->has_data());
}

bool OorHwConfig::has_operation() const
{
    return is_set(yfilter)
	|| (hw !=  nullptr && hw->has_operation());
}

std::string OorHwConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-oor-cfg:oor-hw-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OorHwConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OorHwConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw")
    {
        if(hw == nullptr)
        {
            hw = std::make_shared<OorHwConfig::Hw>();
        }
        return hw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OorHwConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hw != nullptr)
    {
        children["hw"] = hw;
    }

    return children;
}

void OorHwConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OorHwConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OorHwConfig::clone_ptr() const
{
    return std::make_shared<OorHwConfig>();
}

std::string OorHwConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OorHwConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OorHwConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OorHwConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OorHwConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw")
        return true;
    return false;
}

OorHwConfig::Hw::Hw()
    :
    dampening{YType::uint32, "dampening"}
    	,
    thresholds(std::make_shared<OorHwConfig::Hw::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "hw"; yang_parent_name = "oor-hw-config"; is_top_level_class = false; has_list_ancestor = false;
}

OorHwConfig::Hw::~Hw()
{
}

bool OorHwConfig::Hw::has_data() const
{
    return dampening.is_set
	|| (thresholds !=  nullptr && thresholds->has_data());
}

bool OorHwConfig::Hw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening.yfilter)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string OorHwConfig::Hw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-oor-cfg:oor-hw-config/" << get_segment_path();
    return path_buffer.str();
}

std::string OorHwConfig::Hw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OorHwConfig::Hw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening.is_set || is_set(dampening.yfilter)) leaf_name_data.push_back(dampening.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OorHwConfig::Hw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<OorHwConfig::Hw::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OorHwConfig::Hw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    return children;
}

void OorHwConfig::Hw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening")
    {
        dampening = value;
        dampening.value_namespace = name_space;
        dampening.value_namespace_prefix = name_space_prefix;
    }
}

void OorHwConfig::Hw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening")
    {
        dampening.yfilter = yfilter;
    }
}

bool OorHwConfig::Hw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds" || name == "dampening")
        return true;
    return false;
}

OorHwConfig::Hw::Thresholds::Thresholds()
{

    yang_name = "thresholds"; yang_parent_name = "hw"; is_top_level_class = false; has_list_ancestor = false;
}

OorHwConfig::Hw::Thresholds::~Thresholds()
{
}

bool OorHwConfig::Hw::Thresholds::has_data() const
{
    for (std::size_t index=0; index<threshold.size(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    return false;
}

bool OorHwConfig::Hw::Thresholds::has_operation() const
{
    for (std::size_t index=0; index<threshold.size(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OorHwConfig::Hw::Thresholds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-oor-cfg:oor-hw-config/hw/" << get_segment_path();
    return path_buffer.str();
}

std::string OorHwConfig::Hw::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OorHwConfig::Hw::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OorHwConfig::Hw::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto c = std::make_shared<OorHwConfig::Hw::Thresholds::Threshold>();
        c->parent = this;
        threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OorHwConfig::Hw::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OorHwConfig::Hw::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OorHwConfig::Hw::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OorHwConfig::Hw::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

OorHwConfig::Hw::Thresholds::Threshold::Threshold()
    :
    color{YType::str, "color"},
    percent{YType::uint32, "percent"}
{

    yang_name = "threshold"; yang_parent_name = "thresholds"; is_top_level_class = false; has_list_ancestor = false;
}

OorHwConfig::Hw::Thresholds::Threshold::~Threshold()
{
}

bool OorHwConfig::Hw::Thresholds::Threshold::has_data() const
{
    return color.is_set
	|| percent.is_set;
}

bool OorHwConfig::Hw::Thresholds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string OorHwConfig::Hw::Thresholds::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-oor-cfg:oor-hw-config/hw/thresholds/" << get_segment_path();
    return path_buffer.str();
}

std::string OorHwConfig::Hw::Thresholds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold" <<"[color='" <<color <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OorHwConfig::Hw::Thresholds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OorHwConfig::Hw::Thresholds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OorHwConfig::Hw::Thresholds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OorHwConfig::Hw::Thresholds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void OorHwConfig::Hw::Thresholds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool OorHwConfig::Hw::Thresholds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "percent")
        return true;
    return false;
}


}
}

