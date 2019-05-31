
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_linux_os_heap_summary_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_linux_os_heap_summary_oper {

HeapSummary::HeapSummary()
    :
    location_descriptions(std::make_shared<HeapSummary::LocationDescriptions>())
    , all(std::make_shared<HeapSummary::All>())
{
    location_descriptions->parent = this;
    all->parent = this;

    yang_name = "heap-summary"; yang_parent_name = "Cisco-IOS-XR-linux-os-heap-summary-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

HeapSummary::~HeapSummary()
{
}

bool HeapSummary::has_data() const
{
    if (is_presence_container) return true;
    return (location_descriptions !=  nullptr && location_descriptions->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool HeapSummary::has_operation() const
{
    return is_set(yfilter)
	|| (location_descriptions !=  nullptr && location_descriptions->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string HeapSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-heap-summary-oper:heap-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeapSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HeapSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-descriptions")
    {
        if(location_descriptions == nullptr)
        {
            location_descriptions = std::make_shared<HeapSummary::LocationDescriptions>();
        }
        return location_descriptions;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<HeapSummary::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HeapSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(location_descriptions != nullptr)
    {
        _children["location-descriptions"] = location_descriptions;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void HeapSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HeapSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HeapSummary::clone_ptr() const
{
    return std::make_shared<HeapSummary>();
}

std::string HeapSummary::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HeapSummary::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HeapSummary::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HeapSummary::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HeapSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-descriptions" || name == "all")
        return true;
    return false;
}

HeapSummary::LocationDescriptions::LocationDescriptions()
    :
    location_description(this, {"node"})
{

    yang_name = "location-descriptions"; yang_parent_name = "heap-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

HeapSummary::LocationDescriptions::~LocationDescriptions()
{
}

bool HeapSummary::LocationDescriptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location_description.len(); index++)
    {
        if(location_description[index]->has_data())
            return true;
    }
    return false;
}

bool HeapSummary::LocationDescriptions::has_operation() const
{
    for (std::size_t index=0; index<location_description.len(); index++)
    {
        if(location_description[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HeapSummary::LocationDescriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-heap-summary-oper:heap-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string HeapSummary::LocationDescriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-descriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeapSummary::LocationDescriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HeapSummary::LocationDescriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-description")
    {
        auto ent_ = std::make_shared<HeapSummary::LocationDescriptions::LocationDescription>();
        ent_->parent = this;
        location_description.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HeapSummary::LocationDescriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location_description.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HeapSummary::LocationDescriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HeapSummary::LocationDescriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HeapSummary::LocationDescriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-description")
        return true;
    return false;
}

HeapSummary::LocationDescriptions::LocationDescription::LocationDescription()
    :
    node{YType::str, "node"},
    show_output{YType::str, "show-output"}
{

    yang_name = "location-description"; yang_parent_name = "location-descriptions"; is_top_level_class = false; has_list_ancestor = false; 
}

HeapSummary::LocationDescriptions::LocationDescription::~LocationDescription()
{
}

bool HeapSummary::LocationDescriptions::LocationDescription::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| show_output.is_set;
}

bool HeapSummary::LocationDescriptions::LocationDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(show_output.yfilter);
}

std::string HeapSummary::LocationDescriptions::LocationDescription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-heap-summary-oper:heap-summary/location-descriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string HeapSummary::LocationDescriptions::LocationDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-description";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeapSummary::LocationDescriptions::LocationDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (show_output.is_set || is_set(show_output.yfilter)) leaf_name_data.push_back(show_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HeapSummary::LocationDescriptions::LocationDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HeapSummary::LocationDescriptions::LocationDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HeapSummary::LocationDescriptions::LocationDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-output")
    {
        show_output = value;
        show_output.value_namespace = name_space;
        show_output.value_namespace_prefix = name_space_prefix;
    }
}

void HeapSummary::LocationDescriptions::LocationDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "show-output")
    {
        show_output.yfilter = yfilter;
    }
}

bool HeapSummary::LocationDescriptions::LocationDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "show-output")
        return true;
    return false;
}

HeapSummary::All::All()
    :
    show_output{YType::str, "show-output"}
{

    yang_name = "all"; yang_parent_name = "heap-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

HeapSummary::All::~All()
{
}

bool HeapSummary::All::has_data() const
{
    if (is_presence_container) return true;
    return show_output.is_set;
}

bool HeapSummary::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_output.yfilter);
}

std::string HeapSummary::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-heap-summary-oper:heap-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string HeapSummary::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HeapSummary::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_output.is_set || is_set(show_output.yfilter)) leaf_name_data.push_back(show_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HeapSummary::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HeapSummary::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HeapSummary::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-output")
    {
        show_output = value;
        show_output.value_namespace = name_space;
        show_output.value_namespace_prefix = name_space_prefix;
    }
}

void HeapSummary::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-output")
    {
        show_output.yfilter = yfilter;
    }
}

bool HeapSummary::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-output")
        return true;
    return false;
}


}
}

