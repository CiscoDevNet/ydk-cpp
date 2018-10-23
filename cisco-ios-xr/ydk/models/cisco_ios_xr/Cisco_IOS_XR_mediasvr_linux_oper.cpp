
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mediasvr_linux_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mediasvr_linux_oper {

MediaSvr::MediaSvr()
    :
    all(std::make_shared<MediaSvr::All>())
    , location_descriptions(std::make_shared<MediaSvr::LocationDescriptions>())
{
    all->parent = this;
    location_descriptions->parent = this;

    yang_name = "media-svr"; yang_parent_name = "Cisco-IOS-XR-mediasvr-linux-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MediaSvr::~MediaSvr()
{
}

bool MediaSvr::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (location_descriptions !=  nullptr && location_descriptions->has_data());
}

bool MediaSvr::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (location_descriptions !=  nullptr && location_descriptions->has_operation());
}

std::string MediaSvr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mediasvr-linux-oper:media-svr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MediaSvr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MediaSvr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<MediaSvr::All>();
        }
        return all;
    }

    if(child_yang_name == "location-descriptions")
    {
        if(location_descriptions == nullptr)
        {
            location_descriptions = std::make_shared<MediaSvr::LocationDescriptions>();
        }
        return location_descriptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MediaSvr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(location_descriptions != nullptr)
    {
        _children["location-descriptions"] = location_descriptions;
    }

    return _children;
}

void MediaSvr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MediaSvr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MediaSvr::clone_ptr() const
{
    return std::make_shared<MediaSvr>();
}

std::string MediaSvr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MediaSvr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MediaSvr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MediaSvr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MediaSvr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "location-descriptions")
        return true;
    return false;
}

MediaSvr::All::All()
    :
    show_output{YType::str, "show-output"}
{

    yang_name = "all"; yang_parent_name = "media-svr"; is_top_level_class = false; has_list_ancestor = false; 
}

MediaSvr::All::~All()
{
}

bool MediaSvr::All::has_data() const
{
    if (is_presence_container) return true;
    return show_output.is_set;
}

bool MediaSvr::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_output.yfilter);
}

std::string MediaSvr::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mediasvr-linux-oper:media-svr/" << get_segment_path();
    return path_buffer.str();
}

std::string MediaSvr::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MediaSvr::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_output.is_set || is_set(show_output.yfilter)) leaf_name_data.push_back(show_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MediaSvr::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MediaSvr::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MediaSvr::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-output")
    {
        show_output = value;
        show_output.value_namespace = name_space;
        show_output.value_namespace_prefix = name_space_prefix;
    }
}

void MediaSvr::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-output")
    {
        show_output.yfilter = yfilter;
    }
}

bool MediaSvr::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-output")
        return true;
    return false;
}

MediaSvr::LocationDescriptions::LocationDescriptions()
    :
    location_description(this, {"node"})
{

    yang_name = "location-descriptions"; yang_parent_name = "media-svr"; is_top_level_class = false; has_list_ancestor = false; 
}

MediaSvr::LocationDescriptions::~LocationDescriptions()
{
}

bool MediaSvr::LocationDescriptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location_description.len(); index++)
    {
        if(location_description[index]->has_data())
            return true;
    }
    return false;
}

bool MediaSvr::LocationDescriptions::has_operation() const
{
    for (std::size_t index=0; index<location_description.len(); index++)
    {
        if(location_description[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MediaSvr::LocationDescriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mediasvr-linux-oper:media-svr/" << get_segment_path();
    return path_buffer.str();
}

std::string MediaSvr::LocationDescriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-descriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MediaSvr::LocationDescriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MediaSvr::LocationDescriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-description")
    {
        auto ent_ = std::make_shared<MediaSvr::LocationDescriptions::LocationDescription>();
        ent_->parent = this;
        location_description.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MediaSvr::LocationDescriptions::get_children() const
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

void MediaSvr::LocationDescriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MediaSvr::LocationDescriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MediaSvr::LocationDescriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-description")
        return true;
    return false;
}

MediaSvr::LocationDescriptions::LocationDescription::LocationDescription()
    :
    node{YType::str, "node"},
    show_output{YType::str, "show-output"}
{

    yang_name = "location-description"; yang_parent_name = "location-descriptions"; is_top_level_class = false; has_list_ancestor = false; 
}

MediaSvr::LocationDescriptions::LocationDescription::~LocationDescription()
{
}

bool MediaSvr::LocationDescriptions::LocationDescription::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| show_output.is_set;
}

bool MediaSvr::LocationDescriptions::LocationDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(show_output.yfilter);
}

std::string MediaSvr::LocationDescriptions::LocationDescription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mediasvr-linux-oper:media-svr/location-descriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string MediaSvr::LocationDescriptions::LocationDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-description";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MediaSvr::LocationDescriptions::LocationDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (show_output.is_set || is_set(show_output.yfilter)) leaf_name_data.push_back(show_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MediaSvr::LocationDescriptions::LocationDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MediaSvr::LocationDescriptions::LocationDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MediaSvr::LocationDescriptions::LocationDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MediaSvr::LocationDescriptions::LocationDescription::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MediaSvr::LocationDescriptions::LocationDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "show-output")
        return true;
    return false;
}


}
}

