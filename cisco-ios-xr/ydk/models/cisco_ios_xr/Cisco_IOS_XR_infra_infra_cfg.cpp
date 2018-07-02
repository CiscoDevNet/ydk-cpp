
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_cfg {

Banners::Banners()
    :
    banner(this, {"banner_name"})
{

    yang_name = "banners"; yang_parent_name = "Cisco-IOS-XR-infra-infra-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Banners::~Banners()
{
}

bool Banners::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<banner.len(); index++)
    {
        if(banner[index]->has_data())
            return true;
    }
    return false;
}

bool Banners::has_operation() const
{
    for (std::size_t index=0; index<banner.len(); index++)
    {
        if(banner[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Banners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-cfg:banners";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Banners::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Banners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "banner")
    {
        auto c = std::make_shared<Banners::Banner>();
        c->parent = this;
        banner.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Banners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : banner.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Banners::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Banners::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Banners::clone_ptr() const
{
    return std::make_shared<Banners>();
}

std::string Banners::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Banners::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Banners::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Banners::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Banners::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner")
        return true;
    return false;
}

Banners::Banner::Banner()
    :
    banner_name{YType::enumeration, "banner-name"},
    banner_text{YType::str, "banner-text"}
{

    yang_name = "banner"; yang_parent_name = "banners"; is_top_level_class = false; has_list_ancestor = false; 
}

Banners::Banner::~Banner()
{
}

bool Banners::Banner::has_data() const
{
    if (is_presence_container) return true;
    return banner_name.is_set
	|| banner_text.is_set;
}

bool Banners::Banner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(banner_name.yfilter)
	|| ydk::is_set(banner_text.yfilter);
}

std::string Banners::Banner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-cfg:banners/" << get_segment_path();
    return path_buffer.str();
}

std::string Banners::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";
    ADD_KEY_TOKEN(banner_name, "banner-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Banners::Banner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner_name.is_set || is_set(banner_name.yfilter)) leaf_name_data.push_back(banner_name.get_name_leafdata());
    if (banner_text.is_set || is_set(banner_text.yfilter)) leaf_name_data.push_back(banner_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Banners::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Banners::Banner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Banners::Banner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner-name")
    {
        banner_name = value;
        banner_name.value_namespace = name_space;
        banner_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "banner-text")
    {
        banner_text = value;
        banner_text.value_namespace = name_space;
        banner_text.value_namespace_prefix = name_space_prefix;
    }
}

void Banners::Banner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner-name")
    {
        banner_name.yfilter = yfilter;
    }
    if(value_path == "banner-text")
    {
        banner_text.yfilter = yfilter;
    }
}

bool Banners::Banner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner-name" || name == "banner-text")
        return true;
    return false;
}

const Enum::YLeaf Banner::exec {0, "exec"};
const Enum::YLeaf Banner::incoming {1, "incoming"};
const Enum::YLeaf Banner::motd {2, "motd"};
const Enum::YLeaf Banner::login {3, "login"};
const Enum::YLeaf Banner::slip_ppp {4, "slip-ppp"};
const Enum::YLeaf Banner::prompt_timeout {5, "prompt-timeout"};


}
}

