
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_dhcpd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

Ipv4Dhcpd::Ipv4Dhcpd()
    :
    allow_client_id_change{YType::empty, "allow-client-id-change"},
    enable{YType::empty, "enable"},
    inner_cos{YType::uint32, "inner-cos"},
    outer_cos{YType::uint32, "outer-cos"}
    	,
    database(std::make_shared<Ipv4Dhcpd::Database>())
	,duplicate_mac_allowed(nullptr) // presence node
	,interfaces(std::make_shared<Ipv4Dhcpd::Interfaces>())
	,profiles(std::make_shared<Ipv4Dhcpd::Profiles>())
	,rate_limit(std::make_shared<Ipv4Dhcpd::RateLimit>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Vrfs>())
{
    database->parent = this;
    children["database"] = database;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    profiles->parent = this;
    children["profiles"] = profiles;

    rate_limit->parent = this;
    children["rate-limit"] = rate_limit;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "ipv4-dhcpd"; yang_parent_name = "Cisco-IOS-XR-ipv4-dhcpd-cfg";
}

Ipv4Dhcpd::~Ipv4Dhcpd()
{
}

bool Ipv4Dhcpd::has_data() const
{
    return allow_client_id_change.is_set
	|| enable.is_set
	|| inner_cos.is_set
	|| outer_cos.is_set
	|| (database !=  nullptr && database->has_data())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_client_id_change.operation)
	|| is_set(enable.operation)
	|| is_set(inner_cos.operation)
	|| is_set(outer_cos.operation)
	|| (database !=  nullptr && database->has_operation())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_client_id_change.is_set || is_set(allow_client_id_change.operation)) leaf_name_data.push_back(allow_client_id_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (outer_cos.is_set || is_set(outer_cos.operation)) leaf_name_data.push_back(outer_cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
        else
        {
            database = std::make_shared<Ipv4Dhcpd::Database>();
            database->parent = this;
            children["database"] = database;
        }
        return children.at("database");
    }

    if(child_yang_name == "duplicate-mac-allowed")
    {
        if(duplicate_mac_allowed != nullptr)
        {
            children["duplicate-mac-allowed"] = duplicate_mac_allowed;
        }
        else
        {
            duplicate_mac_allowed = std::make_shared<Ipv4Dhcpd::DuplicateMacAllowed>();
            duplicate_mac_allowed->parent = this;
            children["duplicate-mac-allowed"] = duplicate_mac_allowed;
        }
        return children.at("duplicate-mac-allowed");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Ipv4Dhcpd::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "profiles")
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles;
        }
        else
        {
            profiles = std::make_shared<Ipv4Dhcpd::Profiles>();
            profiles->parent = this;
            children["profiles"] = profiles;
        }
        return children.at("profiles");
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit;
        }
        else
        {
            rate_limit = std::make_shared<Ipv4Dhcpd::RateLimit>();
            rate_limit->parent = this;
            children["rate-limit"] = rate_limit;
        }
        return children.at("rate-limit");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::get_children()
{
    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
    }

    if(children.find("duplicate-mac-allowed") == children.end())
    {
        if(duplicate_mac_allowed != nullptr)
        {
            children["duplicate-mac-allowed"] = duplicate_mac_allowed;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("profiles") == children.end())
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles;
        }
    }

    if(children.find("rate-limit") == children.end())
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ipv4Dhcpd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-client-id-change")
    {
        allow_client_id_change = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "outer-cos")
    {
        outer_cos = value;
    }
}

std::shared_ptr<Entity> Ipv4Dhcpd::clone_ptr() const
{
    return std::make_shared<Ipv4Dhcpd>();
}

