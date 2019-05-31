
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ikev2_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ikev2_cfg {

Ikev2::Ikev2()
    :
    keyring_names(std::make_shared<Ikev2::KeyringNames>())
    , profile_names(std::make_shared<Ikev2::ProfileNames>())
    , policy_names(std::make_shared<Ikev2::PolicyNames>())
    , proposal_names(std::make_shared<Ikev2::ProposalNames>())
{
    keyring_names->parent = this;
    profile_names->parent = this;
    policy_names->parent = this;
    proposal_names->parent = this;

    yang_name = "ikev2"; yang_parent_name = "Cisco-IOS-XR-ikev2-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ikev2::~Ikev2()
{
}

bool Ikev2::has_data() const
{
    if (is_presence_container) return true;
    return (keyring_names !=  nullptr && keyring_names->has_data())
	|| (profile_names !=  nullptr && profile_names->has_data())
	|| (policy_names !=  nullptr && policy_names->has_data())
	|| (proposal_names !=  nullptr && proposal_names->has_data());
}

bool Ikev2::has_operation() const
{
    return is_set(yfilter)
	|| (keyring_names !=  nullptr && keyring_names->has_operation())
	|| (profile_names !=  nullptr && profile_names->has_operation())
	|| (policy_names !=  nullptr && policy_names->has_operation())
	|| (proposal_names !=  nullptr && proposal_names->has_operation());
}

std::string Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keyring-names")
    {
        if(keyring_names == nullptr)
        {
            keyring_names = std::make_shared<Ikev2::KeyringNames>();
        }
        return keyring_names;
    }

    if(child_yang_name == "profile-names")
    {
        if(profile_names == nullptr)
        {
            profile_names = std::make_shared<Ikev2::ProfileNames>();
        }
        return profile_names;
    }

    if(child_yang_name == "policy-names")
    {
        if(policy_names == nullptr)
        {
            policy_names = std::make_shared<Ikev2::PolicyNames>();
        }
        return policy_names;
    }

    if(child_yang_name == "proposal-names")
    {
        if(proposal_names == nullptr)
        {
            proposal_names = std::make_shared<Ikev2::ProposalNames>();
        }
        return proposal_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keyring_names != nullptr)
    {
        _children["keyring-names"] = keyring_names;
    }

    if(profile_names != nullptr)
    {
        _children["profile-names"] = profile_names;
    }

    if(policy_names != nullptr)
    {
        _children["policy-names"] = policy_names;
    }

    if(proposal_names != nullptr)
    {
        _children["proposal-names"] = proposal_names;
    }

    return _children;
}

void Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ikev2::clone_ptr() const
{
    return std::make_shared<Ikev2>();
}

std::string Ikev2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ikev2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ikev2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ikev2::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keyring-names" || name == "profile-names" || name == "policy-names" || name == "proposal-names")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringNames()
    :
    keyring_name(this, {"name"})
{

    yang_name = "keyring-names"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::KeyringNames::~KeyringNames()
{
}

bool Ikev2::KeyringNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<keyring_name.len(); index++)
    {
        if(keyring_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::KeyringNames::has_operation() const
{
    for (std::size_t index=0; index<keyring_name.len(); index++)
    {
        if(keyring_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::KeyringNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::KeyringNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keyring-name")
    {
        auto ent_ = std::make_shared<Ikev2::KeyringNames::KeyringName>();
        ent_->parent = this;
        keyring_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : keyring_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::KeyringNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::KeyringNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::KeyringNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keyring-name")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::KeyringName()
    :
    name{YType::str, "name"},
    keyring_sub{YType::empty, "keyring-sub"}
        ,
    peer_names(std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames>())
{
    peer_names->parent = this;

    yang_name = "keyring-name"; yang_parent_name = "keyring-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::KeyringNames::KeyringName::~KeyringName()
{
}

bool Ikev2::KeyringNames::KeyringName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| keyring_sub.is_set
	|| (peer_names !=  nullptr && peer_names->has_data());
}

bool Ikev2::KeyringNames::KeyringName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(keyring_sub.yfilter)
	|| (peer_names !=  nullptr && peer_names->has_operation());
}

std::string Ikev2::KeyringNames::KeyringName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/keyring-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::KeyringNames::KeyringName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (keyring_sub.is_set || is_set(keyring_sub.yfilter)) leaf_name_data.push_back(keyring_sub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-names")
    {
        if(peer_names == nullptr)
        {
            peer_names = std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames>();
        }
        return peer_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_names != nullptr)
    {
        _children["peer-names"] = peer_names;
    }

    return _children;
}

void Ikev2::KeyringNames::KeyringName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring-sub")
    {
        keyring_sub = value;
        keyring_sub.value_namespace = name_space;
        keyring_sub.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::KeyringNames::KeyringName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "keyring-sub")
    {
        keyring_sub.yfilter = yfilter;
    }
}

bool Ikev2::KeyringNames::KeyringName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-names" || name == "name" || name == "keyring-sub")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerNames()
    :
    peer_name(this, {"name"})
{

    yang_name = "peer-names"; yang_parent_name = "keyring-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::KeyringNames::KeyringName::PeerNames::~PeerNames()
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_name.len(); index++)
    {
        if(peer_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::has_operation() const
{
    for (std::size_t index=0; index<peer_name.len(); index++)
    {
        if(peer_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::KeyringNames::KeyringName::PeerNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::PeerNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::PeerNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-name")
    {
        auto ent_ = std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName>();
        ent_->parent = this;
        peer_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::PeerNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::KeyringNames::KeyringName::PeerNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::KeyringNames::KeyringName::PeerNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-name")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::PeerName()
    :
    name{YType::str, "name"},
    peer_sub{YType::empty, "peer-sub"}
        ,
    address(std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address>())
    , psk(std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk>())
{
    address->parent = this;
    psk->parent = this;

    yang_name = "peer-name"; yang_parent_name = "peer-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::~PeerName()
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| peer_sub.is_set
	|| (address !=  nullptr && address->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(peer_sub.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (peer_sub.is_set || is_set(peer_sub.yfilter)) leaf_name_data.push_back(peer_sub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address>();
        }
        return address;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(psk != nullptr)
    {
        _children["psk"] = psk;
    }

    return _children;
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-sub")
    {
        peer_sub = value;
        peer_sub.value_namespace = name_space;
        peer_sub.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "peer-sub")
    {
        peer_sub.yfilter = yfilter;
    }
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "psk" || name == "name" || name == "peer-sub")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::Address()
    :
    ip{YType::str, "ip"},
    subnet{YType::str, "subnet"}
{

    yang_name = "address"; yang_parent_name = "peer-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::~Address()
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| subnet.is_set;
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(subnet.yfilter);
}

std::string Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "subnet")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::Psk()
    :
    both_key{YType::str, "both-key"}
        ,
    local_remote_key(std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey>())
{
    local_remote_key->parent = this;

    yang_name = "psk"; yang_parent_name = "peer-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::~Psk()
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::has_data() const
{
    if (is_presence_container) return true;
    return both_key.is_set
	|| (local_remote_key !=  nullptr && local_remote_key->has_data());
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(both_key.yfilter)
	|| (local_remote_key !=  nullptr && local_remote_key->has_operation());
}

std::string Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both_key.is_set || is_set(both_key.yfilter)) leaf_name_data.push_back(both_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-remote-key")
    {
        if(local_remote_key == nullptr)
        {
            local_remote_key = std::make_shared<Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey>();
        }
        return local_remote_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_remote_key != nullptr)
    {
        _children["local-remote-key"] = local_remote_key;
    }

    return _children;
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "both-key")
    {
        both_key = value;
        both_key.value_namespace = name_space;
        both_key.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "both-key")
    {
        both_key.yfilter = yfilter;
    }
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-remote-key" || name == "both-key")
        return true;
    return false;
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::LocalRemoteKey()
    :
    string_xr{YType::str, "string-xr"},
    string{YType::str, "string"}
{

    yang_name = "local-remote-key"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::~LocalRemoteKey()
{
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::has_data() const
{
    if (is_presence_container) return true;
    return string_xr.is_set
	|| string.is_set;
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_xr.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-remote-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_xr.is_set || is_set(string_xr.yfilter)) leaf_name_data.push_back(string_xr.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-xr")
    {
        string_xr = value;
        string_xr.value_namespace = name_space;
        string_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-xr")
    {
        string_xr.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-xr" || name == "string")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileNames()
    :
    profile_name(this, {"name"})
{

    yang_name = "profile-names"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::ProfileNames::~ProfileNames()
{
}

bool Ikev2::ProfileNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile_name.len(); index++)
    {
        if(profile_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::ProfileNames::has_operation() const
{
    for (std::size_t index=0; index<profile_name.len(); index++)
    {
        if(profile_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::ProfileNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::ProfileNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile-name")
    {
        auto ent_ = std::make_shared<Ikev2::ProfileNames::ProfileName>();
        ent_->parent = this;
        profile_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::ProfileNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::ProfileNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::ProfileNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileName::ProfileName()
    :
    name{YType::str, "name"},
    profile_sub{YType::empty, "profile-sub"},
    lifetime{YType::uint32, "lifetime"},
    keyring_in_profile{YType::str, "keyring-in-profile"}
        ,
    match_identity(std::make_shared<Ikev2::ProfileNames::ProfileName::MatchIdentity>())
    , dpd(std::make_shared<Ikev2::ProfileNames::ProfileName::Dpd>())
{
    match_identity->parent = this;
    dpd->parent = this;

    yang_name = "profile-name"; yang_parent_name = "profile-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::ProfileNames::ProfileName::~ProfileName()
{
}

bool Ikev2::ProfileNames::ProfileName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| profile_sub.is_set
	|| lifetime.is_set
	|| keyring_in_profile.is_set
	|| (match_identity !=  nullptr && match_identity->has_data())
	|| (dpd !=  nullptr && dpd->has_data());
}

bool Ikev2::ProfileNames::ProfileName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(profile_sub.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(keyring_in_profile.yfilter)
	|| (match_identity !=  nullptr && match_identity->has_operation())
	|| (dpd !=  nullptr && dpd->has_operation());
}

std::string Ikev2::ProfileNames::ProfileName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/profile-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::ProfileNames::ProfileName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::ProfileName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (profile_sub.is_set || is_set(profile_sub.yfilter)) leaf_name_data.push_back(profile_sub.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (keyring_in_profile.is_set || is_set(keyring_in_profile.yfilter)) leaf_name_data.push_back(keyring_in_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::ProfileName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-identity")
    {
        if(match_identity == nullptr)
        {
            match_identity = std::make_shared<Ikev2::ProfileNames::ProfileName::MatchIdentity>();
        }
        return match_identity;
    }

    if(child_yang_name == "dpd")
    {
        if(dpd == nullptr)
        {
            dpd = std::make_shared<Ikev2::ProfileNames::ProfileName::Dpd>();
        }
        return dpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::ProfileName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_identity != nullptr)
    {
        _children["match-identity"] = match_identity;
    }

    if(dpd != nullptr)
    {
        _children["dpd"] = dpd;
    }

    return _children;
}

void Ikev2::ProfileNames::ProfileName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-sub")
    {
        profile_sub = value;
        profile_sub.value_namespace = name_space;
        profile_sub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring-in-profile")
    {
        keyring_in_profile = value;
        keyring_in_profile.value_namespace = name_space;
        keyring_in_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::ProfileNames::ProfileName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "profile-sub")
    {
        profile_sub.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "keyring-in-profile")
    {
        keyring_in_profile.yfilter = yfilter;
    }
}

bool Ikev2::ProfileNames::ProfileName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-identity" || name == "dpd" || name == "name" || name == "profile-sub" || name == "lifetime" || name == "keyring-in-profile")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::MatchIdentity()
    :
    any{YType::empty, "any"}
        ,
    address_subs(std::make_shared<Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs>())
{
    address_subs->parent = this;

    yang_name = "match-identity"; yang_parent_name = "profile-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::~MatchIdentity()
{
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| (address_subs !=  nullptr && address_subs->has_data());
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| (address_subs !=  nullptr && address_subs->has_operation());
}

std::string Ikev2::ProfileNames::ProfileName::MatchIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::ProfileName::MatchIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::ProfileName::MatchIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-subs")
    {
        if(address_subs == nullptr)
        {
            address_subs = std::make_shared<Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs>();
        }
        return address_subs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::ProfileName::MatchIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_subs != nullptr)
    {
        _children["address-subs"] = address_subs;
    }

    return _children;
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-subs" || name == "any")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSubs()
    :
    address_sub(this, {"address"})
{

    yang_name = "address-subs"; yang_parent_name = "match-identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::~AddressSubs()
{
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_sub.len(); index++)
    {
        if(address_sub[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::has_operation() const
{
    for (std::size_t index=0; index<address_sub.len(); index++)
    {
        if(address_sub[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-subs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-sub")
    {
        auto ent_ = std::make_shared<Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub>();
        ent_->parent = this;
        address_sub.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_sub.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-sub")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::AddressSub()
    :
    address{YType::str, "address"},
    address_sub_val{YType::empty, "address-sub-val"},
    mask{YType::str, "mask"}
{

    yang_name = "address-sub"; yang_parent_name = "address-subs"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::~AddressSub()
{
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| address_sub_val.is_set
	|| mask.is_set;
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_sub_val.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-sub";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_sub_val.is_set || is_set(address_sub_val.yfilter)) leaf_name_data.push_back(address_sub_val.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-sub-val")
    {
        address_sub_val = value;
        address_sub_val.value_namespace = name_space;
        address_sub_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-sub-val")
    {
        address_sub_val.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-sub-val" || name == "mask")
        return true;
    return false;
}

Ikev2::ProfileNames::ProfileName::Dpd::Dpd()
    :
    interval{YType::uint32, "interval"},
    retry_time{YType::uint32, "retry-time"}
{

    yang_name = "dpd"; yang_parent_name = "profile-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProfileNames::ProfileName::Dpd::~Dpd()
{
}

bool Ikev2::ProfileNames::ProfileName::Dpd::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| retry_time.is_set;
}

bool Ikev2::ProfileNames::ProfileName::Dpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retry_time.yfilter);
}

std::string Ikev2::ProfileNames::ProfileName::Dpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProfileNames::ProfileName::Dpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProfileNames::ProfileName::Dpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProfileNames::ProfileName::Dpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProfileNames::ProfileName::Dpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::ProfileNames::ProfileName::Dpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
}

bool Ikev2::ProfileNames::ProfileName::Dpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "retry-time")
        return true;
    return false;
}

Ikev2::PolicyNames::PolicyNames()
    :
    policy_name(this, {"name"})
{

    yang_name = "policy-names"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::PolicyNames::~PolicyNames()
{
}

bool Ikev2::PolicyNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_name.len(); index++)
    {
        if(policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::PolicyNames::has_operation() const
{
    for (std::size_t index=0; index<policy_name.len(); index++)
    {
        if(policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::PolicyNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::PolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::PolicyNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::PolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-name")
    {
        auto ent_ = std::make_shared<Ikev2::PolicyNames::PolicyName>();
        ent_->parent = this;
        policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::PolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::PolicyNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::PolicyNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::PolicyNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

Ikev2::PolicyNames::PolicyName::PolicyName()
    :
    name{YType::str, "name"},
    proposal_in_policy{YType::str, "proposal-in-policy"},
    policy_sub{YType::empty, "policy-sub"}
        ,
    address_vals(std::make_shared<Ikev2::PolicyNames::PolicyName::AddressVals>())
{
    address_vals->parent = this;

    yang_name = "policy-name"; yang_parent_name = "policy-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::PolicyNames::PolicyName::~PolicyName()
{
}

bool Ikev2::PolicyNames::PolicyName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| proposal_in_policy.is_set
	|| policy_sub.is_set
	|| (address_vals !=  nullptr && address_vals->has_data());
}

bool Ikev2::PolicyNames::PolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(proposal_in_policy.yfilter)
	|| ydk::is_set(policy_sub.yfilter)
	|| (address_vals !=  nullptr && address_vals->has_operation());
}

std::string Ikev2::PolicyNames::PolicyName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/policy-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::PolicyNames::PolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::PolicyNames::PolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal_in_policy.is_set || is_set(proposal_in_policy.yfilter)) leaf_name_data.push_back(proposal_in_policy.get_name_leafdata());
    if (policy_sub.is_set || is_set(policy_sub.yfilter)) leaf_name_data.push_back(policy_sub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::PolicyNames::PolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-vals")
    {
        if(address_vals == nullptr)
        {
            address_vals = std::make_shared<Ikev2::PolicyNames::PolicyName::AddressVals>();
        }
        return address_vals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::PolicyNames::PolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_vals != nullptr)
    {
        _children["address-vals"] = address_vals;
    }

    return _children;
}

void Ikev2::PolicyNames::PolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal-in-policy")
    {
        proposal_in_policy = value;
        proposal_in_policy.value_namespace = name_space;
        proposal_in_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-sub")
    {
        policy_sub = value;
        policy_sub.value_namespace = name_space;
        policy_sub.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::PolicyNames::PolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "proposal-in-policy")
    {
        proposal_in_policy.yfilter = yfilter;
    }
    if(value_path == "policy-sub")
    {
        policy_sub.yfilter = yfilter;
    }
}

bool Ikev2::PolicyNames::PolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-vals" || name == "name" || name == "proposal-in-policy" || name == "policy-sub")
        return true;
    return false;
}

Ikev2::PolicyNames::PolicyName::AddressVals::AddressVals()
    :
    address_val(this, {"address"})
{

    yang_name = "address-vals"; yang_parent_name = "policy-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::PolicyNames::PolicyName::AddressVals::~AddressVals()
{
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_val.len(); index++)
    {
        if(address_val[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::has_operation() const
{
    for (std::size_t index=0; index<address_val.len(); index++)
    {
        if(address_val[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::PolicyNames::PolicyName::AddressVals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-vals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::PolicyNames::PolicyName::AddressVals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::PolicyNames::PolicyName::AddressVals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-val")
    {
        auto ent_ = std::make_shared<Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal>();
        ent_->parent = this;
        address_val.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::PolicyNames::PolicyName::AddressVals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_val.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::PolicyNames::PolicyName::AddressVals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::PolicyNames::PolicyName::AddressVals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-val")
        return true;
    return false;
}

Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::AddressVal()
    :
    address{YType::str, "address"}
{

    yang_name = "address-val"; yang_parent_name = "address-vals"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::~AddressVal()
{
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-val";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalNames()
    :
    proposal_name(this, {"name"})
{

    yang_name = "proposal-names"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::ProposalNames::~ProposalNames()
{
}

bool Ikev2::ProposalNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<proposal_name.len(); index++)
    {
        if(proposal_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ikev2::ProposalNames::has_operation() const
{
    for (std::size_t index=0; index<proposal_name.len(); index++)
    {
        if(proposal_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ikev2::ProposalNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::ProposalNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proposal-name")
    {
        auto ent_ = std::make_shared<Ikev2::ProposalNames::ProposalName>();
        ent_->parent = this;
        proposal_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : proposal_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ikev2::ProposalNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ikev2::ProposalNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ikev2::ProposalNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proposal-name")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalName::ProposalName()
    :
    name{YType::str, "name"},
    proposal_sub{YType::empty, "proposal-sub"}
        ,
    prfses(std::make_shared<Ikev2::ProposalNames::ProposalName::Prfses>())
    , groups(std::make_shared<Ikev2::ProposalNames::ProposalName::Groups>())
    , integrities(std::make_shared<Ikev2::ProposalNames::ProposalName::Integrities>())
    , encryptions(std::make_shared<Ikev2::ProposalNames::ProposalName::Encryptions>())
{
    prfses->parent = this;
    groups->parent = this;
    integrities->parent = this;
    encryptions->parent = this;

    yang_name = "proposal-name"; yang_parent_name = "proposal-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Ikev2::ProposalNames::ProposalName::~ProposalName()
{
}

bool Ikev2::ProposalNames::ProposalName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| proposal_sub.is_set
	|| (prfses !=  nullptr && prfses->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (integrities !=  nullptr && integrities->has_data())
	|| (encryptions !=  nullptr && encryptions->has_data());
}

bool Ikev2::ProposalNames::ProposalName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(proposal_sub.yfilter)
	|| (prfses !=  nullptr && prfses->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (integrities !=  nullptr && integrities->has_operation())
	|| (encryptions !=  nullptr && encryptions->has_operation());
}

std::string Ikev2::ProposalNames::ProposalName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-cfg:ikev2/proposal-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ikev2::ProposalNames::ProposalName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::ProposalName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal_sub.is_set || is_set(proposal_sub.yfilter)) leaf_name_data.push_back(proposal_sub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::ProposalName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prfses")
    {
        if(prfses == nullptr)
        {
            prfses = std::make_shared<Ikev2::ProposalNames::ProposalName::Prfses>();
        }
        return prfses;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Ikev2::ProposalNames::ProposalName::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "integrities")
    {
        if(integrities == nullptr)
        {
            integrities = std::make_shared<Ikev2::ProposalNames::ProposalName::Integrities>();
        }
        return integrities;
    }

    if(child_yang_name == "encryptions")
    {
        if(encryptions == nullptr)
        {
            encryptions = std::make_shared<Ikev2::ProposalNames::ProposalName::Encryptions>();
        }
        return encryptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::ProposalName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prfses != nullptr)
    {
        _children["prfses"] = prfses;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(integrities != nullptr)
    {
        _children["integrities"] = integrities;
    }

    if(encryptions != nullptr)
    {
        _children["encryptions"] = encryptions;
    }

    return _children;
}

void Ikev2::ProposalNames::ProposalName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal-sub")
    {
        proposal_sub = value;
        proposal_sub.value_namespace = name_space;
        proposal_sub.value_namespace_prefix = name_space_prefix;
    }
}

void Ikev2::ProposalNames::ProposalName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "proposal-sub")
    {
        proposal_sub.yfilter = yfilter;
    }
}

bool Ikev2::ProposalNames::ProposalName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prfses" || name == "groups" || name == "integrities" || name == "encryptions" || name == "name" || name == "proposal-sub")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalName::Prfses::Prfses()
    :
    prfs{YType::str, "prfs"}
{

    yang_name = "prfses"; yang_parent_name = "proposal-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProposalNames::ProposalName::Prfses::~Prfses()
{
}

bool Ikev2::ProposalNames::ProposalName::Prfses::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prfs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ikev2::ProposalNames::ProposalName::Prfses::has_operation() const
{
    for (auto const & leaf : prfs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prfs.yfilter);
}

std::string Ikev2::ProposalNames::ProposalName::Prfses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prfses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::ProposalName::Prfses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prfs_name_datas = prfs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prfs_name_datas.begin(), prfs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::ProposalName::Prfses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::ProposalName::Prfses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProposalNames::ProposalName::Prfses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prfs")
    {
        prfs.append(value);
    }
}

void Ikev2::ProposalNames::ProposalName::Prfses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prfs")
    {
        prfs.yfilter = yfilter;
    }
}

bool Ikev2::ProposalNames::ProposalName::Prfses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prfs")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalName::Groups::Groups()
    :
    group{YType::str, "group"}
{

    yang_name = "groups"; yang_parent_name = "proposal-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProposalNames::ProposalName::Groups::~Groups()
{
}

bool Ikev2::ProposalNames::ProposalName::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ikev2::ProposalNames::ProposalName::Groups::has_operation() const
{
    for (auto const & leaf : group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Ikev2::ProposalNames::ProposalName::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::ProposalName::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto group_name_datas = group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), group_name_datas.begin(), group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::ProposalName::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::ProposalName::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProposalNames::ProposalName::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group.append(value);
    }
}

void Ikev2::ProposalNames::ProposalName::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Ikev2::ProposalNames::ProposalName::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalName::Integrities::Integrities()
    :
    integrity{YType::str, "integrity"}
{

    yang_name = "integrities"; yang_parent_name = "proposal-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProposalNames::ProposalName::Integrities::~Integrities()
{
}

bool Ikev2::ProposalNames::ProposalName::Integrities::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : integrity.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ikev2::ProposalNames::ProposalName::Integrities::has_operation() const
{
    for (auto const & leaf : integrity.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(integrity.yfilter);
}

std::string Ikev2::ProposalNames::ProposalName::Integrities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::ProposalName::Integrities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto integrity_name_datas = integrity.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), integrity_name_datas.begin(), integrity_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::ProposalName::Integrities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::ProposalName::Integrities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProposalNames::ProposalName::Integrities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "integrity")
    {
        integrity.append(value);
    }
}

void Ikev2::ProposalNames::ProposalName::Integrities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "integrity")
    {
        integrity.yfilter = yfilter;
    }
}

bool Ikev2::ProposalNames::ProposalName::Integrities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "integrity")
        return true;
    return false;
}

Ikev2::ProposalNames::ProposalName::Encryptions::Encryptions()
    :
    encryption{YType::str, "encryption"}
{

    yang_name = "encryptions"; yang_parent_name = "proposal-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ikev2::ProposalNames::ProposalName::Encryptions::~Encryptions()
{
}

bool Ikev2::ProposalNames::ProposalName::Encryptions::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : encryption.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ikev2::ProposalNames::ProposalName::Encryptions::has_operation() const
{
    for (auto const & leaf : encryption.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Ikev2::ProposalNames::ProposalName::Encryptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ikev2::ProposalNames::ProposalName::Encryptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto encryption_name_datas = encryption.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), encryption_name_datas.begin(), encryption_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ikev2::ProposalNames::ProposalName::Encryptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ikev2::ProposalNames::ProposalName::Encryptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ikev2::ProposalNames::ProposalName::Encryptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption.append(value);
    }
}

void Ikev2::ProposalNames::ProposalName::Encryptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Ikev2::ProposalNames::ProposalName::Encryptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}


}
}

