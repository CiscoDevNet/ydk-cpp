
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_cfg {

Banners::Banners()
{
    yang_name = "banners"; yang_parent_name = "Cisco-IOS-XR-infra-infra-cfg";
}

Banners::~Banners()
{
}

bool Banners::has_data() const
{
    for (std::size_t index=0; index<banner.size(); index++)
    {
        if(banner[index]->has_data())
            return true;
    }
    return false;
}

bool Banners::has_operation() const
{
    for (std::size_t index=0; index<banner.size(); index++)
    {
        if(banner[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Banners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-cfg:banners";

    return path_buffer.str();

}

EntityPath Banners::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Banners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "banner")
    {
        for(auto const & c : banner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Banners::Banner>();
        c->parent = this;
        banner.push_back(std::move(c));
        children[segment_path] = banner.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Banners::get_children()
{
    for (auto const & c : banner)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Banners::set_value(const std::string & value_path, std::string value)
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

Banners::Banner::Banner()
    :
    banner_name{YType::enumeration, "banner-name"},
    banner_text{YType::str, "banner-text"}
{
    yang_name = "banner"; yang_parent_name = "banners";
}

Banners::Banner::~Banner()
{
}

bool Banners::Banner::has_data() const
{
    return banner_name.is_set
	|| banner_text.is_set;
}

bool Banners::Banner::has_operation() const
{
    return is_set(operation)
	|| is_set(banner_name.operation)
	|| is_set(banner_text.operation);
}

std::string Banners::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner" <<"[banner-name='" <<banner_name <<"']";

    return path_buffer.str();

}

EntityPath Banners::Banner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-infra-cfg:banners/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner_name.is_set || is_set(banner_name.operation)) leaf_name_data.push_back(banner_name.get_name_leafdata());
    if (banner_text.is_set || is_set(banner_text.operation)) leaf_name_data.push_back(banner_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Banners::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Banners::Banner::get_children()
{
    return children;
}

void Banners::Banner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "banner-name")
    {
        banner_name = value;
    }
    if(value_path == "banner-text")
    {
        banner_text = value;
    }
}

const Enum::YLeaf BannerEnum::exec {0, "exec"};
const Enum::YLeaf BannerEnum::incoming {1, "incoming"};
const Enum::YLeaf BannerEnum::motd {2, "motd"};
const Enum::YLeaf BannerEnum::login {3, "login"};
const Enum::YLeaf BannerEnum::slip_ppp {4, "slip-ppp"};
const Enum::YLeaf BannerEnum::prompt_timeout {5, "prompt-timeout"};


}
}