std::string Ipv4Dhcpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Dhcpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Dhcpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv4Dhcpd::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    profile(nullptr) // presence node
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (profile !=  nullptr && profile->has_data());
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Ipv4Dhcpd::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        if(profile != nullptr)
        {
            children["profile"] = profile;
        }
        else
        {
            profile = std::make_shared<Ipv4Dhcpd::Vrfs::Vrf::Profile>();
            profile->parent = this;
            children["profile"] = profile;
        }
        return children.at("profile");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Vrfs::Vrf::get_children()
{
    if(children.find("profile") == children.end())
    {
        if(profile != nullptr)
        {
            children["profile"] = profile;
        }
    }

    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Vrfs::Vrf::Profile::Profile()
    :
    mode{YType::enumeration, "mode"},
    vrf_profile_name{YType::str, "vrf-profile-name"}
{
    yang_name = "profile"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Vrfs::Vrf::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_data() const
{
    return mode.is_set
	|| vrf_profile_name.is_set;
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(vrf_profile_name.operation);
}

std::string Ipv4Dhcpd::Vrfs::Vrf::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::Vrf::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (vrf_profile_name.is_set || is_set(vrf_profile_name.operation)) leaf_name_data.push_back(vrf_profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::Vrf::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Vrfs::Vrf::Profile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "vrf-profile-name")
    {
        vrf_profile_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile>();
        c->parent = this;
        profile.push_back(std::move(c));
        children[segment_path] = profile.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::get_children()
{
    for (auto const & c : profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"}
    	,
    modes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes>())
{
    modes->parent = this;
    children["modes"] = modes;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (modes !=  nullptr && modes->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| (modes !=  nullptr && modes->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/profiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "modes")
    {
        if(modes != nullptr)
        {
            children["modes"] = modes;
        }
        else
        {
            modes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes>();
            modes->parent = this;
            children["modes"] = modes;
        }
        return children.at("modes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::get_children()
{
    if(children.find("modes") == children.end())
    {
        if(modes != nullptr)
        {
            children["modes"] = modes;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Modes()
{
    yang_name = "modes"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Profiles::Profile::Modes::~Modes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_data() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_operation() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modes' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mode")
    {
        for(auto const & c : mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode>();
        c->parent = this;
        mode.push_back(std::move(c));
        children[segment_path] = mode.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::get_children()
{
    for (auto const & c : mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Mode()
    :
    mode{YType::enumeration, "mode"},
    enable{YType::empty, "enable"}
    	,
    base(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base>())
	,proxy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy>())
	,relay(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>())
	,server(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>())
	,snoop(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop>())
{
    base->parent = this;
    children["base"] = base;

    proxy->parent = this;
    children["proxy"] = proxy;

    relay->parent = this;
    children["relay"] = relay;

    server->parent = this;
    children["server"] = server;

    snoop->parent = this;
    children["snoop"] = snoop;

    yang_name = "mode"; yang_parent_name = "modes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::~Mode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_data() const
{
    return mode.is_set
	|| enable.is_set
	|| (base !=  nullptr && base->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (snoop !=  nullptr && snoop->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(enable.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (snoop !=  nullptr && snoop->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "proxy")
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy;
        }
        else
        {
            proxy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy>();
            proxy->parent = this;
            children["proxy"] = proxy;
        }
        return children.at("proxy");
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay;
        }
        else
        {
            relay = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>();
            relay->parent = this;
            children["relay"] = relay;
        }
        return children.at("relay");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server;
        }
        else
        {
            server = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>();
            server->parent = this;
            children["server"] = server;
        }
        return children.at("server");
    }

    if(child_yang_name == "snoop")
    {
        if(snoop != nullptr)
        {
            children["snoop"] = snoop;
        }
        else
        {
            snoop = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop>();
            snoop->parent = this;
            children["snoop"] = snoop;
        }
        return children.at("snoop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("proxy") == children.end())
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy;
        }
    }

    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay;
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server;
        }
    }

    if(children.find("snoop") == children.end())
    {
        if(snoop != nullptr)
        {
            children["snoop"] = snoop;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::Snoop()
    :
    trusted{YType::empty, "trusted"}
    	,
    relay_information_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption>())
{
    relay_information_option->parent = this;
    children["relay-information-option"] = relay_information_option;

    yang_name = "snoop"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::~Snoop()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::has_data() const
{
    return trusted.is_set
	|| (relay_information_option !=  nullptr && relay_information_option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::has_operation() const
{
    return is_set(operation)
	|| is_set(trusted.operation)
	|| (relay_information_option !=  nullptr && relay_information_option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snoop' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relay-information-option")
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option;
        }
        else
        {
            relay_information_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption>();
            relay_information_option->parent = this;
            children["relay-information-option"] = relay_information_option;
        }
        return children.at("relay-information-option");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_children()
{
    if(children.find("relay-information-option") == children.end())
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RelayInformationOption()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    insert{YType::empty, "insert"},
    policy{YType::enumeration, "policy"}
    	,
    remote_id(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId>())
{
    remote_id->parent = this;
    children["remote-id"] = remote_id;

    yang_name = "relay-information-option"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::~RelayInformationOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::has_data() const
{
    return allow_untrusted.is_set
	|| insert.is_set
	|| policy.is_set
	|| (remote_id !=  nullptr && remote_id->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_untrusted.operation)
	|| is_set(insert.operation)
	|| is_set(policy.operation)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information-option";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayInformationOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.operation)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (insert.is_set || is_set(insert.operation)) leaf_name_data.push_back(insert.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
        else
        {
            remote_id = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId>();
            remote_id->parent = this;
            children["remote-id"] = remote_id;
        }
        return children.at("remote-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_children()
{
    if(children.find("remote-id") == children.end())
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
    }
    if(value_path == "insert")
    {
        insert = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::RemoteId()
    :
    format_type{YType::uint32, "format-type"},
    remote_id_value{YType::str, "remote-id-value"}
{
    yang_name = "remote-id"; yang_parent_name = "relay-information-option";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::~RemoteId()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::has_data() const
{
    return format_type.is_set
	|| remote_id_value.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(format_type.operation)
	|| is_set(remote_id_value.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_type.is_set || is_set(format_type.operation)) leaf_name_data.push_back(format_type.get_name_leafdata());
    if (remote_id_value.is_set || is_set(remote_id_value.operation)) leaf_name_data.push_back(remote_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format-type")
    {
        format_type = value;
    }
    if(value_path == "remote-id-value")
    {
        remote_id_value = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Base()
    :
    enable{YType::empty, "enable"}
    	,
    base_match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch>())
	,base_relay_opt(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt>())
	,default_profile(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile>())
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match>())
{
    base_match->parent = this;
    children["base-match"] = base_match;

    base_relay_opt->parent = this;
    children["base-relay-opt"] = base_relay_opt;

    default_profile->parent = this;
    children["default-profile"] = default_profile;

    match->parent = this;
    children["match"] = match;

    yang_name = "base"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::~Base()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::has_data() const
{
    return enable.is_set
	|| (base_match !=  nullptr && base_match->has_data())
	|| (base_relay_opt !=  nullptr && base_relay_opt->has_data())
	|| (default_profile !=  nullptr && default_profile->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (base_match !=  nullptr && base_match->has_operation())
	|| (base_relay_opt !=  nullptr && base_relay_opt->has_operation())
	|| (default_profile !=  nullptr && default_profile->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-match")
    {
        if(base_match != nullptr)
        {
            children["base-match"] = base_match;
        }
        else
        {
            base_match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch>();
            base_match->parent = this;
            children["base-match"] = base_match;
        }
        return children.at("base-match");
    }

    if(child_yang_name == "base-relay-opt")
    {
        if(base_relay_opt != nullptr)
        {
            children["base-relay-opt"] = base_relay_opt;
        }
        else
        {
            base_relay_opt = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt>();
            base_relay_opt->parent = this;
            children["base-relay-opt"] = base_relay_opt;
        }
        return children.at("base-relay-opt");
    }

    if(child_yang_name == "default-profile")
    {
        if(default_profile != nullptr)
        {
            children["default-profile"] = default_profile;
        }
        else
        {
            default_profile = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile>();
            default_profile->parent = this;
            children["default-profile"] = default_profile;
        }
        return children.at("default-profile");
    }

    if(child_yang_name == "match")
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
        else
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match>();
            match->parent = this;
            children["match"] = match;
        }
        return children.at("match");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_children()
{
    if(children.find("base-match") == children.end())
    {
        if(base_match != nullptr)
        {
            children["base-match"] = base_match;
        }
    }

    if(children.find("base-relay-opt") == children.end())
    {
        if(base_relay_opt != nullptr)
        {
            children["base-relay-opt"] = base_relay_opt;
        }
    }

    if(children.find("default-profile") == children.end())
    {
        if(default_profile != nullptr)
        {
            children["default-profile"] = default_profile;
        }
    }

    if(children.find("match") == children.end())
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::DefaultProfile()
    :
    profile_mode{YType::int32, "profile-mode"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "default-profile"; yang_parent_name = "base";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::~DefaultProfile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::has_data() const
{
    return profile_mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_mode.operation)
	|| is_set(profile_name.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultProfile' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_mode.is_set || is_set(profile_mode.operation)) leaf_name_data.push_back(profile_mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-mode")
    {
        profile_mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::Match()
    :
    def_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions>())
	,option_filters(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters>())
{
    def_options->parent = this;
    children["def-options"] = def_options;

    option_filters->parent = this;
    children["option-filters"] = option_filters;

    yang_name = "match"; yang_parent_name = "base";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::has_data() const
{
    return (def_options !=  nullptr && def_options->has_data())
	|| (option_filters !=  nullptr && option_filters->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::has_operation() const
{
    return is_set(operation)
	|| (def_options !=  nullptr && def_options->has_operation())
	|| (option_filters !=  nullptr && option_filters->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "def-options")
    {
        if(def_options != nullptr)
        {
            children["def-options"] = def_options;
        }
        else
        {
            def_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions>();
            def_options->parent = this;
            children["def-options"] = def_options;
        }
        return children.at("def-options");
    }

    if(child_yang_name == "option-filters")
    {
        if(option_filters != nullptr)
        {
            children["option-filters"] = option_filters;
        }
        else
        {
            option_filters = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters>();
            option_filters->parent = this;
            children["option-filters"] = option_filters;
        }
        return children.at("option-filters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_children()
{
    if(children.find("def-options") == children.end())
    {
        if(def_options != nullptr)
        {
            children["def-options"] = def_options;
        }
    }

    if(children.find("option-filters") == children.end())
    {
        if(option_filters != nullptr)
        {
            children["option-filters"] = option_filters;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilters()
{
    yang_name = "option-filters"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::~OptionFilters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::has_data() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::has_operation() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filters";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionFilters' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-filter")
    {
        for(auto const & c : option_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter>();
        c->parent = this;
        option_filter.push_back(std::move(c));
        children[segment_path] = option_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_children()
{
    for (auto const & c : option_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::OptionFilter()
    :
    format{YType::int32, "format"},
    matchoption{YType::int32, "matchoption"},
    pattern{YType::str, "pattern"},
    option_action{YType::enumeration, "option-action"}
{
    yang_name = "option-filter"; yang_parent_name = "option-filters";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::~OptionFilter()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::has_data() const
{
    return format.is_set
	|| matchoption.is_set
	|| pattern.is_set
	|| option_action.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(matchoption.operation)
	|| is_set(pattern.operation)
	|| is_set(option_action.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filter" <<"[format='" <<format <<"']" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionFilter' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (matchoption.is_set || is_set(matchoption.operation)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (option_action.is_set || is_set(option_action.operation)) leaf_name_data.push_back(option_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "matchoption")
    {
        matchoption = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "option-action")
    {
        option_action = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOptions()
{
    yang_name = "def-options"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::~DefOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::has_data() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::has_operation() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-options";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefOptions' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "def-option")
    {
        for(auto const & c : def_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption>();
        c->parent = this;
        def_option.push_back(std::move(c));
        children[segment_path] = def_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_children()
{
    for (auto const & c : def_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::DefOption()
    :
    def_matchoption{YType::int32, "def-matchoption"},
    def_matchaction{YType::enumeration, "def-matchaction"}
{
    yang_name = "def-option"; yang_parent_name = "def-options";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::~DefOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::has_data() const
{
    return def_matchoption.is_set
	|| def_matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::has_operation() const
{
    return is_set(operation)
	|| is_set(def_matchoption.operation)
	|| is_set(def_matchaction.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-option" <<"[def-matchoption='" <<def_matchoption <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (def_matchoption.is_set || is_set(def_matchoption.operation)) leaf_name_data.push_back(def_matchoption.get_name_leafdata());
    if (def_matchaction.is_set || is_set(def_matchaction.operation)) leaf_name_data.push_back(def_matchaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption = value;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::BaseRelayOpt()
    :
    authenticate{YType::int32, "authenticate"},
    remote_id{YType::str, "remote-id"}
{
    yang_name = "base-relay-opt"; yang_parent_name = "base";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::~BaseRelayOpt()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::has_data() const
{
    return authenticate.is_set
	|| remote_id.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(remote_id.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-relay-opt";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseRelayOpt' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::BaseMatch()
    :
    options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options>())
{
    options->parent = this;
    children["options"] = options;

    yang_name = "base-match"; yang_parent_name = "base";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::~BaseMatch()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::has_data() const
{
    return (options !=  nullptr && options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::has_operation() const
{
    return is_set(operation)
	|| (options !=  nullptr && options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseMatch' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options;
        }
        else
        {
            options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options>();
            options->parent = this;
            children["options"] = options;
        }
        return children.at("options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_children()
{
    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Options()
{
    yang_name = "options"; yang_parent_name = "base-match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::~Options()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::has_data() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::has_operation() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option")
    {
        for(auto const & c : option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option>();
        c->parent = this;
        option.push_back(std::move(c));
        children[segment_path] = option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_children()
{
    for (auto const & c : option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::Option()
    :
    format{YType::int32, "format"},
    opt60{YType::int32, "opt60"},
    opt60_hex_str{YType::str, "opt60-hex-str"}
    	,
    option_profile(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile>())
{
    option_profile->parent = this;
    children["option-profile"] = option_profile;

    yang_name = "option"; yang_parent_name = "options";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::has_data() const
{
    return format.is_set
	|| opt60.is_set
	|| opt60_hex_str.is_set
	|| (option_profile !=  nullptr && option_profile->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(opt60.operation)
	|| is_set(opt60_hex_str.operation)
	|| (option_profile !=  nullptr && option_profile->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option" <<"[format='" <<format <<"']" <<"[opt60='" <<opt60 <<"']" <<"[opt60-hex-str='" <<opt60_hex_str <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (opt60.is_set || is_set(opt60.operation)) leaf_name_data.push_back(opt60.get_name_leafdata());
    if (opt60_hex_str.is_set || is_set(opt60_hex_str.operation)) leaf_name_data.push_back(opt60_hex_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-profile")
    {
        if(option_profile != nullptr)
        {
            children["option-profile"] = option_profile;
        }
        else
        {
            option_profile = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile>();
            option_profile->parent = this;
            children["option-profile"] = option_profile;
        }
        return children.at("option-profile");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_children()
{
    if(children.find("option-profile") == children.end())
    {
        if(option_profile != nullptr)
        {
            children["option-profile"] = option_profile;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "opt60")
    {
        opt60 = value;
    }
    if(value_path == "opt60-hex-str")
    {
        opt60_hex_str = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::OptionProfile()
    :
    profile_mode{YType::int32, "profile-mode"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "option-profile"; yang_parent_name = "option";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::~OptionProfile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::has_data() const
{
    return profile_mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_mode.operation)
	|| is_set(profile_name.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionProfile' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_mode.is_set || is_set(profile_mode.operation)) leaf_name_data.push_back(profile_mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-mode")
    {
        profile_mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Server()
    :
    boot_filename{YType::str, "boot-filename"},
    domain_name{YType::str, "domain-name"},
    infinite_lease{YType::empty, "infinite-lease"},
    next_server{YType::str, "next-server"},
    pool{YType::str, "pool"},
    secure_arp{YType::empty, "secure-arp"},
    server_allow_move{YType::empty, "server-allow-move"},
    subnet_mask{YType::str, "subnet-mask"}
    	,
    aaa(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa>())
	,broadcast_flag(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag>())
	,classes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes>())
	,default_routers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters>())
	,dns_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers>())
	,lease(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease>())
	,lease_limit(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit>())
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match>())
	,net_bios_name_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers>())
	,netbios_node_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType>())
	,option_codes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes>())
	,relay(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay>())
	,requested_ip_address(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress>())
	,server_id_check(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck>())
	,session(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session>())
{
    aaa->parent = this;
    children["aaa"] = aaa;

    broadcast_flag->parent = this;
    children["broadcast-flag"] = broadcast_flag;

    classes->parent = this;
    children["classes"] = classes;

    default_routers->parent = this;
    children["default-routers"] = default_routers;

    dns_servers->parent = this;
    children["dns-servers"] = dns_servers;

    lease->parent = this;
    children["lease"] = lease;

    lease_limit->parent = this;
    children["lease-limit"] = lease_limit;

    match->parent = this;
    children["match"] = match;

    net_bios_name_servers->parent = this;
    children["net-bios-name-servers"] = net_bios_name_servers;

    netbios_node_type->parent = this;
    children["netbios-node-type"] = netbios_node_type;

    option_codes->parent = this;
    children["option-codes"] = option_codes;

    relay->parent = this;
    children["relay"] = relay;

    requested_ip_address->parent = this;
    children["requested-ip-address"] = requested_ip_address;

    server_id_check->parent = this;
    children["server-id-check"] = server_id_check;

    session->parent = this;
    children["session"] = session;

    yang_name = "server"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::~Server()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_data() const
{
    return boot_filename.is_set
	|| domain_name.is_set
	|| infinite_lease.is_set
	|| next_server.is_set
	|| pool.is_set
	|| secure_arp.is_set
	|| server_allow_move.is_set
	|| subnet_mask.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (default_routers !=  nullptr && default_routers->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (lease_limit !=  nullptr && lease_limit->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_data())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_data())
	|| (option_codes !=  nullptr && option_codes->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (requested_ip_address !=  nullptr && requested_ip_address->has_data())
	|| (server_id_check !=  nullptr && server_id_check->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(boot_filename.operation)
	|| is_set(domain_name.operation)
	|| is_set(infinite_lease.operation)
	|| is_set(next_server.operation)
	|| is_set(pool.operation)
	|| is_set(secure_arp.operation)
	|| is_set(server_allow_move.operation)
	|| is_set(subnet_mask.operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (default_routers !=  nullptr && default_routers->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (lease_limit !=  nullptr && lease_limit->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_operation())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_operation())
	|| (option_codes !=  nullptr && option_codes->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (requested_ip_address !=  nullptr && requested_ip_address->has_operation())
	|| (server_id_check !=  nullptr && server_id_check->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_filename.is_set || is_set(boot_filename.operation)) leaf_name_data.push_back(boot_filename.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (infinite_lease.is_set || is_set(infinite_lease.operation)) leaf_name_data.push_back(infinite_lease.get_name_leafdata());
    if (next_server.is_set || is_set(next_server.operation)) leaf_name_data.push_back(next_server.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (secure_arp.is_set || is_set(secure_arp.operation)) leaf_name_data.push_back(secure_arp.get_name_leafdata());
    if (server_allow_move.is_set || is_set(server_allow_move.operation)) leaf_name_data.push_back(server_allow_move.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.operation)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa")
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa;
        }
        else
        {
            aaa = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa>();
            aaa->parent = this;
            children["aaa"] = aaa;
        }
        return children.at("aaa");
    }

    if(child_yang_name == "broadcast-flag")
    {
        if(broadcast_flag != nullptr)
        {
            children["broadcast-flag"] = broadcast_flag;
        }
        else
        {
            broadcast_flag = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag>();
            broadcast_flag->parent = this;
            children["broadcast-flag"] = broadcast_flag;
        }
        return children.at("broadcast-flag");
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
        else
        {
            classes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes>();
            classes->parent = this;
            children["classes"] = classes;
        }
        return children.at("classes");
    }

    if(child_yang_name == "default-routers")
    {
        if(default_routers != nullptr)
        {
            children["default-routers"] = default_routers;
        }
        else
        {
            default_routers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters>();
            default_routers->parent = this;
            children["default-routers"] = default_routers;
        }
        return children.at("default-routers");
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers;
        }
        else
        {
            dns_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers>();
            dns_servers->parent = this;
            children["dns-servers"] = dns_servers;
        }
        return children.at("dns-servers");
    }

    if(child_yang_name == "lease")
    {
        if(lease != nullptr)
        {
            children["lease"] = lease;
        }
        else
        {
            lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease>();
            lease->parent = this;
            children["lease"] = lease;
        }
        return children.at("lease");
    }

    if(child_yang_name == "lease-limit")
    {
        if(lease_limit != nullptr)
        {
            children["lease-limit"] = lease_limit;
        }
        else
        {
            lease_limit = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit>();
            lease_limit->parent = this;
            children["lease-limit"] = lease_limit;
        }
        return children.at("lease-limit");
    }

    if(child_yang_name == "match")
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
        else
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match>();
            match->parent = this;
            children["match"] = match;
        }
        return children.at("match");
    }

    if(child_yang_name == "net-bios-name-servers")
    {
        if(net_bios_name_servers != nullptr)
        {
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
        else
        {
            net_bios_name_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers>();
            net_bios_name_servers->parent = this;
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
        return children.at("net-bios-name-servers");
    }

    if(child_yang_name == "netbios-node-type")
    {
        if(netbios_node_type != nullptr)
        {
            children["netbios-node-type"] = netbios_node_type;
        }
        else
        {
            netbios_node_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType>();
            netbios_node_type->parent = this;
            children["netbios-node-type"] = netbios_node_type;
        }
        return children.at("netbios-node-type");
    }

    if(child_yang_name == "option-codes")
    {
        if(option_codes != nullptr)
        {
            children["option-codes"] = option_codes;
        }
        else
        {
            option_codes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes>();
            option_codes->parent = this;
            children["option-codes"] = option_codes;
        }
        return children.at("option-codes");
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay;
        }
        else
        {
            relay = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay>();
            relay->parent = this;
            children["relay"] = relay;
        }
        return children.at("relay");
    }

    if(child_yang_name == "requested-ip-address")
    {
        if(requested_ip_address != nullptr)
        {
            children["requested-ip-address"] = requested_ip_address;
        }
        else
        {
            requested_ip_address = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress>();
            requested_ip_address->parent = this;
            children["requested-ip-address"] = requested_ip_address;
        }
        return children.at("requested-ip-address");
    }

    if(child_yang_name == "server-id-check")
    {
        if(server_id_check != nullptr)
        {
            children["server-id-check"] = server_id_check;
        }
        else
        {
            server_id_check = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck>();
            server_id_check->parent = this;
            children["server-id-check"] = server_id_check;
        }
        return children.at("server-id-check");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_children()
{
    if(children.find("aaa") == children.end())
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa;
        }
    }

    if(children.find("broadcast-flag") == children.end())
    {
        if(broadcast_flag != nullptr)
        {
            children["broadcast-flag"] = broadcast_flag;
        }
    }

    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
    }

    if(children.find("default-routers") == children.end())
    {
        if(default_routers != nullptr)
        {
            children["default-routers"] = default_routers;
        }
    }

    if(children.find("dns-servers") == children.end())
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers;
        }
    }

    if(children.find("lease") == children.end())
    {
        if(lease != nullptr)
        {
            children["lease"] = lease;
        }
    }

    if(children.find("lease-limit") == children.end())
    {
        if(lease_limit != nullptr)
        {
            children["lease-limit"] = lease_limit;
        }
    }

    if(children.find("match") == children.end())
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
    }

    if(children.find("net-bios-name-servers") == children.end())
    {
        if(net_bios_name_servers != nullptr)
        {
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
    }

    if(children.find("netbios-node-type") == children.end())
    {
        if(netbios_node_type != nullptr)
        {
            children["netbios-node-type"] = netbios_node_type;
        }
    }

    if(children.find("option-codes") == children.end())
    {
        if(option_codes != nullptr)
        {
            children["option-codes"] = option_codes;
        }
    }

    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay;
        }
    }

    if(children.find("requested-ip-address") == children.end())
    {
        if(requested_ip_address != nullptr)
        {
            children["requested-ip-address"] = requested_ip_address;
        }
    }

    if(children.find("server-id-check") == children.end())
    {
        if(server_id_check != nullptr)
        {
            children["server-id-check"] = server_id_check;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-filename")
    {
        boot_filename = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease = value;
    }
    if(value_path == "next-server")
    {
        next_server = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "secure-arp")
    {
        secure_arp = value;
    }
    if(value_path == "server-allow-move")
    {
        server_allow_move = value;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::ServerIdCheck()
    :
    check{YType::empty, "check"}
{
    yang_name = "server-id-check"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::~ServerIdCheck()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::has_data() const
{
    return check.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::has_operation() const
{
    return is_set(operation)
	|| is_set(check.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-id-check";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerIdCheck' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check")
    {
        check = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::LeaseLimit()
    :
    lease_limit_value{YType::enumeration, "lease-limit-value"},
    range{YType::uint32, "range"}
{
    yang_name = "lease-limit"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::~LeaseLimit()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::has_data() const
{
    return lease_limit_value.is_set
	|| range.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(lease_limit_value.operation)
	|| is_set(range.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-limit";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseLimit' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lease_limit_value.is_set || is_set(lease_limit_value.operation)) leaf_name_data.push_back(lease_limit_value.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lease-limit-value")
    {
        lease_limit_value = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::RequestedIpAddress()
    :
    check{YType::empty, "check"}
{
    yang_name = "requested-ip-address"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::~RequestedIpAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::has_data() const
{
    return check.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(check.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requested-ip-address";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequestedIpAddress' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check")
    {
        check = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::DefaultRouters()
    :
    default_router{YType::str, "default-router"}
{
    yang_name = "default-routers"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::~DefaultRouters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::has_data() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::has_operation() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_router.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-routers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultRouters' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::NetBiosNameServers()
    :
    net_bios_name_server{YType::str, "net-bios-name-server"}
{
    yang_name = "net-bios-name-servers"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::~NetBiosNameServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::has_data() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::has_operation() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(net_bios_name_server.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-bios-name-servers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetBiosNameServers' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto net_bios_name_server_name_datas = net_bios_name_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_bios_name_server_name_datas.begin(), net_bios_name_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Match()
    :
    option_defaults(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults>())
	,options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options>())
{
    option_defaults->parent = this;
    children["option-defaults"] = option_defaults;

    options->parent = this;
    children["options"] = options;

    yang_name = "match"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::has_data() const
{
    return (option_defaults !=  nullptr && option_defaults->has_data())
	|| (options !=  nullptr && options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::has_operation() const
{
    return is_set(operation)
	|| (option_defaults !=  nullptr && option_defaults->has_operation())
	|| (options !=  nullptr && options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-defaults")
    {
        if(option_defaults != nullptr)
        {
            children["option-defaults"] = option_defaults;
        }
        else
        {
            option_defaults = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults>();
            option_defaults->parent = this;
            children["option-defaults"] = option_defaults;
        }
        return children.at("option-defaults");
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options;
        }
        else
        {
            options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options>();
            options->parent = this;
            children["options"] = options;
        }
        return children.at("options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_children()
{
    if(children.find("option-defaults") == children.end())
    {
        if(option_defaults != nullptr)
        {
            children["option-defaults"] = option_defaults;
        }
    }

    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefaults()
{
    yang_name = "option-defaults"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::~OptionDefaults()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::has_data() const
{
    for (std::size_t index=0; index<option_default.size(); index++)
    {
        if(option_default[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::has_operation() const
{
    for (std::size_t index=0; index<option_default.size(); index++)
    {
        if(option_default[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-defaults";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionDefaults' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-default")
    {
        for(auto const & c : option_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault>();
        c->parent = this;
        option_default.push_back(std::move(c));
        children[segment_path] = option_default.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_children()
{
    for (auto const & c : option_default)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::OptionDefault()
    :
    matchoption{YType::enumeration, "matchoption"},
    matchaction{YType::enumeration, "matchaction"}
{
    yang_name = "option-default"; yang_parent_name = "option-defaults";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::~OptionDefault()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::has_data() const
{
    return matchoption.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::has_operation() const
{
    return is_set(operation)
	|| is_set(matchoption.operation)
	|| is_set(matchaction.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-default" <<"[matchoption='" <<matchoption <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionDefault' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.operation)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.operation)) leaf_name_data.push_back(matchaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Options()
{
    yang_name = "options"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::~Options()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::has_data() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::has_operation() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option")
    {
        for(auto const & c : option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option>();
        c->parent = this;
        option.push_back(std::move(c));
        children[segment_path] = option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_children()
{
    for (auto const & c : option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::Option()
    :
    format{YType::int32, "format"},
    matchoption{YType::enumeration, "matchoption"},
    pattern{YType::str, "pattern"},
    matchaction{YType::enumeration, "matchaction"}
{
    yang_name = "option"; yang_parent_name = "options";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::has_data() const
{
    return format.is_set
	|| matchoption.is_set
	|| pattern.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(matchoption.operation)
	|| is_set(pattern.operation)
	|| is_set(matchaction.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option" <<"[format='" <<format <<"']" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (matchoption.is_set || is_set(matchoption.operation)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.operation)) leaf_name_data.push_back(matchaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "matchoption")
    {
        matchoption = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::BroadcastFlag()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "broadcast-flag"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::~BroadcastFlag()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-flag";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastFlag' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::Session()
    :
    throttle_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType>())
{
    throttle_type->parent = this;
    children["throttle-type"] = throttle_type;

    yang_name = "session"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::~Session()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::has_data() const
{
    return (throttle_type !=  nullptr && throttle_type->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::has_operation() const
{
    return is_set(operation)
	|| (throttle_type !=  nullptr && throttle_type->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "throttle-type")
    {
        if(throttle_type != nullptr)
        {
            children["throttle-type"] = throttle_type;
        }
        else
        {
            throttle_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType>();
            throttle_type->parent = this;
            children["throttle-type"] = throttle_type;
        }
        return children.at("throttle-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_children()
{
    if(children.find("throttle-type") == children.end())
    {
        if(throttle_type != nullptr)
        {
            children["throttle-type"] = throttle_type;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::ThrottleType()
    :
    mac_throttle(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle>())
{
    mac_throttle->parent = this;
    children["mac-throttle"] = mac_throttle;

    yang_name = "throttle-type"; yang_parent_name = "session";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::~ThrottleType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::has_data() const
{
    return (mac_throttle !=  nullptr && mac_throttle->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::has_operation() const
{
    return is_set(operation)
	|| (mac_throttle !=  nullptr && mac_throttle->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-type";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleType' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-throttle")
    {
        if(mac_throttle != nullptr)
        {
            children["mac-throttle"] = mac_throttle;
        }
        else
        {
            mac_throttle = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle>();
            mac_throttle->parent = this;
            children["mac-throttle"] = mac_throttle;
        }
        return children.at("mac-throttle");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_children()
{
    if(children.find("mac-throttle") == children.end())
    {
        if(mac_throttle != nullptr)
        {
            children["mac-throttle"] = mac_throttle;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::MacThrottle()
    :
    num_block{YType::uint32, "num-block"},
    num_discover{YType::uint32, "num-discover"},
    num_request{YType::uint32, "num-request"}
{
    yang_name = "mac-throttle"; yang_parent_name = "throttle-type";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::~MacThrottle()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::has_data() const
{
    return num_block.is_set
	|| num_discover.is_set
	|| num_request.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(num_block.operation)
	|| is_set(num_discover.operation)
	|| is_set(num_request.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-throttle";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacThrottle' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_block.is_set || is_set(num_block.operation)) leaf_name_data.push_back(num_block.get_name_leafdata());
    if (num_discover.is_set || is_set(num_discover.operation)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_request.is_set || is_set(num_request.operation)) leaf_name_data.push_back(num_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-block")
    {
        num_block = value;
    }
    if(value_path == "num-discover")
    {
        num_discover = value;
    }
    if(value_path == "num-request")
    {
        num_request = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::~Classes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classes' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    boot_filename{YType::str, "boot-filename"},
    domain_name{YType::str, "domain-name"},
    enable{YType::empty, "enable"},
    infinite_lease{YType::empty, "infinite-lease"},
    next_server{YType::str, "next-server"},
    pool{YType::str, "pool"},
    subnet_mask{YType::str, "subnet-mask"}
    	,
    class_match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch>())
	,default_routers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters>())
	,dns_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers>())
	,lease(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease>())
	,net_bios_name_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers>())
	,netbios_node_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType>())
	,option_codes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes>())
{
    class_match->parent = this;
    children["class-match"] = class_match;

    default_routers->parent = this;
    children["default-routers"] = default_routers;

    dns_servers->parent = this;
    children["dns-servers"] = dns_servers;

    lease->parent = this;
    children["lease"] = lease;

    net_bios_name_servers->parent = this;
    children["net-bios-name-servers"] = net_bios_name_servers;

    netbios_node_type->parent = this;
    children["netbios-node-type"] = netbios_node_type;

    option_codes->parent = this;
    children["option-codes"] = option_codes;

    yang_name = "class"; yang_parent_name = "classes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::~Class_()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| boot_filename.is_set
	|| domain_name.is_set
	|| enable.is_set
	|| infinite_lease.is_set
	|| next_server.is_set
	|| pool.is_set
	|| subnet_mask.is_set
	|| (class_match !=  nullptr && class_match->has_data())
	|| (default_routers !=  nullptr && default_routers->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_data())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_data())
	|| (option_codes !=  nullptr && option_codes->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(boot_filename.operation)
	|| is_set(domain_name.operation)
	|| is_set(enable.operation)
	|| is_set(infinite_lease.operation)
	|| is_set(next_server.operation)
	|| is_set(pool.operation)
	|| is_set(subnet_mask.operation)
	|| (class_match !=  nullptr && class_match->has_operation())
	|| (default_routers !=  nullptr && default_routers->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_operation())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_operation())
	|| (option_codes !=  nullptr && option_codes->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Class_' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (boot_filename.is_set || is_set(boot_filename.operation)) leaf_name_data.push_back(boot_filename.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (infinite_lease.is_set || is_set(infinite_lease.operation)) leaf_name_data.push_back(infinite_lease.get_name_leafdata());
    if (next_server.is_set || is_set(next_server.operation)) leaf_name_data.push_back(next_server.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.operation)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-match")
    {
        if(class_match != nullptr)
        {
            children["class-match"] = class_match;
        }
        else
        {
            class_match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch>();
            class_match->parent = this;
            children["class-match"] = class_match;
        }
        return children.at("class-match");
    }

    if(child_yang_name == "default-routers")
    {
        if(default_routers != nullptr)
        {
            children["default-routers"] = default_routers;
        }
        else
        {
            default_routers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters>();
            default_routers->parent = this;
            children["default-routers"] = default_routers;
        }
        return children.at("default-routers");
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers;
        }
        else
        {
            dns_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers>();
            dns_servers->parent = this;
            children["dns-servers"] = dns_servers;
        }
        return children.at("dns-servers");
    }

    if(child_yang_name == "lease")
    {
        if(lease != nullptr)
        {
            children["lease"] = lease;
        }
        else
        {
            lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease>();
            lease->parent = this;
            children["lease"] = lease;
        }
        return children.at("lease");
    }

    if(child_yang_name == "net-bios-name-servers")
    {
        if(net_bios_name_servers != nullptr)
        {
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
        else
        {
            net_bios_name_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers>();
            net_bios_name_servers->parent = this;
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
        return children.at("net-bios-name-servers");
    }

    if(child_yang_name == "netbios-node-type")
    {
        if(netbios_node_type != nullptr)
        {
            children["netbios-node-type"] = netbios_node_type;
        }
        else
        {
            netbios_node_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType>();
            netbios_node_type->parent = this;
            children["netbios-node-type"] = netbios_node_type;
        }
        return children.at("netbios-node-type");
    }

    if(child_yang_name == "option-codes")
    {
        if(option_codes != nullptr)
        {
            children["option-codes"] = option_codes;
        }
        else
        {
            option_codes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes>();
            option_codes->parent = this;
            children["option-codes"] = option_codes;
        }
        return children.at("option-codes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_children()
{
    if(children.find("class-match") == children.end())
    {
        if(class_match != nullptr)
        {
            children["class-match"] = class_match;
        }
    }

    if(children.find("default-routers") == children.end())
    {
        if(default_routers != nullptr)
        {
            children["default-routers"] = default_routers;
        }
    }

    if(children.find("dns-servers") == children.end())
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers;
        }
    }

    if(children.find("lease") == children.end())
    {
        if(lease != nullptr)
        {
            children["lease"] = lease;
        }
    }

    if(children.find("net-bios-name-servers") == children.end())
    {
        if(net_bios_name_servers != nullptr)
        {
            children["net-bios-name-servers"] = net_bios_name_servers;
        }
    }

    if(children.find("netbios-node-type") == children.end())
    {
        if(netbios_node_type != nullptr)
        {
            children["netbios-node-type"] = netbios_node_type;
        }
    }

    if(children.find("option-codes") == children.end())
    {
        if(option_codes != nullptr)
        {
            children["option-codes"] = option_codes;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "boot-filename")
    {
        boot_filename = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease = value;
    }
    if(value_path == "next-server")
    {
        next_server = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::DefaultRouters()
    :
    default_router{YType::str, "default-router"}
{
    yang_name = "default-routers"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::~DefaultRouters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::has_data() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::has_operation() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_router.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-routers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultRouters' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::NetBiosNameServers()
    :
    net_bios_name_server{YType::str, "net-bios-name-server"}
{
    yang_name = "net-bios-name-servers"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::~NetBiosNameServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::has_data() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::has_operation() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(net_bios_name_server.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-bios-name-servers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetBiosNameServers' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto net_bios_name_server_name_datas = net_bios_name_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_bios_name_server_name_datas.begin(), net_bios_name_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassMatch()
    :
    l2_interface{YType::str, "l2-interface"},
    vrf{YType::str, "vrf"}
    	,
    class_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions>())
{
    class_options->parent = this;
    children["class-options"] = class_options;

    yang_name = "class-match"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::~ClassMatch()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::has_data() const
{
    return l2_interface.is_set
	|| vrf.is_set
	|| (class_options !=  nullptr && class_options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_interface.operation)
	|| is_set(vrf.operation)
	|| (class_options !=  nullptr && class_options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMatch' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_interface.is_set || is_set(l2_interface.operation)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-options")
    {
        if(class_options != nullptr)
        {
            children["class-options"] = class_options;
        }
        else
        {
            class_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions>();
            class_options->parent = this;
            children["class-options"] = class_options;
        }
        return children.at("class-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_children()
{
    if(children.find("class-options") == children.end())
    {
        if(class_options != nullptr)
        {
            children["class-options"] = class_options;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2-interface")
    {
        l2_interface = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOptions()
{
    yang_name = "class-options"; yang_parent_name = "class-match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::~ClassOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::has_data() const
{
    for (std::size_t index=0; index<class_option.size(); index++)
    {
        if(class_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::has_operation() const
{
    for (std::size_t index=0; index<class_option.size(); index++)
    {
        if(class_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-options";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassOptions' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-option")
    {
        for(auto const & c : class_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption>();
        c->parent = this;
        class_option.push_back(std::move(c));
        children[segment_path] = class_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_children()
{
    for (auto const & c : class_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::ClassOption()
    :
    matchoption{YType::enumeration, "matchoption"},
    bit_mask{YType::str, "bit-mask"},
    pattern{YType::str, "pattern"}
{
    yang_name = "class-option"; yang_parent_name = "class-options";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::~ClassOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::has_data() const
{
    return matchoption.is_set
	|| bit_mask.is_set
	|| pattern.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::has_operation() const
{
    return is_set(operation)
	|| is_set(matchoption.operation)
	|| is_set(bit_mask.operation)
	|| is_set(pattern.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-option" <<"[matchoption='" <<matchoption <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.operation)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (bit_mask.is_set || is_set(bit_mask.operation)) leaf_name_data.push_back(bit_mask.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
    }
    if(value_path == "bit-mask")
    {
        bit_mask = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::Lease()
    :
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    infinite{YType::str, "infinite"},
    minutes{YType::uint32, "minutes"}
{
    yang_name = "lease"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::~Lease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| infinite.is_set
	|| minutes.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(infinite.operation)
	|| is_set(minutes.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lease' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::NetbiosNodeType()
    :
    broadcast_node{YType::str, "broadcast-node"},
    hexadecimal{YType::str, "hexadecimal"},
    hybrid_node{YType::str, "hybrid-node"},
    mixed_node{YType::str, "mixed-node"},
    peer_to_peer_node{YType::str, "peer-to-peer-node"}
{
    yang_name = "netbios-node-type"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::~NetbiosNodeType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::has_data() const
{
    return broadcast_node.is_set
	|| hexadecimal.is_set
	|| hybrid_node.is_set
	|| mixed_node.is_set
	|| peer_to_peer_node.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_node.operation)
	|| is_set(hexadecimal.operation)
	|| is_set(hybrid_node.operation)
	|| is_set(mixed_node.operation)
	|| is_set(peer_to_peer_node.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netbios-node-type";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetbiosNodeType' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_node.is_set || is_set(broadcast_node.operation)) leaf_name_data.push_back(broadcast_node.get_name_leafdata());
    if (hexadecimal.is_set || is_set(hexadecimal.operation)) leaf_name_data.push_back(hexadecimal.get_name_leafdata());
    if (hybrid_node.is_set || is_set(hybrid_node.operation)) leaf_name_data.push_back(hybrid_node.get_name_leafdata());
    if (mixed_node.is_set || is_set(mixed_node.operation)) leaf_name_data.push_back(mixed_node.get_name_leafdata());
    if (peer_to_peer_node.is_set || is_set(peer_to_peer_node.operation)) leaf_name_data.push_back(peer_to_peer_node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node = value;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal = value;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node = value;
    }
    if(value_path == "mixed-node")
    {
        mixed_node = value;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{
    yang_name = "dns-servers"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::~DnsServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dns_server.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnsServers' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCodes()
{
    yang_name = "option-codes"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::~OptionCodes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::has_data() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::has_operation() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-codes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionCodes' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-code")
    {
        for(auto const & c : option_code)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode>();
        c->parent = this;
        option_code.push_back(std::move(c));
        children[segment_path] = option_code.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_children()
{
    for (auto const & c : option_code)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::OptionCode()
    :
    option_code{YType::uint32, "option-code"},
    ascii_string{YType::str, "ascii-string"},
    force_insert{YType::int32, "force-insert"},
    hex_string{YType::str, "hex-string"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "option-code"; yang_parent_name = "option-codes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::~OptionCode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::has_data() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_code.is_set
	|| ascii_string.is_set
	|| force_insert.is_set
	|| hex_string.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::has_operation() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(option_code.operation)
	|| is_set(ascii_string.operation)
	|| is_set(force_insert.operation)
	|| is_set(hex_string.operation)
	|| is_set(ip_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-code" <<"[option-code='" <<option_code <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionCode' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_code.is_set || is_set(option_code.operation)) leaf_name_data.push_back(option_code.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (force_insert.is_set || is_set(force_insert.operation)) leaf_name_data.push_back(force_insert.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    auto ip_address_name_datas = ip_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_address_name_datas.begin(), ip_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option-code")
    {
        option_code = value;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "force-insert")
    {
        force_insert = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "ip-address")
    {
        ip_address.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::Relay()
    :
    authenticate{YType::int32, "authenticate"}
{
    yang_name = "relay"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::has_data() const
{
    return authenticate.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::Lease()
    :
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    infinite{YType::str, "infinite"},
    minutes{YType::uint32, "minutes"}
{
    yang_name = "lease"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::~Lease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| infinite.is_set
	|| minutes.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(infinite.operation)
	|| is_set(minutes.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lease' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::NetbiosNodeType()
    :
    broadcast_node{YType::str, "broadcast-node"},
    hexadecimal{YType::str, "hexadecimal"},
    hybrid_node{YType::str, "hybrid-node"},
    mixed_node{YType::str, "mixed-node"},
    peer_to_peer_node{YType::str, "peer-to-peer-node"}
{
    yang_name = "netbios-node-type"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::~NetbiosNodeType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::has_data() const
{
    return broadcast_node.is_set
	|| hexadecimal.is_set
	|| hybrid_node.is_set
	|| mixed_node.is_set
	|| peer_to_peer_node.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_node.operation)
	|| is_set(hexadecimal.operation)
	|| is_set(hybrid_node.operation)
	|| is_set(mixed_node.operation)
	|| is_set(peer_to_peer_node.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netbios-node-type";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetbiosNodeType' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_node.is_set || is_set(broadcast_node.operation)) leaf_name_data.push_back(broadcast_node.get_name_leafdata());
    if (hexadecimal.is_set || is_set(hexadecimal.operation)) leaf_name_data.push_back(hexadecimal.get_name_leafdata());
    if (hybrid_node.is_set || is_set(hybrid_node.operation)) leaf_name_data.push_back(hybrid_node.get_name_leafdata());
    if (mixed_node.is_set || is_set(mixed_node.operation)) leaf_name_data.push_back(mixed_node.get_name_leafdata());
    if (peer_to_peer_node.is_set || is_set(peer_to_peer_node.operation)) leaf_name_data.push_back(peer_to_peer_node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node = value;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal = value;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node = value;
    }
    if(value_path == "mixed-node")
    {
        mixed_node = value;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::Aaa()
    :
    dhcp_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption>())
{
    dhcp_option->parent = this;
    children["dhcp-option"] = dhcp_option;

    yang_name = "aaa"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::~Aaa()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::has_data() const
{
    return (dhcp_option !=  nullptr && dhcp_option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::has_operation() const
{
    return is_set(operation)
	|| (dhcp_option !=  nullptr && dhcp_option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp-option")
    {
        if(dhcp_option != nullptr)
        {
            children["dhcp-option"] = dhcp_option;
        }
        else
        {
            dhcp_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption>();
            dhcp_option->parent = this;
            children["dhcp-option"] = dhcp_option;
        }
        return children.at("dhcp-option");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::get_children()
{
    if(children.find("dhcp-option") == children.end())
    {
        if(dhcp_option != nullptr)
        {
            children["dhcp-option"] = dhcp_option;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::DhcpOption()
    :
    force_insert{YType::empty, "force-insert"}
{
    yang_name = "dhcp-option"; yang_parent_name = "aaa";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::~DhcpOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::has_data() const
{
    return force_insert.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::has_operation() const
{
    return is_set(operation)
	|| is_set(force_insert.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-option";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_insert.is_set || is_set(force_insert.operation)) leaf_name_data.push_back(force_insert.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "force-insert")
    {
        force_insert = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{
    yang_name = "dns-servers"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::~DnsServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dns_server.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnsServers' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCodes()
{
    yang_name = "option-codes"; yang_parent_name = "server";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::~OptionCodes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::has_data() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::has_operation() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-codes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionCodes' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-code")
    {
        for(auto const & c : option_code)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode>();
        c->parent = this;
        option_code.push_back(std::move(c));
        children[segment_path] = option_code.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_children()
{
    for (auto const & c : option_code)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::OptionCode()
    :
    option_code{YType::uint32, "option-code"},
    ascii_string{YType::str, "ascii-string"},
    force_insert{YType::int32, "force-insert"},
    hex_string{YType::str, "hex-string"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "option-code"; yang_parent_name = "option-codes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::~OptionCode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::has_data() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_code.is_set
	|| ascii_string.is_set
	|| force_insert.is_set
	|| hex_string.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::has_operation() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(option_code.operation)
	|| is_set(ascii_string.operation)
	|| is_set(force_insert.operation)
	|| is_set(hex_string.operation)
	|| is_set(ip_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-code" <<"[option-code='" <<option_code <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionCode' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_code.is_set || is_set(option_code.operation)) leaf_name_data.push_back(option_code.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (force_insert.is_set || is_set(force_insert.operation)) leaf_name_data.push_back(force_insert.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    auto ip_address_name_datas = ip_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_address_name_datas.begin(), ip_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option-code")
    {
        option_code = value;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "force-insert")
    {
        force_insert = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "ip-address")
    {
        ip_address.append(value);
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Relay()
    :
    broadcast_policy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>())
	,gi_addr_policy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>())
	,relay_information_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>())
{
    broadcast_policy->parent = this;
    children["broadcast-policy"] = broadcast_policy;

    gi_addr_policy->parent = this;
    children["gi-addr-policy"] = gi_addr_policy;

    relay_information_option->parent = this;
    children["relay-information-option"] = relay_information_option;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "relay"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_data() const
{
    return (broadcast_policy !=  nullptr && broadcast_policy->has_data())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_data())
	|| (relay_information_option !=  nullptr && relay_information_option->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_operation() const
{
    return is_set(operation)
	|| (broadcast_policy !=  nullptr && broadcast_policy->has_operation())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_operation())
	|| (relay_information_option !=  nullptr && relay_information_option->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-policy")
    {
        if(broadcast_policy != nullptr)
        {
            children["broadcast-policy"] = broadcast_policy;
        }
        else
        {
            broadcast_policy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>();
            broadcast_policy->parent = this;
            children["broadcast-policy"] = broadcast_policy;
        }
        return children.at("broadcast-policy");
    }

    if(child_yang_name == "gi-addr-policy")
    {
        if(gi_addr_policy != nullptr)
        {
            children["gi-addr-policy"] = gi_addr_policy;
        }
        else
        {
            gi_addr_policy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>();
            gi_addr_policy->parent = this;
            children["gi-addr-policy"] = gi_addr_policy;
        }
        return children.at("gi-addr-policy");
    }

    if(child_yang_name == "relay-information-option")
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option;
        }
        else
        {
            relay_information_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>();
            relay_information_option->parent = this;
            children["relay-information-option"] = relay_information_option;
        }
        return children.at("relay-information-option");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_children()
{
    if(children.find("broadcast-policy") == children.end())
    {
        if(broadcast_policy != nullptr)
        {
            children["broadcast-policy"] = broadcast_policy;
        }
    }

    if(children.find("gi-addr-policy") == children.end())
    {
        if(gi_addr_policy != nullptr)
        {
            children["gi-addr-policy"] = gi_addr_policy;
        }
    }

    if(children.find("relay-information-option") == children.end())
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::GiAddrPolicy()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "gi-addr-policy"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::~GiAddrPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gi-addr-policy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GiAddrPolicy' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
        else
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses;
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddresses' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    ip_address{YType::str, "ip-address"},
    enable{YType::empty, "enable"},
    gateway_address{YType::str, "gateway-address"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return ip_address.is_set
	|| enable.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(enable.operation)
	|| is_set(gateway_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::RelayInformationOption()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    check{YType::empty, "check"},
    insert{YType::empty, "insert"},
    policy{YType::enumeration, "policy"},
    subscriber_id{YType::str, "subscriber-id"},
    vpn{YType::empty, "vpn"},
    vpn_mode{YType::enumeration, "vpn-mode"}
{
    yang_name = "relay-information-option"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::~RelayInformationOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_data() const
{
    return allow_untrusted.is_set
	|| check.is_set
	|| insert.is_set
	|| policy.is_set
	|| subscriber_id.is_set
	|| vpn.is_set
	|| vpn_mode.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_untrusted.operation)
	|| is_set(check.operation)
	|| is_set(insert.operation)
	|| is_set(policy.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(vpn.operation)
	|| is_set(vpn_mode.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information-option";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayInformationOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.operation)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());
    if (insert.is_set || is_set(insert.operation)) leaf_name_data.push_back(insert.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (vpn_mode.is_set || is_set(vpn_mode.operation)) leaf_name_data.push_back(vpn_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
    }
    if(value_path == "check")
    {
        check = value;
    }
    if(value_path == "insert")
    {
        insert = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "vpn")
    {
        vpn = value;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::BroadcastPolicy()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "broadcast-policy"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::~BroadcastPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-policy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastPolicy' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Proxy()
    :
    enable{YType::empty, "enable"},
    proxy_allow_move{YType::empty, "proxy-allow-move"},
    secure_arp{YType::empty, "secure-arp"}
    	,
    broadcast_flag(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag>())
	,classes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes>())
	,lease_proxy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy>())
	,limit_lease(nullptr) // presence node
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match>())
	,relay_information(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation>())
	,sessions(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs>())
{
    broadcast_flag->parent = this;
    children["broadcast-flag"] = broadcast_flag;

    classes->parent = this;
    children["classes"] = classes;

    lease_proxy->parent = this;
    children["lease-proxy"] = lease_proxy;

    match->parent = this;
    children["match"] = match;

    relay_information->parent = this;
    children["relay-information"] = relay_information;

    sessions->parent = this;
    children["sessions"] = sessions;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "proxy"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::~Proxy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::has_data() const
{
    return enable.is_set
	|| proxy_allow_move.is_set
	|| secure_arp.is_set
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (lease_proxy !=  nullptr && lease_proxy->has_data())
	|| (limit_lease !=  nullptr && limit_lease->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (relay_information !=  nullptr && relay_information->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(proxy_allow_move.operation)
	|| is_set(secure_arp.operation)
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (lease_proxy !=  nullptr && lease_proxy->has_operation())
	|| (limit_lease !=  nullptr && limit_lease->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (relay_information !=  nullptr && relay_information->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proxy' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (proxy_allow_move.is_set || is_set(proxy_allow_move.operation)) leaf_name_data.push_back(proxy_allow_move.get_name_leafdata());
    if (secure_arp.is_set || is_set(secure_arp.operation)) leaf_name_data.push_back(secure_arp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-flag")
    {
        if(broadcast_flag != nullptr)
        {
            children["broadcast-flag"] = broadcast_flag;
        }
        else
        {
            broadcast_flag = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag>();
            broadcast_flag->parent = this;
            children["broadcast-flag"] = broadcast_flag;
        }
        return children.at("broadcast-flag");
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
        else
        {
            classes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes>();
            classes->parent = this;
            children["classes"] = classes;
        }
        return children.at("classes");
    }

    if(child_yang_name == "lease-proxy")
    {
        if(lease_proxy != nullptr)
        {
            children["lease-proxy"] = lease_proxy;
        }
        else
        {
            lease_proxy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy>();
            lease_proxy->parent = this;
            children["lease-proxy"] = lease_proxy;
        }
        return children.at("lease-proxy");
    }

    if(child_yang_name == "limit-lease")
    {
        if(limit_lease != nullptr)
        {
            children["limit-lease"] = limit_lease;
        }
        else
        {
            limit_lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease>();
            limit_lease->parent = this;
            children["limit-lease"] = limit_lease;
        }
        return children.at("limit-lease");
    }

    if(child_yang_name == "match")
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
        else
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match>();
            match->parent = this;
            children["match"] = match;
        }
        return children.at("match");
    }

    if(child_yang_name == "relay-information")
    {
        if(relay_information != nullptr)
        {
            children["relay-information"] = relay_information;
        }
        else
        {
            relay_information = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation>();
            relay_information->parent = this;
            children["relay-information"] = relay_information;
        }
        return children.at("relay-information");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_children()
{
    if(children.find("broadcast-flag") == children.end())
    {
        if(broadcast_flag != nullptr)
        {
            children["broadcast-flag"] = broadcast_flag;
        }
    }

    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
    }

    if(children.find("lease-proxy") == children.end())
    {
        if(lease_proxy != nullptr)
        {
            children["lease-proxy"] = lease_proxy;
        }
    }

    if(children.find("limit-lease") == children.end())
    {
        if(limit_lease != nullptr)
        {
            children["limit-lease"] = limit_lease;
        }
    }

    if(children.find("match") == children.end())
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
    }

    if(children.find("relay-information") == children.end())
    {
        if(relay_information != nullptr)
        {
            children["relay-information"] = relay_information;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "proxy-allow-move")
    {
        proxy_allow_move = value;
    }
    if(value_path == "secure-arp")
    {
        secure_arp = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::~Classes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classes' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    enable{YType::empty, "enable"}
    	,
    match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs>())
{
    match->parent = this;
    children["match"] = match;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "class"; yang_parent_name = "classes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::~Class_()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| enable.is_set
	|| (match !=  nullptr && match->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(enable.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Class_' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match")
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
        else
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match>();
            match->parent = this;
            children["match"] = match;
        }
        return children.at("match");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_children()
{
    if(children.find("match") == children.end())
    {
        if(match != nullptr)
        {
            children["match"] = match;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Match()
    :
    vrf{YType::str, "vrf"}
    	,
    option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option>())
{
    option->parent = this;
    children["option"] = option;

    yang_name = "match"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::has_data() const
{
    return vrf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option")
    {
        if(option != nullptr)
        {
            children["option"] = option;
        }
        else
        {
            option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option>();
            option->parent = this;
            children["option"] = option;
        }
        return children.at("option");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_children()
{
    if(children.find("option") == children.end())
    {
        if(option != nullptr)
        {
            children["option"] = option;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::Option()
    :
    bit_mask{YType::str, "bit-mask"},
    option_type{YType::enumeration, "option-type"},
    pattern{YType::str, "pattern"}
{
    yang_name = "option"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::has_data() const
{
    return bit_mask.is_set
	|| option_type.is_set
	|| pattern.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_mask.operation)
	|| is_set(option_type.operation)
	|| is_set(pattern.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_mask.is_set || is_set(bit_mask.operation)) leaf_name_data.push_back(bit_mask.get_name_leafdata());
    if (option_type.is_set || is_set(option_type.operation)) leaf_name_data.push_back(option_type.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-mask")
    {
        bit_mask = value;
    }
    if(value_path == "option-type")
    {
        option_type = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "class";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
        else
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses;
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddresses' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    server_address{YType::str, "server-address"},
    gateway_address{YType::str, "gateway-address"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return server_address.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(server_address.operation)
	|| is_set(gateway_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[server-address='" <<server_address <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-address")
    {
        server_address = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::RelayInformation()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    authenticate{YType::enumeration, "authenticate"},
    check{YType::empty, "check"},
    circuit_id{YType::empty, "circuit-id"},
    option{YType::empty, "option"},
    policy{YType::enumeration, "policy"},
    remote_id{YType::str, "remote-id"},
    remote_id_suppress{YType::empty, "remote-id-suppress"},
    remote_id_xr{YType::empty, "remote-id-xr"},
    vpn{YType::empty, "vpn"},
    vpn_mode{YType::enumeration, "vpn-mode"}
{
    yang_name = "relay-information"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::~RelayInformation()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::has_data() const
{
    return allow_untrusted.is_set
	|| authenticate.is_set
	|| check.is_set
	|| circuit_id.is_set
	|| option.is_set
	|| policy.is_set
	|| remote_id.is_set
	|| remote_id_suppress.is_set
	|| remote_id_xr.is_set
	|| vpn.is_set
	|| vpn_mode.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_untrusted.operation)
	|| is_set(authenticate.operation)
	|| is_set(check.operation)
	|| is_set(circuit_id.operation)
	|| is_set(option.operation)
	|| is_set(policy.operation)
	|| is_set(remote_id.operation)
	|| is_set(remote_id_suppress.operation)
	|| is_set(remote_id_xr.operation)
	|| is_set(vpn.operation)
	|| is_set(vpn_mode.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayInformation' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.operation)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (remote_id_suppress.is_set || is_set(remote_id_suppress.operation)) leaf_name_data.push_back(remote_id_suppress.get_name_leafdata());
    if (remote_id_xr.is_set || is_set(remote_id_xr.operation)) leaf_name_data.push_back(remote_id_xr.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (vpn_mode.is_set || is_set(vpn_mode.operation)) leaf_name_data.push_back(vpn_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
    }
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "check")
    {
        check = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "remote-id-suppress")
    {
        remote_id_suppress = value;
    }
    if(value_path == "remote-id-xr")
    {
        remote_id_xr = value;
    }
    if(value_path == "vpn")
    {
        vpn = value;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
        else
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses;
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddresses' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    server_address{YType::str, "server-address"},
    gateway_address{YType::str, "gateway-address"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return server_address.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(server_address.operation)
	|| is_set(gateway_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[server-address='" <<server_address <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-address")
    {
        server_address = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::Sessions()
    :
    proxy_throttle_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType>())
{
    proxy_throttle_type->parent = this;
    children["proxy-throttle-type"] = proxy_throttle_type;

    yang_name = "sessions"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::~Sessions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::has_data() const
{
    return (proxy_throttle_type !=  nullptr && proxy_throttle_type->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::has_operation() const
{
    return is_set(operation)
	|| (proxy_throttle_type !=  nullptr && proxy_throttle_type->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "proxy-throttle-type")
    {
        if(proxy_throttle_type != nullptr)
        {
            children["proxy-throttle-type"] = proxy_throttle_type;
        }
        else
        {
            proxy_throttle_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType>();
            proxy_throttle_type->parent = this;
            children["proxy-throttle-type"] = proxy_throttle_type;
        }
        return children.at("proxy-throttle-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_children()
{
    if(children.find("proxy-throttle-type") == children.end())
    {
        if(proxy_throttle_type != nullptr)
        {
            children["proxy-throttle-type"] = proxy_throttle_type;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyThrottleType()
    :
    proxy_mac_throttle(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle>())
{
    proxy_mac_throttle->parent = this;
    children["proxy-mac-throttle"] = proxy_mac_throttle;

    yang_name = "proxy-throttle-type"; yang_parent_name = "sessions";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::~ProxyThrottleType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::has_data() const
{
    return (proxy_mac_throttle !=  nullptr && proxy_mac_throttle->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::has_operation() const
{
    return is_set(operation)
	|| (proxy_mac_throttle !=  nullptr && proxy_mac_throttle->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-throttle-type";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyThrottleType' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "proxy-mac-throttle")
    {
        if(proxy_mac_throttle != nullptr)
        {
            children["proxy-mac-throttle"] = proxy_mac_throttle;
        }
        else
        {
            proxy_mac_throttle = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle>();
            proxy_mac_throttle->parent = this;
            children["proxy-mac-throttle"] = proxy_mac_throttle;
        }
        return children.at("proxy-mac-throttle");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_children()
{
    if(children.find("proxy-mac-throttle") == children.end())
    {
        if(proxy_mac_throttle != nullptr)
        {
            children["proxy-mac-throttle"] = proxy_mac_throttle;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::ProxyMacThrottle()
    :
    num_block{YType::uint32, "num-block"},
    num_discover{YType::uint32, "num-discover"},
    num_request{YType::uint32, "num-request"}
{
    yang_name = "proxy-mac-throttle"; yang_parent_name = "proxy-throttle-type";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::~ProxyMacThrottle()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::has_data() const
{
    return num_block.is_set
	|| num_discover.is_set
	|| num_request.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(num_block.operation)
	|| is_set(num_discover.operation)
	|| is_set(num_request.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-mac-throttle";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyMacThrottle' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_block.is_set || is_set(num_block.operation)) leaf_name_data.push_back(num_block.get_name_leafdata());
    if (num_discover.is_set || is_set(num_discover.operation)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_request.is_set || is_set(num_request.operation)) leaf_name_data.push_back(num_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-block")
    {
        num_block = value;
    }
    if(value_path == "num-discover")
    {
        num_discover = value;
    }
    if(value_path == "num-request")
    {
        num_request = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::LimitLease()
    :
    limit_lease_count{YType::uint32, "limit-lease-count"},
    limit_type{YType::enumeration, "limit-type"}
{
    yang_name = "limit-lease"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::~LimitLease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::has_data() const
{
    return limit_lease_count.is_set
	|| limit_type.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::has_operation() const
{
    return is_set(operation)
	|| is_set(limit_lease_count.operation)
	|| is_set(limit_type.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-lease";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LimitLease' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit_lease_count.is_set || is_set(limit_lease_count.operation)) leaf_name_data.push_back(limit_lease_count.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.operation)) leaf_name_data.push_back(limit_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit-lease-count")
    {
        limit_lease_count = value;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::LeaseProxy()
    :
    client_lease_time{YType::uint32, "client-lease-time"},
    set_server_options{YType::empty, "set-server-options"}
{
    yang_name = "lease-proxy"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::~LeaseProxy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::has_data() const
{
    return client_lease_time.is_set
	|| set_server_options.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::has_operation() const
{
    return is_set(operation)
	|| is_set(client_lease_time.operation)
	|| is_set(set_server_options.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-proxy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseProxy' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_lease_time.is_set || is_set(client_lease_time.operation)) leaf_name_data.push_back(client_lease_time.get_name_leafdata());
    if (set_server_options.is_set || is_set(set_server_options.operation)) leaf_name_data.push_back(set_server_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-lease-time")
    {
        client_lease_time = value;
    }
    if(value_path == "set-server-options")
    {
        set_server_options = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::BroadcastFlag()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "broadcast-flag"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::~BroadcastFlag()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-flag";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastFlag' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::Match()
    :
    def_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions>())
	,option_filters(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters>())
{
    def_options->parent = this;
    children["def-options"] = def_options;

    option_filters->parent = this;
    children["option-filters"] = option_filters;

    yang_name = "match"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::has_data() const
{
    return (def_options !=  nullptr && def_options->has_data())
	|| (option_filters !=  nullptr && option_filters->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::has_operation() const
{
    return is_set(operation)
	|| (def_options !=  nullptr && def_options->has_operation())
	|| (option_filters !=  nullptr && option_filters->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "def-options")
    {
        if(def_options != nullptr)
        {
            children["def-options"] = def_options;
        }
        else
        {
            def_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions>();
            def_options->parent = this;
            children["def-options"] = def_options;
        }
        return children.at("def-options");
    }

    if(child_yang_name == "option-filters")
    {
        if(option_filters != nullptr)
        {
            children["option-filters"] = option_filters;
        }
        else
        {
            option_filters = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters>();
            option_filters->parent = this;
            children["option-filters"] = option_filters;
        }
        return children.at("option-filters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_children()
{
    if(children.find("def-options") == children.end())
    {
        if(def_options != nullptr)
        {
            children["def-options"] = def_options;
        }
    }

    if(children.find("option-filters") == children.end())
    {
        if(option_filters != nullptr)
        {
            children["option-filters"] = option_filters;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOptions()
{
    yang_name = "def-options"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::~DefOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::has_data() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::has_operation() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-options";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefOptions' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "def-option")
    {
        for(auto const & c : def_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption>();
        c->parent = this;
        def_option.push_back(std::move(c));
        children[segment_path] = def_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_children()
{
    for (auto const & c : def_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::DefOption()
    :
    def_matchoption{YType::int32, "def-matchoption"},
    def_matchaction{YType::enumeration, "def-matchaction"}
{
    yang_name = "def-option"; yang_parent_name = "def-options";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::~DefOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::has_data() const
{
    return def_matchoption.is_set
	|| def_matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::has_operation() const
{
    return is_set(operation)
	|| is_set(def_matchoption.operation)
	|| is_set(def_matchaction.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-option" <<"[def-matchoption='" <<def_matchoption <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefOption' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (def_matchoption.is_set || is_set(def_matchoption.operation)) leaf_name_data.push_back(def_matchoption.get_name_leafdata());
    if (def_matchaction.is_set || is_set(def_matchaction.operation)) leaf_name_data.push_back(def_matchaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption = value;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilters()
{
    yang_name = "option-filters"; yang_parent_name = "match";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::~OptionFilters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::has_data() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::has_operation() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filters";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionFilters' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option-filter")
    {
        for(auto const & c : option_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter>();
        c->parent = this;
        option_filter.push_back(std::move(c));
        children[segment_path] = option_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_children()
{
    for (auto const & c : option_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::OptionFilter()
    :
    format{YType::int32, "format"},
    matchoption{YType::int32, "matchoption"},
    pattern{YType::str, "pattern"},
    matchaction{YType::enumeration, "matchaction"}
{
    yang_name = "option-filter"; yang_parent_name = "option-filters";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::~OptionFilter()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::has_data() const
{
    return format.is_set
	|| matchoption.is_set
	|| pattern.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(matchoption.operation)
	|| is_set(pattern.operation)
	|| is_set(matchaction.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filter" <<"[format='" <<format <<"']" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionFilter' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (matchoption.is_set || is_set(matchoption.operation)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.operation)) leaf_name_data.push_back(matchaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "matchoption")
    {
        matchoption = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
    }
}

Ipv4Dhcpd::Database::Database()
    :
    full_write_interval{YType::uint32, "full-write-interval"},
    incremental_write_interval{YType::uint32, "incremental-write-interval"},
    proxy{YType::empty, "proxy"},
    server{YType::empty, "server"},
    snoop{YType::empty, "snoop"}
{
    yang_name = "database"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Database::~Database()
{
}

bool Ipv4Dhcpd::Database::has_data() const
{
    return full_write_interval.is_set
	|| incremental_write_interval.is_set
	|| proxy.is_set
	|| server.is_set
	|| snoop.is_set;
}

bool Ipv4Dhcpd::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(full_write_interval.operation)
	|| is_set(incremental_write_interval.operation)
	|| is_set(proxy.operation)
	|| is_set(server.operation)
	|| is_set(snoop.operation);
}

std::string Ipv4Dhcpd::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_write_interval.is_set || is_set(full_write_interval.operation)) leaf_name_data.push_back(full_write_interval.get_name_leafdata());
    if (incremental_write_interval.is_set || is_set(incremental_write_interval.operation)) leaf_name_data.push_back(incremental_write_interval.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());
    if (snoop.is_set || is_set(snoop.operation)) leaf_name_data.push_back(snoop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Database::get_children()
{
    return children;
}

void Ipv4Dhcpd::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-write-interval")
    {
        full_write_interval = value;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
    if(value_path == "snoop")
    {
        snoop = value;
    }
}

Ipv4Dhcpd::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Interfaces::~Interfaces()
{
}

bool Ipv4Dhcpd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    none{YType::empty, "none"}
    	,
    base_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>())
	,profile(nullptr) // presence node
	,proxy_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>())
	,relay_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>())
	,server_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>())
	,snoop_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>())
	,static_mode(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode>())
{
    base_interface->parent = this;
    children["base-interface"] = base_interface;

    proxy_interface->parent = this;
    children["proxy-interface"] = proxy_interface;

    relay_interface->parent = this;
    children["relay-interface"] = relay_interface;

    server_interface->parent = this;
    children["server-interface"] = server_interface;

    snoop_interface->parent = this;
    children["snoop-interface"] = snoop_interface;

    static_mode->parent = this;
    children["static-mode"] = static_mode;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv4Dhcpd::Interfaces::Interface::~Interface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| none.is_set
	|| (base_interface !=  nullptr && base_interface->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (proxy_interface !=  nullptr && proxy_interface->has_data())
	|| (relay_interface !=  nullptr && relay_interface->has_data())
	|| (server_interface !=  nullptr && server_interface->has_data())
	|| (snoop_interface !=  nullptr && snoop_interface->has_data())
	|| (static_mode !=  nullptr && static_mode->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(none.operation)
	|| (base_interface !=  nullptr && base_interface->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (proxy_interface !=  nullptr && proxy_interface->has_operation())
	|| (relay_interface !=  nullptr && relay_interface->has_operation())
	|| (server_interface !=  nullptr && server_interface->has_operation())
	|| (snoop_interface !=  nullptr && snoop_interface->has_operation())
	|| (static_mode !=  nullptr && static_mode->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-interface")
    {
        if(base_interface != nullptr)
        {
            children["base-interface"] = base_interface;
        }
        else
        {
            base_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>();
            base_interface->parent = this;
            children["base-interface"] = base_interface;
        }
        return children.at("base-interface");
    }

    if(child_yang_name == "profile")
    {
        if(profile != nullptr)
        {
            children["profile"] = profile;
        }
        else
        {
            profile = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::Profile>();
            profile->parent = this;
            children["profile"] = profile;
        }
        return children.at("profile");
    }

    if(child_yang_name == "proxy-interface")
    {
        if(proxy_interface != nullptr)
        {
            children["proxy-interface"] = proxy_interface;
        }
        else
        {
            proxy_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>();
            proxy_interface->parent = this;
            children["proxy-interface"] = proxy_interface;
        }
        return children.at("proxy-interface");
    }

    if(child_yang_name == "relay-interface")
    {
        if(relay_interface != nullptr)
        {
            children["relay-interface"] = relay_interface;
        }
        else
        {
            relay_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>();
            relay_interface->parent = this;
            children["relay-interface"] = relay_interface;
        }
        return children.at("relay-interface");
    }

    if(child_yang_name == "server-interface")
    {
        if(server_interface != nullptr)
        {
            children["server-interface"] = server_interface;
        }
        else
        {
            server_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>();
            server_interface->parent = this;
            children["server-interface"] = server_interface;
        }
        return children.at("server-interface");
    }

    if(child_yang_name == "snoop-interface")
    {
        if(snoop_interface != nullptr)
        {
            children["snoop-interface"] = snoop_interface;
        }
        else
        {
            snoop_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>();
            snoop_interface->parent = this;
            children["snoop-interface"] = snoop_interface;
        }
        return children.at("snoop-interface");
    }

    if(child_yang_name == "static-mode")
    {
        if(static_mode != nullptr)
        {
            children["static-mode"] = static_mode;
        }
        else
        {
            static_mode = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode>();
            static_mode->parent = this;
            children["static-mode"] = static_mode;
        }
        return children.at("static-mode");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::get_children()
{
    if(children.find("base-interface") == children.end())
    {
        if(base_interface != nullptr)
        {
            children["base-interface"] = base_interface;
        }
    }

    if(children.find("profile") == children.end())
    {
        if(profile != nullptr)
        {
            children["profile"] = profile;
        }
    }

    if(children.find("proxy-interface") == children.end())
    {
        if(proxy_interface != nullptr)
        {
            children["proxy-interface"] = proxy_interface;
        }
    }

    if(children.find("relay-interface") == children.end())
    {
        if(relay_interface != nullptr)
        {
            children["relay-interface"] = relay_interface;
        }
    }

    if(children.find("server-interface") == children.end())
    {
        if(server_interface != nullptr)
        {
            children["server-interface"] = server_interface;
        }
    }

    if(children.find("snoop-interface") == children.end())
    {
        if(snoop_interface != nullptr)
        {
            children["snoop-interface"] = snoop_interface;
        }
    }

    if(children.find("static-mode") == children.end())
    {
        if(static_mode != nullptr)
        {
            children["static-mode"] = static_mode;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::ProxyInterface()
    :
    profile{YType::str, "profile"}
    	,
    dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "proxy-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::~ProxyInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_data() const
{
    return profile.is_set
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyInterface' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp-circuit-id")
    {
        if(dhcp_circuit_id != nullptr)
        {
            children["dhcp-circuit-id"] = dhcp_circuit_id;
        }
        else
        {
            dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId>();
            dhcp_circuit_id->parent = this;
            children["dhcp-circuit-id"] = dhcp_circuit_id;
        }
        return children.at("dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_children()
{
    if(children.find("dhcp-circuit-id") == children.end())
    {
        if(dhcp_circuit_id != nullptr)
        {
            children["dhcp-circuit-id"] = dhcp_circuit_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::DhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{
    yang_name = "dhcp-circuit-id"; yang_parent_name = "proxy-interface";
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::~DhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpCircuitId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseInterface()
    :
    profile{YType::str, "profile"}
    	,
    base_dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "base-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::~BaseInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_data() const
{
    return profile.is_set
	|| (base_dhcp_circuit_id !=  nullptr && base_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| (base_dhcp_circuit_id !=  nullptr && base_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseInterface' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-dhcp-circuit-id")
    {
        if(base_dhcp_circuit_id != nullptr)
        {
            children["base-dhcp-circuit-id"] = base_dhcp_circuit_id;
        }
        else
        {
            base_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId>();
            base_dhcp_circuit_id->parent = this;
            children["base-dhcp-circuit-id"] = base_dhcp_circuit_id;
        }
        return children.at("base-dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_children()
{
    if(children.find("base-dhcp-circuit-id") == children.end())
    {
        if(base_dhcp_circuit_id != nullptr)
        {
            children["base-dhcp-circuit-id"] = base_dhcp_circuit_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::BaseDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{
    yang_name = "base-dhcp-circuit-id"; yang_parent_name = "base-interface";
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::~BaseDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseDhcpCircuitId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayInterface()
    :
    relay_dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "relay-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::~RelayInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_data() const
{
    return (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_operation() const
{
    return is_set(operation)
	|| (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayInterface' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relay-dhcp-circuit-id")
    {
        if(relay_dhcp_circuit_id != nullptr)
        {
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id;
        }
        else
        {
            relay_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId>();
            relay_dhcp_circuit_id->parent = this;
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id;
        }
        return children.at("relay-dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_children()
{
    if(children.find("relay-dhcp-circuit-id") == children.end())
    {
        if(relay_dhcp_circuit_id != nullptr)
        {
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::RelayDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{
    yang_name = "relay-dhcp-circuit-id"; yang_parent_name = "relay-interface";
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::~RelayDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayDhcpCircuitId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::StaticMode()
    :
    statics(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics>())
{
    statics->parent = this;
    children["statics"] = statics;

    yang_name = "static-mode"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::~StaticMode()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::has_data() const
{
    return (statics !=  nullptr && statics->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::has_operation() const
{
    return is_set(operation)
	|| (statics !=  nullptr && statics->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mode";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticMode' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statics")
    {
        if(statics != nullptr)
        {
            children["statics"] = statics;
        }
        else
        {
            statics = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics>();
            statics->parent = this;
            children["statics"] = statics;
        }
        return children.at("statics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_children()
{
    if(children.find("statics") == children.end())
    {
        if(statics != nullptr)
        {
            children["statics"] = statics;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Statics()
{
    yang_name = "statics"; yang_parent_name = "static-mode";
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::~Statics()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statics";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statics' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_>();
        c->parent = this;
        static_.push_back(std::move(c));
        children[segment_path] = static_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_children()
{
    for (auto const & c : static_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::Static_()
    :
    client_id{YType::uint32, "client-id"},
    layer{YType::enumeration, "layer"},
    mac_address{YType::str, "mac-address"},
    static_address{YType::str, "static-address"}
{
    yang_name = "static"; yang_parent_name = "statics";
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::~Static_()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::has_data() const
{
    return client_id.is_set
	|| layer.is_set
	|| mac_address.is_set
	|| static_address.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(layer.operation)
	|| is_set(mac_address.operation)
	|| is_set(static_address.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[client-id='" <<client_id <<"']" <<"[layer='" <<layer <<"']" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (layer.is_set || is_set(layer.operation)) leaf_name_data.push_back(layer.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (static_address.is_set || is_set(static_address.operation)) leaf_name_data.push_back(static_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "layer")
    {
        layer = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "static-address")
    {
        static_address = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::Profile::Profile()
    :
    mode{YType::enumeration, "mode"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "profile"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_data() const
{
    return mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(profile_name.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::Profile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerInterface()
    :
    profile{YType::str, "profile"}
    	,
    server_dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "server-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::~ServerInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_data() const
{
    return profile.is_set
	|| (server_dhcp_circuit_id !=  nullptr && server_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| (server_dhcp_circuit_id !=  nullptr && server_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerInterface' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-dhcp-circuit-id")
    {
        if(server_dhcp_circuit_id != nullptr)
        {
            children["server-dhcp-circuit-id"] = server_dhcp_circuit_id;
        }
        else
        {
            server_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId>();
            server_dhcp_circuit_id->parent = this;
            children["server-dhcp-circuit-id"] = server_dhcp_circuit_id;
        }
        return children.at("server-dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_children()
{
    if(children.find("server-dhcp-circuit-id") == children.end())
    {
        if(server_dhcp_circuit_id != nullptr)
        {
            children["server-dhcp-circuit-id"] = server_dhcp_circuit_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::ServerDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{
    yang_name = "server-dhcp-circuit-id"; yang_parent_name = "server-interface";
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::~ServerDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerDhcpCircuitId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopInterface()
    :
    snoop_circuit_id(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>())
{
    snoop_circuit_id->parent = this;
    children["snoop-circuit-id"] = snoop_circuit_id;

    yang_name = "snoop-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::~SnoopInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_data() const
{
    return (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_operation() const
{
    return is_set(operation)
	|| (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnoopInterface' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "snoop-circuit-id")
    {
        if(snoop_circuit_id != nullptr)
        {
            children["snoop-circuit-id"] = snoop_circuit_id;
        }
        else
        {
            snoop_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>();
            snoop_circuit_id->parent = this;
            children["snoop-circuit-id"] = snoop_circuit_id;
        }
        return children.at("snoop-circuit-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_children()
{
    if(children.find("snoop-circuit-id") == children.end())
    {
        if(snoop_circuit_id != nullptr)
        {
            children["snoop-circuit-id"] = snoop_circuit_id;
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::SnoopCircuitId()
    :
    circuit_id_value{YType::str, "circuit-id-value"},
    format_type{YType::uint32, "format-type"}
{
    yang_name = "snoop-circuit-id"; yang_parent_name = "snoop-interface";
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::~SnoopCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_data() const
{
    return circuit_id_value.is_set
	|| format_type.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id_value.operation)
	|| is_set(format_type.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnoopCircuitId' in Cisco_IOS_XR_ipv4_dhcpd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id_value.is_set || is_set(circuit_id_value.operation)) leaf_name_data.push_back(circuit_id_value.get_name_leafdata());
    if (format_type.is_set || is_set(format_type.operation)) leaf_name_data.push_back(format_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id-value")
    {
        circuit_id_value = value;
    }
    if(value_path == "format-type")
    {
        format_type = value;
    }
}

Ipv4Dhcpd::DuplicateMacAllowed::DuplicateMacAllowed()
    :
    duplicate_mac{YType::empty, "duplicate-mac"},
    exclude_vlan{YType::empty, "exclude-vlan"}
{
    yang_name = "duplicate-mac-allowed"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::DuplicateMacAllowed::~DuplicateMacAllowed()
{
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_data() const
{
    return duplicate_mac.is_set
	|| exclude_vlan.is_set;
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicate_mac.operation)
	|| is_set(exclude_vlan.operation);
}

std::string Ipv4Dhcpd::DuplicateMacAllowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-mac-allowed";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::DuplicateMacAllowed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicate_mac.is_set || is_set(duplicate_mac.operation)) leaf_name_data.push_back(duplicate_mac.get_name_leafdata());
    if (exclude_vlan.is_set || is_set(exclude_vlan.operation)) leaf_name_data.push_back(exclude_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::DuplicateMacAllowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::DuplicateMacAllowed::get_children()
{
    return children;
}

void Ipv4Dhcpd::DuplicateMacAllowed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicate-mac")
    {
        duplicate_mac = value;
    }
    if(value_path == "exclude-vlan")
    {
        exclude_vlan = value;
    }
}

Ipv4Dhcpd::RateLimit::RateLimit()
    :
    num_discover{YType::uint32, "num-discover"},
    num_period{YType::uint32, "num-period"}
{
    yang_name = "rate-limit"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::RateLimit::~RateLimit()
{
}

bool Ipv4Dhcpd::RateLimit::has_data() const
{
    return num_discover.is_set
	|| num_period.is_set;
}

bool Ipv4Dhcpd::RateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(num_discover.operation)
	|| is_set(num_period.operation);
}

std::string Ipv4Dhcpd::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_discover.is_set || is_set(num_discover.operation)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_period.is_set || is_set(num_period.operation)) leaf_name_data.push_back(num_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Dhcpd::RateLimit::get_children()
{
    return children;
}

void Ipv4Dhcpd::RateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-discover")
    {
        num_discover = value;
    }
    if(value_path == "num-period")
    {
        num_period = value;
    }
}

const Enum::YLeaf Dhcpv4LimitLease1Enum::interface {1, "interface"};
const Enum::YLeaf Dhcpv4LimitLease1Enum::circuit_id {2, "circuit-id"};
const Enum::YLeaf Dhcpv4LimitLease1Enum::remote_id {3, "remote-id"};
const Enum::YLeaf Dhcpv4LimitLease1Enum::circuit_id_remote_id {4, "circuit-id-remote-id"};

const Enum::YLeaf ProxyActionEnum::allow {0, "allow"};
const Enum::YLeaf ProxyActionEnum::drop {1, "drop"};

const Enum::YLeaf Ipv4DhcpdLayerEnum::layer2 {2, "layer2"};
const Enum::YLeaf Ipv4DhcpdLayerEnum::layer3 {3, "layer3"};

const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_chassis {1, "physical-chassis"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_slot {2, "physical-slot"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_sub_slot {3, "physical-sub-slot"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_port {4, "physical-port"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_sub_port {5, "physical-sub-port"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::inner_vlan_id {6, "inner-vlan-id"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::outer_vlan_id {7, "outer-vlan-id"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::l2_interface {8, "l2-interface"};

const Enum::YLeaf MatchactionEnum::allow {0, "allow"};
const Enum::YLeaf MatchactionEnum::drop {1, "drop"};

const Enum::YLeaf LeaseLimitValueEnum::per_interface {1, "per-interface"};
const Enum::YLeaf LeaseLimitValueEnum::per_circuit_id {2, "per-circuit-id"};
const Enum::YLeaf LeaseLimitValueEnum::per_remote_id {3, "per-remote-id"};

const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::replace {0, "replace"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::keep {1, "keep"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::drop {2, "drop"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::encapsulate {3, "encapsulate"};

const Enum::YLeaf Ipv4DhcpdRelayInfoOptionAuthenticateEnum::received {0, "received"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionAuthenticateEnum::inserted {1, "inserted"};

const Enum::YLeaf PolicyEnum::ignore {0, "ignore"};
const Enum::YLeaf PolicyEnum::check {1, "check"};
const Enum::YLeaf PolicyEnum::unicastalways {2, "unicastalways"};

const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::ignore {0, "ignore"};
const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::check {1, "check"};
const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::unicast_always {2, "unicast-always"};

const Enum::YLeaf Dhcpv4MatchOptionEnum::Y_60__FWD_SLASH__60 {60, "60/60"};
const Enum::YLeaf Dhcpv4MatchOptionEnum::Y_77__FWD_SLASH__77 {77, "77/77"};
const Enum::YLeaf Dhcpv4MatchOptionEnum::Y_124__FWD_SLASH__124 {124, "124/124"};
const Enum::YLeaf Dhcpv4MatchOptionEnum::Y_125__FWD_SLASH__125 {125, "125/125"};

const Enum::YLeaf Ipv4DhcpdRelayInfoOptionvpnModeEnum::rfc {0, "rfc"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionvpnModeEnum::cisco {1, "cisco"};

const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::keep {0, "keep"};
const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::replace {1, "replace"};
const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::drop {2, "drop"};

const Enum::YLeaf Ipv4DhcpdFmtEnum::no_format {0, "no-format"};
const Enum::YLeaf Ipv4DhcpdFmtEnum::format {1, "format"};

const Enum::YLeaf MatchoptionEnum::circuitid {1, "circuitid"};
const Enum::YLeaf MatchoptionEnum::remoteid {2, "remoteid"};
const Enum::YLeaf MatchoptionEnum::Y_60 {60, "60"};
const Enum::YLeaf MatchoptionEnum::Y_77 {77, "77"};
const Enum::YLeaf MatchoptionEnum::Y_124 {124, "124"};
const Enum::YLeaf MatchoptionEnum::Y_125 {125, "125"};

const Enum::YLeaf BaseActionEnum::allow {0, "allow"};
const Enum::YLeaf BaseActionEnum::drop {1, "drop"};

const Enum::YLeaf Ipv4DhcpdModeEnum::base {0, "base"};
const Enum::YLeaf Ipv4DhcpdModeEnum::relay {1, "relay"};
const Enum::YLeaf Ipv4DhcpdModeEnum::snoop {2, "snoop"};
const Enum::YLeaf Ipv4DhcpdModeEnum::server {3, "server"};
const Enum::YLeaf Ipv4DhcpdModeEnum::proxy {4, "proxy"};
const Enum::YLeaf Ipv4DhcpdModeEnum::base2 {5, "base2"};


}
}

