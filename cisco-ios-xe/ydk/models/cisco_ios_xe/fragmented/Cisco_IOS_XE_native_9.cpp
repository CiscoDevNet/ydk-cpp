
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Ssh::Client::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Client::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Client::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Client::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Logging::Logging()
    :
    events{YType::empty, "events"}
{

    yang_name = "logging"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Logging::~Logging()
{
}

bool Native::Ip::Ssh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return events.is_set;
}

bool Native::Ip::Ssh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events.yfilter);
}

std::string Native::Ip::Ssh::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::PubkeyChain()
    :
    username(this, {"name"})
{

    yang_name = "pubkey-chain"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::PubkeyChain::~PubkeyChain()
{
}

bool Native::Ip::Ssh::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Ssh::PubkeyChain::has_operation() const
{
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto ent_ = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username>();
        ent_->parent = this;
        username.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Ssh::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::Username()
    :
    name{YType::str, "name"}
        ,
    key_hash(this, {"key_type", "key_hash_value"})
{

    yang_name = "username"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::PubkeyChain::Username::~Username()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_hash.len(); index++)
    {
        if(key_hash[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_operation() const
{
    for (std::size_t index=0; index<key_hash.len(); index++)
    {
        if(key_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-hash")
    {
        auto ent_ = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username::KeyHash>();
        ent_->parent = this;
        key_hash.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_hash.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Ssh::PubkeyChain::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-hash" || name == "name")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyHash()
    :
    key_type{YType::enumeration, "key-type"},
    key_hash_value{YType::str, "key-hash-value"}
{

    yang_name = "key-hash"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::~KeyHash()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_data() const
{
    if (is_presence_container) return true;
    return key_type.is_set
	|| key_hash_value.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(key_hash_value.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-hash";
    ADD_KEY_TOKEN(key_type, "key-type");
    ADD_KEY_TOKEN(key_hash_value, "key-hash-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_hash_value.is_set || is_set(key_hash_value.yfilter)) leaf_name_data.push_back(key_hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value = value;
        key_hash_value.value_namespace = name_space;
        key_hash_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-type" || name == "key-hash-value")
        return true;
    return false;
}

Native::Ip::Ssh::Rsa::Rsa()
    :
    keypair_name{YType::str, "keypair-name"}
{

    yang_name = "rsa"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Rsa::~Rsa()
{
}

bool Native::Ip::Ssh::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return keypair_name.is_set;
}

bool Native::Ip::Ssh::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keypair_name.yfilter);
}

std::string Native::Ip::Ssh::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keypair_name.is_set || is_set(keypair_name.yfilter)) leaf_name_data.push_back(keypair_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keypair-name")
    {
        keypair_name = value;
        keypair_name.value_namespace = name_space;
        keypair_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keypair-name")
    {
        keypair_name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keypair-name")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Server()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Server::Algorithm>())
    , peruser(std::make_shared<Native::Ip::Ssh::Server::Peruser>())
{
    algorithm->parent = this;
    peruser->parent = this;

    yang_name = "server"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::~Server()
{
}

bool Native::Ip::Ssh::Server::has_data() const
{
    if (is_presence_container) return true;
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (peruser !=  nullptr && peruser->has_data());
}

bool Native::Ip::Ssh::Server::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (peruser !=  nullptr && peruser->has_operation());
}

std::string Native::Ip::Ssh::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Server::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "peruser")
    {
        if(peruser == nullptr)
        {
            peruser = std::make_shared<Native::Ip::Ssh::Server::Peruser>();
        }
        return peruser;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(peruser != nullptr)
    {
        _children["peruser"] = peruser;
    }

    return _children;
}

void Native::Ip::Ssh::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "peruser")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Server::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Server::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Ip::Ssh::Server::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Peruser::Peruser()
    :
    session(std::make_shared<Native::Ip::Ssh::Server::Peruser::Session>())
{
    session->parent = this;

    yang_name = "peruser"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Peruser::~Peruser()
{
}

bool Native::Ip::Ssh::Server::Peruser::has_data() const
{
    if (is_presence_container) return true;
    return (session !=  nullptr && session->has_data());
}

bool Native::Ip::Ssh::Server::Peruser::has_operation() const
{
    return is_set(yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Ip::Ssh::Server::Peruser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Peruser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peruser";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Peruser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Peruser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Ip::Ssh::Server::Peruser::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Peruser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Native::Ip::Ssh::Server::Peruser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::Peruser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::Peruser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Peruser::Session::Session()
    :
    limit{YType::uint8, "limit"}
{

    yang_name = "session"; yang_parent_name = "peruser"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Peruser::Session::~Session()
{
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Ssh::Server::Peruser::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/peruser/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Peruser::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Peruser::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Peruser::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Peruser::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Server::Peruser::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Server::Peruser::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Ip::Ssh::Port::Port()
    :
    port_no{YType::uint16, "port-no"},
    low_rotary{YType::uint8, "low-rotary"},
    high_rotary{YType::uint8, "high-rotary"}
{

    yang_name = "port"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Port::~Port()
{
}

bool Native::Ip::Ssh::Port::has_data() const
{
    if (is_presence_container) return true;
    return port_no.is_set
	|| low_rotary.is_set
	|| high_rotary.is_set;
}

bool Native::Ip::Ssh::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_no.yfilter)
	|| ydk::is_set(low_rotary.yfilter)
	|| ydk::is_set(high_rotary.yfilter);
}

std::string Native::Ip::Ssh::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(port_no, "port-no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_no.is_set || is_set(port_no.yfilter)) leaf_name_data.push_back(port_no.get_name_leafdata());
    if (low_rotary.is_set || is_set(low_rotary.yfilter)) leaf_name_data.push_back(low_rotary.get_name_leafdata());
    if (high_rotary.is_set || is_set(high_rotary.yfilter)) leaf_name_data.push_back(high_rotary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-no")
    {
        port_no = value;
        port_no.value_namespace = name_space;
        port_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-rotary")
    {
        low_rotary = value;
        low_rotary.value_namespace = name_space;
        low_rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-rotary")
    {
        high_rotary = value;
        high_rotary.value_namespace = name_space;
        high_rotary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-no")
    {
        port_no.yfilter = yfilter;
    }
    if(value_path == "low-rotary")
    {
        low_rotary.yfilter = yfilter;
    }
    if(value_path == "high-rotary")
    {
        high_rotary.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-no" || name == "low-rotary" || name == "high-rotary")
        return true;
    return false;
}

Native::Ip::Tcp::Tcp()
    :
    selective_ack{YType::empty, "selective-ack"},
    synwait_time{YType::uint16, "synwait-time"},
    timestamp{YType::empty, "timestamp"},
    window_size{YType::uint32, "window-size"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tcp::~Tcp()
{
}

bool Native::Ip::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return selective_ack.is_set
	|| synwait_time.is_set
	|| timestamp.is_set
	|| window_size.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selective_ack.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Ip::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selective_ack.is_set || is_set(selective_ack.yfilter)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Ip::Tcp::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_mtu_discovery != nullptr)
    {
        _children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return _children;
}

void Native::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selective-ack")
    {
        selective_ack = value;
        selective_ack.value_namespace = name_space;
        selective_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selective-ack")
    {
        selective_ack.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "selective-ack" || name == "synwait-time" || name == "timestamp" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Tcp::PathMtuDiscovery::PathMtuDiscovery()
    :
    age_timer{YType::str, "age-timer"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Tcp::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return age_timer.is_set;
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_timer.yfilter);
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_timer.is_set || is_set(age_timer.yfilter)) leaf_name_data.push_back(age_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tcp::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tcp::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tcp::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-timer")
    {
        age_timer = value;
        age_timer.value_namespace = name_space;
        age_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-timer")
    {
        age_timer.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-timer")
        return true;
    return false;
}

Native::Ip::Tftp::Tftp()
    :
    blocksize{YType::uint16, "blocksize"}
        ,
    boot_interface(std::make_shared<Native::Ip::Tftp::BootInterface>())
    , source_interface(std::make_shared<Native::Ip::Tftp::SourceInterface>())
{
    boot_interface->parent = this;
    source_interface->parent = this;

    yang_name = "tftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::~Tftp()
{
}

bool Native::Ip::Tftp::has_data() const
{
    if (is_presence_container) return true;
    return blocksize.is_set
	|| (boot_interface !=  nullptr && boot_interface->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blocksize.yfilter)
	|| (boot_interface !=  nullptr && boot_interface->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocksize.is_set || is_set(blocksize.yfilter)) leaf_name_data.push_back(blocksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-interface")
    {
        if(boot_interface == nullptr)
        {
            boot_interface = std::make_shared<Native::Ip::Tftp::BootInterface>();
        }
        return boot_interface;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tftp::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(boot_interface != nullptr)
    {
        _children["boot-interface"] = boot_interface;
    }

    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Tftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blocksize")
    {
        blocksize = value;
        blocksize.value_namespace = name_space;
        blocksize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blocksize")
    {
        blocksize.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-interface" || name == "source-interface" || name == "blocksize")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::BootInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "boot-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::~BootInterface()
{
}

bool Native::Ip::Tftp::BootInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::BootInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::BootInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Tftp::BootInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tftp::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Tftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"},
    persistent{YType::empty, "Cisco-IOS-XE-acl:persistent"}
        ,
    standard(this, {"name"})
    , role_based(this, {"name"})
    , extended(this, {"name"})
    , helper(std::make_shared<Native::Ip::AccessList::Helper>())
    , log_update(std::make_shared<Native::Ip::AccessList::LogUpdate>())
    , logging(std::make_shared<Native::Ip::AccessList::Logging>())
    , resequence(std::make_shared<Native::Ip::AccessList::Resequence>())
{
    helper->parent = this;
    log_update->parent = this;
    logging->parent = this;
    resequence->parent = this;

    yang_name = "access-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::~AccessList()
{
}

bool Native::Ip::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<role_based.len(); index++)
    {
        if(role_based[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| persistent.is_set
	|| (helper !=  nullptr && helper->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (resequence !=  nullptr && resequence->has_data());
}

bool Native::Ip::AccessList::has_operation() const
{
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<role_based.len(); index++)
    {
        if(role_based[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_local_traffic.yfilter)
	|| ydk::is_set(persistent.yfilter)
	|| (helper !=  nullptr && helper->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (resequence !=  nullptr && resequence->has_operation());
}

std::string Native::Ip::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.yfilter)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());
    if (persistent.is_set || is_set(persistent.yfilter)) leaf_name_data.push_back(persistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-acl:standard")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard>();
        ent_->parent = this;
        standard.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:role-based")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased>();
        ent_->parent = this;
        role_based.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:extended")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended>();
        ent_->parent = this;
        extended.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Ip::AccessList::Helper>();
        }
        return helper;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ip::AccessList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::AccessList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:resequence")
    {
        if(resequence == nullptr)
        {
            resequence = std::make_shared<Native::Ip::AccessList::Resequence>();
        }
        return resequence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : role_based.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(helper != nullptr)
    {
        _children["Cisco-IOS-XE-acl:helper"] = helper;
    }

    if(log_update != nullptr)
    {
        _children["Cisco-IOS-XE-acl:log-update"] = log_update;
    }

    if(logging != nullptr)
    {
        _children["Cisco-IOS-XE-acl:logging"] = logging;
    }

    if(resequence != nullptr)
    {
        _children["Cisco-IOS-XE-acl:resequence"] = resequence;
    }

    return _children;
}

void Native::Ip::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-acl:match-local-traffic")
    {
        match_local_traffic = value;
        match_local_traffic.value_namespace = name_space;
        match_local_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-acl:persistent")
    {
        persistent = value;
        persistent.value_namespace = name_space;
        persistent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic.yfilter = yfilter;
    }
    if(value_path == "persistent")
    {
        persistent.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard" || name == "role-based" || name == "extended" || name == "helper" || name == "log-update" || name == "logging" || name == "resequence" || name == "match-local-traffic" || name == "persistent")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Standard()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::Standard::Default>())
{
    default_->parent = this;

    yang_name = "standard"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Standard::~Standard()
{
}

bool Native::Ip::AccessList::Standard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Standard::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:standard";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Standard::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    deny(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>())
    , permit(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::~Default()
{
}

bool Native::Ip::AccessList::Standard::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Standard::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    deny(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny>())
    , permit(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::RoleBased()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::RoleBased::Default>())
{
    default_->parent = this;

    yang_name = "role-based"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::RoleBased::~RoleBased()
{
}

bool Native::Ip::AccessList::RoleBased::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:role-based";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>())
    , src(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src>())
    , dst(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;
    src->parent = this;
    dst->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (src !=  nullptr && src->has_data())
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (src !=  nullptr && src->has_operation())
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "src")
    {
        if(src == nullptr)
        {
            src = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src>();
        }
        return src;
    }

    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    if(src != nullptr)
    {
        _children["src"] = src;
    }

    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "src" || name == "dst" || name == "action" || name == "protocol" || name == "object-group-str" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Src()
    :
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"}
        ,
    dst(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst>())
{
    dst->parent = this;

    yang_name = "src"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::~Src()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_data() const
{
    if (is_presence_container) return true;
    return source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "src"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::~Default()
{
}

bool Native::Ip::AccessList::RoleBased::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::RoleBased::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::RoleBased::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::RoleBased::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny>())
    , src(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src>())
    , dst(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;
    src->parent = this;
    dst->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (src !=  nullptr && src->has_data())
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (src !=  nullptr && src->has_operation())
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "src")
    {
        if(src == nullptr)
        {
            src = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src>();
        }
        return src;
    }

    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    if(src != nullptr)
    {
        _children["src"] = src;
    }

    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "src" || name == "dst" || name == "action" || name == "protocol" || name == "object-group-str" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Src()
    :
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"}
        ,
    dst(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst>())
{
    dst->parent = this;

    yang_name = "src"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::~Src()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_data() const
{
    if (is_presence_container) return true;
    return source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "src"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Extended()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::Extended::Default>())
{
    default_->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Extended::~Extended()
{
}

bool Native::Ip::AccessList::Extended::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:extended";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Extended::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ipv4_address{YType::str, "ipv4-address"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    object_group{YType::str, "object-group"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dst_any{YType::empty, "dst-any"},
    dst_host{YType::str, "dst-host"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ipv4_address.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| object_group.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dst_any.is_set
	|| dst_host.is_set
	|| dst_object_group.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ipv4-address" || name == "mask" || name == "any" || name == "host" || name == "object-group" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dst-any" || name == "dst-host" || name == "dst-object-group" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::~Default()
{
}

bool Native::Ip::AccessList::Extended::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Extended::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Extended::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Extended::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ipv4_address{YType::str, "ipv4-address"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    object_group{YType::str, "object-group"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dst_any{YType::empty, "dst-any"},
    dst_host{YType::str, "dst-host"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ipv4_address.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| object_group.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dst_any.is_set
	|| dst_host.is_set
	|| dst_object_group.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ipv4-address" || name == "mask" || name == "any" || name == "host" || name == "object-group" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dst-any" || name == "dst-host" || name == "dst-object-group" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Helper::Helper()
    :
    egress{YType::empty, "egress"},
    check{YType::empty, "check"}
{

    yang_name = "helper"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Helper::~Helper()
{
}

bool Native::Ip::AccessList::Helper::has_data() const
{
    if (is_presence_container) return true;
    return egress.is_set
	|| check.is_set;
}

bool Native::Ip::AccessList::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(check.yfilter);
}

std::string Native::Ip::AccessList::Helper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "check")
        return true;
    return false;
}

Native::Ip::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{

    yang_name = "log-update"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ip::AccessList::LogUpdate::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Ip::AccessList::LogUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::AccessList::LogUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::LogUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::LogUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::LogUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::LogUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ip::AccessList::Logging::Logging()
    :
    hash_generation{YType::empty, "hash-generation"},
    interval{YType::uint64, "interval"}
{

    yang_name = "logging"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Logging::~Logging()
{
}

bool Native::Ip::AccessList::Logging::has_data() const
{
    if (is_presence_container) return true;
    return hash_generation.is_set
	|| interval.is_set;
}

bool Native::Ip::AccessList::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_generation.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::AccessList::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_generation.is_set || is_set(hash_generation.yfilter)) leaf_name_data.push_back(hash_generation.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-generation")
    {
        hash_generation = value;
        hash_generation.value_namespace = name_space;
        hash_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-generation")
    {
        hash_generation.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-generation" || name == "interval")
        return true;
    return false;
}

Native::Ip::AccessList::Resequence::Resequence()
    :
    numbers{YType::str, "numbers"},
    start_seq_no{YType::uint64, "start-seq-no"},
    step_seq_no{YType::uint64, "step-seq-no"}
{

    yang_name = "resequence"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Resequence::~Resequence()
{
}

bool Native::Ip::AccessList::Resequence::has_data() const
{
    if (is_presence_container) return true;
    return numbers.is_set
	|| start_seq_no.is_set
	|| step_seq_no.is_set;
}

bool Native::Ip::AccessList::Resequence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numbers.yfilter)
	|| ydk::is_set(start_seq_no.yfilter)
	|| ydk::is_set(step_seq_no.yfilter);
}

std::string Native::Ip::AccessList::Resequence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Resequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:resequence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Resequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numbers.is_set || is_set(numbers.yfilter)) leaf_name_data.push_back(numbers.get_name_leafdata());
    if (start_seq_no.is_set || is_set(start_seq_no.yfilter)) leaf_name_data.push_back(start_seq_no.get_name_leafdata());
    if (step_seq_no.is_set || is_set(step_seq_no.yfilter)) leaf_name_data.push_back(step_seq_no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Resequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Resequence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Resequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numbers")
    {
        numbers = value;
        numbers.value_namespace = name_space;
        numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no = value;
        start_seq_no.value_namespace = name_space;
        start_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no = value;
        step_seq_no.value_namespace = name_space;
        step_seq_no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Resequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numbers")
    {
        numbers.yfilter = yfilter;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no.yfilter = yfilter;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Resequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numbers" || name == "start-seq-no" || name == "step-seq-no")
        return true;
    return false;
}

Native::Ip::Device::Device()
    :
    tracking(nullptr) // presence node
{

    yang_name = "device"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::~Device()
{
}

bool Native::Ip::Device::has_data() const
{
    if (is_presence_container) return true;
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::Ip::Device::has_operation() const
{
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::Ip::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-device-tracking:tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::Ip::Device::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tracking != nullptr)
    {
        _children["Cisco-IOS-XE-device-tracking:tracking"] = tracking;
    }

    return _children;
}

void Native::Ip::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Tracking()
    :
    trace_buffer{YType::empty, "trace-buffer"}
        ,
    probe(std::make_shared<Native::Ip::Device::Tracking::Probe>())
{
    probe->parent = this;

    yang_name = "tracking"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Device::Tracking::~Tracking()
{
}

bool Native::Ip::Device::Tracking::has_data() const
{
    if (is_presence_container) return true;
    return trace_buffer.is_set
	|| (probe !=  nullptr && probe->has_data());
}

bool Native::Ip::Device::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_buffer.yfilter)
	|| (probe !=  nullptr && probe->has_operation());
}

std::string Native::Ip::Device::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buffer.is_set || is_set(trace_buffer.yfilter)) leaf_name_data.push_back(trace_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Ip::Device::Tracking::Probe>();
        }
        return probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(probe != nullptr)
    {
        _children["probe"] = probe;
    }

    return _children;
}

void Native::Ip::Device::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer = value;
        trace_buffer.value_namespace = name_space;
        trace_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "trace-buffer")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::Probe()
    :
    count{YType::uint8, "count"},
    delay{YType::uint8, "delay"},
    interval{YType::uint32, "interval"}
        ,
    auto_source(nullptr) // presence node
{

    yang_name = "probe"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::Tracking::Probe::~Probe()
{
}

bool Native::Ip::Device::Tracking::Probe::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| delay.is_set
	|| interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::Ip::Device::Tracking::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_source != nullptr)
    {
        _children["auto-source"] = auto_source;
    }

    return _children;
}

void Native::Ip::Device::Tracking::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "count" || name == "delay" || name == "interval")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
        ,
    fallback(std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "probe"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Device::Tracking::Probe::AutoSource::~AutoSource()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_data() const
{
    if (is_presence_container) return true;
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fallback != nullptr)
    {
        _children["fallback"] = fallback;
    }

    return _children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::Fallback()
    :
    src_ip{YType::str, "src-ip"},
    mask{YType::str, "mask"}
{

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::~Fallback()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return src_ip.is_set
	|| mask.is_set;
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ip" || name == "mask")
        return true;
    return false;
}

Native::Ip::Igmp::Igmp()
    :
    snooping_conf(std::make_shared<Native::Ip::Igmp::SnoopingConf>())
    , snooping(std::make_shared<Native::Ip::Igmp::Snooping>())
    , ssm_map(std::make_shared<Native::Ip::Igmp::SsmMap>())
    , vrf(this, {"name"})
{
    snooping_conf->parent = this;
    snooping->parent = this;
    ssm_map->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::~Igmp()
{
}

bool Native::Ip::Igmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (snooping !=  nullptr && snooping->has_data())
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Igmp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::SsmMap>();
        }
        return ssm_map;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping_conf != nullptr)
    {
        _children["snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    if(ssm_map != nullptr)
    {
        _children["ssm-map"] = ssm_map;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping-conf" || name == "snooping" || name == "ssm-map" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Igmp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::boolean, "snooping"}
{

    yang_name = "snooping-conf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Igmp::SnoopingConf::has_data() const
{
    if (is_presence_container) return true;
    return snooping.is_set;
}

bool Native::Ip::Igmp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snooping.yfilter);
}

std::string Native::Ip::Igmp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Snooping()
    :
    l2_entry_limit{YType::uint32, "l2-entry-limit"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"}
        ,
    check(std::make_shared<Native::Ip::Igmp::Snooping::Check>())
    , explicit_tracking(std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>())
    , querier(nullptr) // presence node
    , tcn(std::make_shared<Native::Ip::Igmp::Snooping::Tcn>())
    , vlan(std::make_shared<Native::Ip::Igmp::Snooping::Vlan>())
{
    check->parent = this;
    explicit_tracking->parent = this;
    tcn->parent = this;
    vlan->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::Ip::Igmp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return l2_entry_limit.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (tcn !=  nullptr && tcn->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_entry_limit.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_entry_limit.is_set || is_set(l2_entry_limit.yfilter)) leaf_name_data.push_back(l2_entry_limit.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Ip::Igmp::Snooping::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(check != nullptr)
    {
        _children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        _children["explicit-tracking"] = explicit_tracking;
    }

    if(querier != nullptr)
    {
        _children["querier"] = querier;
    }

    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(vlan != nullptr)
    {
        _children["Cisco-IOS-XE-switch:vlan"] = vlan;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit = value;
        l2_entry_limit.value_namespace = name_space;
        l2_entry_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "querier" || name == "tcn" || name == "vlan" || name == "l2-entry-limit" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::Ip::Igmp::Snooping::Check::has_data() const
{
    if (is_presence_container) return true;
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
        ,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>())
    , timer(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Querier::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_data() const
{
    if (is_presence_container) return true;
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Tcn()
    :
    flood(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>())
    , query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>())
{
    flood->parent = this;
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (flood !=  nullptr && flood->has_data())
	|| (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (flood !=  nullptr && flood->has_operation())
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flood != nullptr)
    {
        _children["flood"] = flood;
    }

    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Flood()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>())
{
    query->parent = this;

    yang_name = "flood"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Flood::~Flood()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::Query()
    :
    count{YType::uint8, "count"}
{

    yang_name = "query"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/flood/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Query::Query()
    :
    solicit{YType::empty, "solicit"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return solicit.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(solicit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (solicit.is_set || is_set(solicit.yfilter)) leaf_name_data.push_back(solicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "solicit")
    {
        solicit = value;
        solicit.value_namespace = name_space;
        solicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "solicit")
    {
        solicit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "solicit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Vlan()
    :
    range(this, {"range"})
{

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Vlan::~Vlan()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Range()
    :
    range{YType::uint16, "range"},
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    robustness_variable{YType::uint8, "robustness-variable"}
        ,
    mrouter(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>())
    , querier(nullptr) // presence node
    , static_(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>())
{
    mrouter->parent = this;
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::~Range()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| robustness_variable.is_set
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/Cisco-IOS-XE-switch:vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mrouter != nullptr)
    {
        _children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        _children["querier"] = querier;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mrouter" || name == "querier" || name == "static" || name == "range" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Mrouter()
    :
    interface{YType::str, "interface"}
        ,
    learn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>())
{
    learn->parent = this;

    yang_name = "mrouter"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::~Mrouter()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (learn !=  nullptr && learn->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (learn !=  nullptr && learn->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>();
        }
        return learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(learn != nullptr)
    {
        _children["learn"] = learn;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::Learn()
    :
    cgmp{YType::empty, "cgmp"},
    pim_dvmrp{YType::empty, "pim-dvmrp"}
{

    yang_name = "learn"; yang_parent_name = "mrouter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::~Learn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_data() const
{
    if (is_presence_container) return true;
    return cgmp.is_set
	|| pim_dvmrp.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cgmp.yfilter)
	|| ydk::is_set(pim_dvmrp.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cgmp.is_set || is_set(cgmp.yfilter)) leaf_name_data.push_back(cgmp.get_name_leafdata());
    if (pim_dvmrp.is_set || is_set(pim_dvmrp.yfilter)) leaf_name_data.push_back(pim_dvmrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cgmp")
    {
        cgmp = value;
        cgmp.value_namespace = name_space;
        cgmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp = value;
        pim_dvmrp.value_namespace = name_space;
        pim_dvmrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cgmp")
    {
        cgmp.yfilter = yfilter;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cgmp" || name == "pim-dvmrp")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
        ,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>())
    , timer(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_data() const
{
    if (is_presence_container) return true;
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Static()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::~Static()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::~Ipv4()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
        ,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
    , static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::SsmMap::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Igmp::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::Query::~Query()
{
}

bool Native::Ip::Igmp::SsmMap::Query::has_data() const
{
    if (is_presence_container) return true;
    return dns.is_set;
}

bool Native::Ip::Igmp::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Static::Static()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::SsmMap::Static::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    ssm_map(std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "vrf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Vrf::~Vrf()
{
}

bool Native::Ip::Igmp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ssm_map != nullptr)
    {
        _children["ssm-map"] = ssm_map;
    }

    return _children;
}

void Native::Ip::Igmp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map" || name == "name")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
        ,
    static_(this, {"srcaddress"})
{

    yang_name = "ssm-map"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static>();
        ent_->parent = this;
        static_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::Vrf::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::Static::Static()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Vrf::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_data() const
{
    if (is_presence_container) return true;
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    ADD_KEY_TOKEN(srcaddress, "srcaddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcaddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclname")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcaddress")
    {
        srcaddress.yfilter = yfilter;
    }
    if(value_path == "aclname")
    {
        aclname.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcaddress" || name == "aclname")
        return true;
    return false;
}

Native::Ip::Radius::Radius()
    :
    source_interface(std::make_shared<Native::Ip::Radius::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "radius"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::~Radius()
{
}

bool Native::Ip::Radius::has_data() const
{
    if (is_presence_container) return true;
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Radius::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Radius::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Radius::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Radius::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Radius::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::~Tacacs()
{
}

bool Native::Ip::Tacacs::has_data() const
{
    if (is_presence_container) return true;
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tacacs::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tacacs::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    http_services{YType::empty, "http-services"}
        ,
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
    , attribute_map(this, {"name"})
    , attribute_set(this, {"protocol_name"})
    , classification(std::make_shared<Native::Ip::Nbar::Classification>())
    , custom(this, {"name"})
    , protocol_pack(std::make_shared<Native::Ip::Nbar::ProtocolPack>())
{
    attribute->parent = this;
    classification->parent = this;
    protocol_pack->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_map.len(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return http_services.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (classification !=  nullptr && classification->has_data())
	|| (protocol_pack !=  nullptr && protocol_pack->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.len(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(http_services.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (classification !=  nullptr && classification->has_operation())
	|| (protocol_pack !=  nullptr && protocol_pack->has_operation());
}

std::string Native::Ip::Nbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http_services.is_set || is_set(http_services.yfilter)) leaf_name_data.push_back(http_services.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        ent_->parent = this;
        attribute_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "attribute-set")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        ent_->parent = this;
        attribute_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Ip::Nbar::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protocol-pack")
    {
        if(protocol_pack == nullptr)
        {
            protocol_pack = std::make_shared<Native::Ip::Nbar::ProtocolPack>();
        }
        return protocol_pack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    count_ = 0;
    for (auto ent_ : attribute_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : attribute_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(protocol_pack != nullptr)
    {
        _children["protocol-pack"] = protocol_pack;
    }

    return _children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http-services")
    {
        http_services = value;
        http_services.value_namespace = name_space;
        http_services.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http-services")
    {
        http_services.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "classification" || name == "custom" || name == "protocol-pack" || name == "http-services")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
    , application_set(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>())
    , category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
    , sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;
    application_set->parent = this;
    category->parent = this;
    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return (application_group !=  nullptr && application_group->has_data())
	|| (application_set !=  nullptr && application_set->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (application_set !=  nullptr && application_set->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "application-set")
    {
        if(application_set == nullptr)
        {
            application_set = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>();
        }
        return application_set;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_group != nullptr)
    {
        _children["application-group"] = application_group;
    }

    if(application_set != nullptr)
    {
        _children["application-set"] = application_set;
    }

    if(category != nullptr)
    {
        _children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        _children["sub-category"] = sub_category;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
    :
    custom(this, {"name"})
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::ApplicationSet()
    :
    custom(this, {"name"})
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_operation() const
{
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-set"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-set/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Category()
    :
    custom(this, {"name"})
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Attribute::Category::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::Category::has_operation() const
{
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Attribute::Category::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "category"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::Category::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::SubCategory()
    :
    custom(this, {"name"})
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_operation() const
{
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "sub-category"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::AttributeMap()
    :
    name{YType::str, "name"}
        ,
    attribute(std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>())
{
    attribute->parent = this;

    yang_name = "attribute-map"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::AttributeMap::~AttributeMap()
{
}

bool Native::Ip::Nbar::AttributeMap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::AttributeMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::AttributeMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::AttributeMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::AttributeMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Ip::Nbar::AttributeMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::Attribute::Attribute()
    :
    application_group{YType::str, "application-group"},
    application_set{YType::str, "application-set"},
    business_relevance{YType::str, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::str, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::str, "traffic-class"},
    tunnel{YType::str, "tunnel"}
{

    yang_name = "attribute"; yang_parent_name = "attribute-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return application_group.is_set
	|| application_set.is_set
	|| business_relevance.is_set
	|| category.is_set
	|| encrypted.is_set
	|| sub_category.is_set
	|| traffic_class.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_group.yfilter)
	|| ydk::is_set(application_set.yfilter)
	|| ydk::is_set(business_relevance.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| ydk::is_set(sub_category.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Nbar::AttributeMap::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.yfilter)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (application_set.is_set || is_set(application_set.yfilter)) leaf_name_data.push_back(application_set.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.yfilter)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.yfilter)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-group")
    {
        application_group = value;
        application_group.value_namespace = name_space;
        application_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-set")
    {
        application_set = value;
        application_set.value_namespace = name_space;
        application_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevance")
    {
        business_relevance = value;
        business_relevance.value_namespace = name_space;
        business_relevance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-category")
    {
        sub_category = value;
        sub_category.value_namespace = name_space;
        sub_category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-group")
    {
        application_group.yfilter = yfilter;
    }
    if(value_path == "application-set")
    {
        application_set.yfilter = yfilter;
    }
    if(value_path == "business-relevance")
    {
        business_relevance.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
    if(value_path == "sub-category")
    {
        sub_category.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "attribute-set"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::AttributeSet::~AttributeSet()
{
}

bool Native::Ip::Nbar::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| profile_name.is_set;
}

bool Native::Ip::Nbar::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Native::Ip::Nbar::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "profile-name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Classification()
    :
    auto_learn(nullptr) // presence node
    , dns(std::make_shared<Native::Ip::Nbar::Classification::Dns>())
    , granularity(std::make_shared<Native::Ip::Nbar::Classification::Granularity>())
    , tunneled_traffic(std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>())
{
    dns->parent = this;
    granularity->parent = this;
    tunneled_traffic->parent = this;

    yang_name = "classification"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::~Classification()
{
}

bool Native::Ip::Nbar::Classification::has_data() const
{
    if (is_presence_container) return true;
    return (auto_learn !=  nullptr && auto_learn->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (granularity !=  nullptr && granularity->has_data())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_data());
}

bool Native::Ip::Nbar::Classification::has_operation() const
{
    return is_set(yfilter)
	|| (auto_learn !=  nullptr && auto_learn->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (granularity !=  nullptr && granularity->has_operation())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_operation());
}

std::string Native::Ip::Nbar::Classification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-learn")
    {
        if(auto_learn == nullptr)
        {
            auto_learn = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn>();
        }
        return auto_learn;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Classification::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Ip::Nbar::Classification::Granularity>();
        }
        return granularity;
    }

    if(child_yang_name == "tunneled-traffic")
    {
        if(tunneled_traffic == nullptr)
        {
            tunneled_traffic = std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>();
        }
        return tunneled_traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_learn != nullptr)
    {
        _children["auto-learn"] = auto_learn;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(granularity != nullptr)
    {
        _children["granularity"] = granularity;
    }

    if(tunneled_traffic != nullptr)
    {
        _children["tunneled-traffic"] = tunneled_traffic;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-learn" || name == "dns" || name == "granularity" || name == "tunneled-traffic")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::AutoLearn()
    :
    top_asymmetric_socket{YType::empty, "top-asymmetric-socket"}
        ,
    top_hosts(nullptr) // presence node
    , top_ports(nullptr) // presence node
{

    yang_name = "auto-learn"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Nbar::Classification::AutoLearn::~AutoLearn()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_data() const
{
    if (is_presence_container) return true;
    return top_asymmetric_socket.is_set
	|| (top_hosts !=  nullptr && top_hosts->has_data())
	|| (top_ports !=  nullptr && top_ports->has_data());
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(top_asymmetric_socket.yfilter)
	|| (top_hosts !=  nullptr && top_hosts->has_operation())
	|| (top_ports !=  nullptr && top_ports->has_operation());
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (top_asymmetric_socket.is_set || is_set(top_asymmetric_socket.yfilter)) leaf_name_data.push_back(top_asymmetric_socket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::AutoLearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "top-hosts")
    {
        if(top_hosts == nullptr)
        {
            top_hosts = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopHosts>();
        }
        return top_hosts;
    }

    if(child_yang_name == "top-ports")
    {
        if(top_ports == nullptr)
        {
            top_ports = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopPorts>();
        }
        return top_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::AutoLearn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(top_hosts != nullptr)
    {
        _children["top-hosts"] = top_hosts;
    }

    if(top_ports != nullptr)
    {
        _children["top-ports"] = top_ports;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::AutoLearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket = value;
        top_asymmetric_socket.value_namespace = name_space;
        top_asymmetric_socket.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "top-hosts" || name == "top-ports" || name == "top-asymmetric-socket")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::TopHosts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-hosts"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::~TopHosts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_data() const
{
    if (is_presence_container) return true;
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::TopPorts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-ports"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::~TopPorts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_data() const
{
    if (is_presence_container) return true;
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Dns()
    :
    classify_by_domain{YType::empty, "classify-by-domain"}
        ,
    learning(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Classification::Dns::has_data() const
{
    if (is_presence_container) return true;
    return classify_by_domain.is_set
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::Ip::Nbar::Classification::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classify_by_domain.yfilter)
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::Ip::Nbar::Classification::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classify_by_domain.is_set || is_set(classify_by_domain.yfilter)) leaf_name_data.push_back(classify_by_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Ip::Nbar::Classification::Dns::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(learning != nullptr)
    {
        _children["learning"] = learning;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain = value;
        classify_by_domain.value_namespace = name_space;
        classify_by_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning" || name == "classify-by-domain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Learning::Learning()
    :
    guard{YType::empty, "guard"}
{

    yang_name = "learning"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Nbar::Classification::Dns::Learning::~Learning()
{
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_data() const
{
    if (is_presence_container) return true;
    return guard.is_set;
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guard.yfilter);
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Dns::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Dns::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::Granularity()
    :
    coarse_grain{YType::empty, "coarse-grain"}
        ,
    fine_grain(nullptr) // presence node
{

    yang_name = "granularity"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::~Granularity()
{
}

bool Native::Ip::Nbar::Classification::Granularity::has_data() const
{
    if (is_presence_container) return true;
    return coarse_grain.is_set
	|| (fine_grain !=  nullptr && fine_grain->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coarse_grain.yfilter)
	|| (fine_grain !=  nullptr && fine_grain->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coarse_grain.is_set || is_set(coarse_grain.yfilter)) leaf_name_data.push_back(coarse_grain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fine-grain")
    {
        if(fine_grain == nullptr)
        {
            fine_grain = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain>();
        }
        return fine_grain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fine_grain != nullptr)
    {
        _children["fine-grain"] = fine_grain;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain = value;
        coarse_grain.value_namespace = name_space;
        coarse_grain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fine-grain" || name == "coarse-grain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::FineGrain()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>())
    , protocol(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>())
{
    attribute->parent = this;
    protocol->parent = this;

    yang_name = "fine-grain"; yang_parent_name = "granularity"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::~FineGrain()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fine-grain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "protocol")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Attribute()
    :
    application_group(this, {"name"})
    , application_set(this, {"name"})
    , business_relevance(this, {"name"})
    , category(this, {"name"})
    , encrypted(this, {"name"})
    , sub_category(this, {"name"})
    , traffic_class(this, {"name"})
    , tunnel(this, {"name"})
{

    yang_name = "attribute"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.len(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.len(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.len(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.len(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.len(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.len(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup>();
        ent_->parent = this;
        application_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "application-set")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet>();
        ent_->parent = this;
        application_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "business-relevance")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance>();
        ent_->parent = this;
        business_relevance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encrypted")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted>();
        ent_->parent = this;
        encrypted.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sub-category")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory>();
        ent_->parent = this;
        sub_category.append(ent_);
        return ent_;
    }

    if(child_yang_name == "traffic-class")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass>();
        ent_->parent = this;
        traffic_class.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : application_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : business_relevance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : encrypted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sub_category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : traffic_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyType::ssh_rsa {0, "ssh-rsa"};

const Enum::YLeaf Native::Ip::Tcp::PathMtuDiscovery::AgeTimer::infinite {0, "infinite"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};


}
}

