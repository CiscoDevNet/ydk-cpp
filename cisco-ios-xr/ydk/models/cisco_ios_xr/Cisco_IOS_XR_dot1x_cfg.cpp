
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dot1x_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dot1x_cfg {

Dot1x::Dot1x()
    :
    dot1x_profile(this, {"profile_name"})
{

    yang_name = "dot1x"; yang_parent_name = "Cisco-IOS-XR-dot1x-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Dot1x::~Dot1x()
{
}

bool Dot1x::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1x_profile.len(); index++)
    {
        if(dot1x_profile[index]->has_data())
            return true;
    }
    return false;
}

bool Dot1x::has_operation() const
{
    for (std::size_t index=0; index<dot1x_profile.len(); index++)
    {
        if(dot1x_profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-cfg:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x-profile")
    {
        auto c = std::make_shared<Dot1x::Dot1xProfile>();
        c->parent = this;
        dot1x_profile.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1x_profile.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dot1x::clone_ptr() const
{
    return std::make_shared<Dot1x>();
}

std::string Dot1x::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dot1x::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dot1x::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dot1x::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-profile")
        return true;
    return false;
}

Dot1x::Dot1xProfile::Dot1xProfile()
    :
    profile_name{YType::str, "profile-name"},
    pae{YType::str, "pae"}
        ,
    supplicant(std::make_shared<Dot1x::Dot1xProfile::Supplicant>())
    , authenticator(std::make_shared<Dot1x::Dot1xProfile::Authenticator>())
{
    supplicant->parent = this;
    authenticator->parent = this;

    yang_name = "dot1x-profile"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Dot1x::Dot1xProfile::~Dot1xProfile()
{
}

bool Dot1x::Dot1xProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| pae.is_set
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (authenticator !=  nullptr && authenticator->has_data());
}

bool Dot1x::Dot1xProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (authenticator !=  nullptr && authenticator->has_operation());
}

std::string Dot1x::Dot1xProfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-cfg:dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1x::Dot1xProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::Dot1xProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::Dot1xProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Dot1x::Dot1xProfile::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Dot1x::Dot1xProfile::Authenticator>();
        }
        return authenticator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::Dot1xProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(authenticator != nullptr)
    {
        children["authenticator"] = authenticator;
    }

    return children;
}

void Dot1x::Dot1xProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1x::Dot1xProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Dot1x::Dot1xProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supplicant" || name == "authenticator" || name == "profile-name" || name == "pae")
        return true;
    return false;
}

Dot1x::Dot1xProfile::Supplicant::Supplicant()
    :
    eap_profile{YType::str, "eap-profile"}
{

    yang_name = "supplicant"; yang_parent_name = "dot1x-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Dot1x::Dot1xProfile::Supplicant::~Supplicant()
{
}

bool Dot1x::Dot1xProfile::Supplicant::has_data() const
{
    if (is_presence_container) return true;
    return eap_profile.is_set;
}

bool Dot1x::Dot1xProfile::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap_profile.yfilter);
}

std::string Dot1x::Dot1xProfile::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::Dot1xProfile::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap_profile.is_set || is_set(eap_profile.yfilter)) leaf_name_data.push_back(eap_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::Dot1xProfile::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::Dot1xProfile::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Dot1x::Dot1xProfile::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap-profile")
    {
        eap_profile = value;
        eap_profile.value_namespace = name_space;
        eap_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1x::Dot1xProfile::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap-profile")
    {
        eap_profile.yfilter = yfilter;
    }
}

bool Dot1x::Dot1xProfile::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap-profile")
        return true;
    return false;
}

