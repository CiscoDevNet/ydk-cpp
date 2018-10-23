
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_prm_hwmod_sr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_prm_hwmod_sr_cfg {

HardwareModule::HardwareModule()
    :
    segment_routing(std::make_shared<HardwareModule::SegmentRouting>())
{
    segment_routing->parent = this;

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-prm-hwmod-sr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    if (is_presence_container) return true;
    return (segment_routing !=  nullptr && segment_routing->has_data());
}

bool HardwareModule::has_operation() const
{
    return is_set(yfilter)
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-sr-cfg:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<HardwareModule::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModule::clone_ptr() const
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
    if(name == "segment-routing")
        return true;
    return false;
}

HardwareModule::SegmentRouting::SegmentRouting()
    :
    reserve(std::make_shared<HardwareModule::SegmentRouting::Reserve>())
{
    reserve->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::SegmentRouting::~SegmentRouting()
{
}

bool HardwareModule::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (reserve !=  nullptr && reserve->has_data());
}

bool HardwareModule::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string HardwareModule::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-sr-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<HardwareModule::SegmentRouting::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    return _children;
}

void HardwareModule::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

HardwareModule::SegmentRouting::Reserve::Reserve()
    :
    service_label(std::make_shared<HardwareModule::SegmentRouting::Reserve::ServiceLabel>())
{
    service_label->parent = this;

    yang_name = "reserve"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::SegmentRouting::Reserve::~Reserve()
{
}

bool HardwareModule::SegmentRouting::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return (service_label !=  nullptr && service_label->has_data());
}

bool HardwareModule::SegmentRouting::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| (service_label !=  nullptr && service_label->has_operation());
}

std::string HardwareModule::SegmentRouting::Reserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-sr-cfg:hardware-module/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::SegmentRouting::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::SegmentRouting::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::SegmentRouting::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-label")
    {
        if(service_label == nullptr)
        {
            service_label = std::make_shared<HardwareModule::SegmentRouting::Reserve::ServiceLabel>();
        }
        return service_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::SegmentRouting::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_label != nullptr)
    {
        _children["service-label"] = service_label;
    }

    return _children;
}

void HardwareModule::SegmentRouting::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::SegmentRouting::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::SegmentRouting::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-label")
        return true;
    return false;
}

HardwareModule::SegmentRouting::Reserve::ServiceLabel::ServiceLabel()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "service-label"; yang_parent_name = "reserve"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::SegmentRouting::Reserve::ServiceLabel::~ServiceLabel()
{
}

bool HardwareModule::SegmentRouting::Reserve::ServiceLabel::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool HardwareModule::SegmentRouting::Reserve::ServiceLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string HardwareModule::SegmentRouting::Reserve::ServiceLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-hwmod-sr-cfg:hardware-module/segment-routing/reserve/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::SegmentRouting::Reserve::ServiceLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::SegmentRouting::Reserve::ServiceLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::SegmentRouting::Reserve::ServiceLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::SegmentRouting::Reserve::ServiceLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModule::SegmentRouting::Reserve::ServiceLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::SegmentRouting::Reserve::ServiceLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool HardwareModule::SegmentRouting::Reserve::ServiceLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}


}
}

