
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ma_ssrp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ma_ssrp_cfg {

Ssrp::Ssrp()
    :
    profiles(std::make_shared<Ssrp::Profiles>())
{
    profiles->parent = this;

    yang_name = "ssrp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ssrp-cfg";
}

Ssrp::~Ssrp()
{
}

bool Ssrp::has_data() const
{
    return (profiles !=  nullptr && profiles->has_data());
}

bool Ssrp::has_operation() const
{
    return is_set(yfilter)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string Ssrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp";

    return path_buffer.str();

}

const EntityPath Ssrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ssrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ssrp::Profiles>();
        }
        return profiles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    return children;
}

void Ssrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ssrp::clone_ptr() const
{
    return std::make_shared<Ssrp>();
}

std::string Ssrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profiles")
        return true;
    return false;
}

Ssrp::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ssrp";
}

Ssrp::Profiles::~Profiles()
{
}

bool Ssrp::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ssrp::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssrp::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ssrp::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ssrp::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssrp::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssrp::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssrp::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssrp::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssrp::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Ssrp::Profiles::Profile::Profile()
    :
    name{YType::str, "name"},
    max_hops{YType::uint32, "max-hops"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"}
{
    yang_name = "profile"; yang_parent_name = "profiles";
}

Ssrp::Profiles::Profile::~Profile()
{
}

bool Ssrp::Profiles::Profile::has_data() const
{
    return name.is_set
	|| max_hops.is_set
	|| peer_ipv4_address.is_set;
}

bool Ssrp::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| ydk::is_set(peer_ipv4_address.yfilter);
}

std::string Ssrp::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Ssrp::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp/profiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.yfilter)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ssrp::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssrp::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssrp::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
        peer_ipv4_address.value_namespace = name_space;
        peer_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ssrp::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address.yfilter = yfilter;
    }
}

bool Ssrp::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "max-hops" || name == "peer-ipv4-address")
        return true;
    return false;
}


}
}