Dot1x::Dot1xProfile::Authenticator::Authenticator()
    :
    timers(std::make_shared<Dot1x::Dot1xProfile::Authenticator::Timers>())
{
    timers->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Dot1x::Dot1xProfile::Authenticator::~Authenticator()
{
}

bool Dot1x::Dot1xProfile::Authenticator::has_data() const
{
    if (is_presence_container) return true;
    return (timers !=  nullptr && timers->has_data());
}

bool Dot1x::Dot1xProfile::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Dot1x::Dot1xProfile::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::Dot1xProfile::Authenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::Dot1xProfile::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Dot1x::Dot1xProfile::Authenticator::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::Dot1xProfile::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Dot1x::Dot1xProfile::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1x::Dot1xProfile::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1x::Dot1xProfile::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Dot1x::Dot1xProfile::Authenticator::Timers::Timers()
    :
    reauth_time(std::make_shared<Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime>())
{
    reauth_time->parent = this;

    yang_name = "timers"; yang_parent_name = "authenticator"; is_top_level_class = false; has_list_ancestor = true; 
}

Dot1x::Dot1xProfile::Authenticator::Timers::~Timers()
{
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (reauth_time !=  nullptr && reauth_time->has_data());
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (reauth_time !=  nullptr && reauth_time->has_operation());
}

std::string Dot1x::Dot1xProfile::Authenticator::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::Dot1xProfile::Authenticator::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::Dot1xProfile::Authenticator::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reauth-time")
    {
        if(reauth_time == nullptr)
        {
            reauth_time = std::make_shared<Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime>();
        }
        return reauth_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::Dot1xProfile::Authenticator::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reauth_time != nullptr)
    {
        children["reauth-time"] = reauth_time;
    }

    return children;
}

void Dot1x::Dot1xProfile::Authenticator::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1x::Dot1xProfile::Authenticator::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauth-time")
        return true;
    return false;
}

Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::ReauthTime()
    :
    server{YType::boolean, "server"},
    local{YType::uint32, "local"}
{

    yang_name = "reauth-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::~ReauthTime()
{
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set
	|| local.is_set;
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauth-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Dot1x::Dot1xProfile::Authenticator::Timers::ReauthTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "local")
        return true;
    return false;
}

Eap::Eap()
    :
    eap_profile(this, {"profile_name"})
{

    yang_name = "eap"; yang_parent_name = "Cisco-IOS-XR-dot1x-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Eap::~Eap()
{
}

bool Eap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eap_profile.len(); index++)
    {
        if(eap_profile[index]->has_data())
            return true;
    }
    return false;
}

bool Eap::has_operation() const
{
    for (std::size_t index=0; index<eap_profile.len(); index++)
    {
        if(eap_profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-cfg:eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap-profile")
    {
        auto c = std::make_shared<Eap::EapProfile>();
        c->parent = this;
        eap_profile.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eap_profile.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Eap::clone_ptr() const
{
    return std::make_shared<Eap>();
}

std::string Eap::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Eap::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Eap::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Eap::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap-profile")
        return true;
    return false;
}

Eap::EapProfile::EapProfile()
    :
    profile_name{YType::str, "profile-name"},
    identity{YType::str, "identity"}
        ,
    eaptls(std::make_shared<Eap::EapProfile::Eaptls>())
{
    eaptls->parent = this;

    yang_name = "eap-profile"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = false; 
}

Eap::EapProfile::~EapProfile()
{
}

bool Eap::EapProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| identity.is_set
	|| (eaptls !=  nullptr && eaptls->has_data());
}

bool Eap::EapProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (eaptls !=  nullptr && eaptls->has_operation());
}

std::string Eap::EapProfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-cfg:eap/" << get_segment_path();
    return path_buffer.str();
}

std::string Eap::EapProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eap::EapProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Eap::EapProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eaptls")
    {
        if(eaptls == nullptr)
        {
            eaptls = std::make_shared<Eap::EapProfile::Eaptls>();
        }
        return eaptls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eap::EapProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eaptls != nullptr)
    {
        children["eaptls"] = eaptls;
    }

    return children;
}

void Eap::EapProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Eap::EapProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Eap::EapProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eaptls" || name == "profile-name" || name == "identity")
        return true;
    return false;
}

Eap::EapProfile::Eaptls::Eaptls()
    :
    pki_trustpoint{YType::str, "pki-trustpoint"}
{

    yang_name = "eaptls"; yang_parent_name = "eap-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Eap::EapProfile::Eaptls::~Eaptls()
{
}

bool Eap::EapProfile::Eaptls::has_data() const
{
    if (is_presence_container) return true;
    return pki_trustpoint.is_set;
}

bool Eap::EapProfile::Eaptls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter);
}

std::string Eap::EapProfile::Eaptls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eaptls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eap::EapProfile::Eaptls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Eap::EapProfile::Eaptls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eap::EapProfile::Eaptls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Eap::EapProfile::Eaptls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Eap::EapProfile::Eaptls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Eap::EapProfile::Eaptls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pki-trustpoint")
        return true;
    return false;
}


}
}

