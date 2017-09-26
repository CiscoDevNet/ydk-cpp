
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_12.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Policy()
    :
    number{YType::uint32, "number"},
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::uint32, "lifetime"}
    	,
    default_(std::make_shared<Native::Crypto::Isakmp::Policy::Default_>())
	,encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>())
{
    default_->parent = this;
    encryption->parent = this;

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Policy::has_data() const
{
    return number.is_set
	|| authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Policy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "encryption" || name == "number" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Default_()
    :
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::empty, "lifetime"}
    	,
    encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption>())
{
    encryption->parent = this;

    yang_name = "default"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::has_data() const
{
    return authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
    	,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_data() const
{
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default_::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_data() const
{
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
    	,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_data() const
{
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::Crypto::Isakmp::Policy::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_data() const
{
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Profile()
    :
    name{YType::str, "name"},
    accounting{YType::str, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::str, "local-address"},
    qos_group{YType::uint16, "qos-group"},
    virtual_template{YType::uint16, "virtual-template"},
    vrf{YType::str, "vrf"}
    	,
    ca(std::make_shared<Native::Crypto::Isakmp::Profile::Ca>())
	,client(std::make_shared<Native::Crypto::Isakmp::Profile::Client>())
	,default_(std::make_shared<Native::Crypto::Isakmp::Profile::Default_>())
	,initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>())
	,keepalive(std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>())
	,match(std::make_shared<Native::Crypto::Isakmp::Profile::Match>())
	,self_identity(std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>())
{
    ca->parent = this;
    client->parent = this;
    default_->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    keepalive->parent = this;
    match->parent = this;
    self_identity->parent = this;

    yang_name = "profile"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Profile::~Profile()
{
}

bool Native::Crypto::Isakmp::Profile::has_data() const
{
    return name.is_set
	|| accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Profile::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ca != nullptr)
    {
        children["ca"] = ca;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(initiate != nullptr)
    {
        children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        children["self-identity"] = self_identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ca" || name == "client" || name == "default" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "name" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Ca::has_data() const
{
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>())
	,configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>())
	,pki(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_data() const
{
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Pki()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>())
{
    authorization->parent = this;

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Default_()
    :
    accounting{YType::empty, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::empty, "local-address"},
    qos_group{YType::empty, "qos-group"},
    virtual_template{YType::empty, "virtual-template"},
    vrf{YType::empty, "vrf"}
    	,
    ca(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Ca>())
	,client(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client>())
	,initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_>())
	,keepalive(nullptr) // presence node
	,match(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match>())
	,self_identity(nullptr) // presence node
{
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    match->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::~Default_()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::has_data() const
{
    return accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ca != nullptr)
    {
        children["ca"] = ca;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(initiate != nullptr)
    {
        children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        children["self-identity"] = self_identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_data() const
{
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Authentication>())
	,configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Configuration>())
	,pki(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::Authentication()
    :
    list{YType::empty, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_data() const
{
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Pki()
    :
    authorization(nullptr) // presence node
{

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::Authorization()
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_data() const
{
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::Mode()
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::Authorization()
    :
    list{YType::empty, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Keepalive::Keepalive()
{

    yang_name = "keepalive"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Keepalive::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::Keepalive::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Match()
    :
    certificate{YType::str, "certificate"}
    	,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::has_data() const
{
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Identity()
    :
    group{YType::str, "group"}
    	,
    address(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address>())
	,host(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host>())
	,ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address>())
	,user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn>())
{
    address->parent = this;
    host->parent = this;
    ipv4_address->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::has_data() const
{
    return group.is_set
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address>();
        }
        return address;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(user_fqdn != nullptr)
    {
        children["user-fqdn"] = user_fqdn;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "host" || name == "ipv4-address" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::has_data() const
{
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::Host()
    :
    domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch>())
	,domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName>())
{
    domain_match->parent = this;
    domain_name->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::has_data() const
{
    return (domain_match !=  nullptr && domain_match->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_match !=  nullptr && domain_match->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-match" || name == "domain-name")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::~Ipv4Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch>())
	,domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName>())
{
    domain_match->parent = this;
    domain_name->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::has_data() const
{
    return (domain_match !=  nullptr && domain_match->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_match !=  nullptr && domain_match->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-match" || name == "domain-name")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::SelfIdentity()
{

    yang_name = "self-identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default_::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_data() const
{
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Initiate::Mode::Mode()
    :
    aggressive{YType::empty, "aggressive"}
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_data() const
{
    return aggressive.is_set;
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Keepalive::Keepalive()
    :
    number{YType::uint16, "number"},
    retry{YType::uint8, "retry"}
{

    yang_name = "keepalive"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_data() const
{
    return number.is_set
	|| retry.is_set;
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "retry")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Match()
    :
    certificate{YType::str, "certificate"}
    	,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Match::has_data() const
{
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Identity()
    :
    group{YType::str, "group"}
    	,
    address(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Address>())
	,host(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host>())
	,ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address>())
	,user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn>())
{
    address->parent = this;
    host->parent = this;
    ipv4_address->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_data() const
{
    return group.is_set
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Address>();
        }
        return address;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(user_fqdn != nullptr)
    {
        children["user-fqdn"] = user_fqdn;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "host" || name == "ipv4-address" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_data() const
{
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::Host()
    :
    domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>())
	,domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>())
{
    domain_match->parent = this;
    domain_name->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_data() const
{
    return (domain_match !=  nullptr && domain_match->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_match !=  nullptr && domain_match->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-match" || name == "domain-name")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::~Ipv4Address()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>())
	,domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>())
{
    domain_match->parent = this;
    domain_name->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_data() const
{
    return (domain_match !=  nullptr && domain_match->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_match !=  nullptr && domain_match->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-match" || name == "domain-name")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::SelfIdentity()
    :
    user_fqdn{YType::str, "user-fqdn"}
    	,
    address(nullptr) // presence node
	,fqdn(nullptr) // presence node
{

    yang_name = "self-identity"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_data() const
{
    return user_fqdn.is_set
	|| (address !=  nullptr && address->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_fqdn.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity::Address>();
        }
        return address;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(fqdn != nullptr)
    {
        children["fqdn"] = fqdn;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fqdn" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Address::Address()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "self-identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_data() const
{
    return ipv6.is_set;
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::Fqdn()
    :
    id{YType::str, "id"}
{

    yang_name = "fqdn"; yang_parent_name = "self-identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_data() const
{
    return id.is_set;
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Crypto::Isakmp::Xauth::Xauth()
    :
    timeout{YType::uint8, "timeout"}
{

    yang_name = "xauth"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Isakmp::Xauth::~Xauth()
{
}

bool Native::Crypto::Isakmp::Xauth::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Isakmp::Xauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Xauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Xauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Xauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Xauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Xauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Isakmp::Xauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Xauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Xauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Key::Key()
    :
    storage{YType::str, "storage"}
    	,
    decrypt(std::make_shared<Native::Crypto::Key::Decrypt>())
	,encrypt(std::make_shared<Native::Crypto::Key::Encrypt>())
	,export_(std::make_shared<Native::Crypto::Key::Export_>())
	,generate(std::make_shared<Native::Crypto::Key::Generate>())
	,import(std::make_shared<Native::Crypto::Key::Import>())
	,move(std::make_shared<Native::Crypto::Key::Move>())
	,pubkey_chain(std::make_shared<Native::Crypto::Key::PubkeyChain>())
	,zeroize(std::make_shared<Native::Crypto::Key::Zeroize>())
{
    decrypt->parent = this;
    encrypt->parent = this;
    export_->parent = this;
    generate->parent = this;
    import->parent = this;
    move->parent = this;
    pubkey_chain->parent = this;
    zeroize->parent = this;

    yang_name = "key"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::~Key()
{
}

bool Native::Crypto::Key::has_data() const
{
    return storage.is_set
	|| (decrypt !=  nullptr && decrypt->has_data())
	|| (encrypt !=  nullptr && encrypt->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (generate !=  nullptr && generate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (move !=  nullptr && move->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (zeroize !=  nullptr && zeroize->has_data());
}

bool Native::Crypto::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(storage.yfilter)
	|| (decrypt !=  nullptr && decrypt->has_operation())
	|| (encrypt !=  nullptr && encrypt->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (generate !=  nullptr && generate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (move !=  nullptr && move->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (zeroize !=  nullptr && zeroize->has_operation());
}

std::string Native::Crypto::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decrypt")
    {
        if(decrypt == nullptr)
        {
            decrypt = std::make_shared<Native::Crypto::Key::Decrypt>();
        }
        return decrypt;
    }

    if(child_yang_name == "encrypt")
    {
        if(encrypt == nullptr)
        {
            encrypt = std::make_shared<Native::Crypto::Key::Encrypt>();
        }
        return encrypt;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Crypto::Key::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "generate")
    {
        if(generate == nullptr)
        {
            generate = std::make_shared<Native::Crypto::Key::Generate>();
        }
        return generate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Crypto::Key::Import>();
        }
        return import;
    }

    if(child_yang_name == "move")
    {
        if(move == nullptr)
        {
            move = std::make_shared<Native::Crypto::Key::Move>();
        }
        return move;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Crypto::Key::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "zeroize")
    {
        if(zeroize == nullptr)
        {
            zeroize = std::make_shared<Native::Crypto::Key::Zeroize>();
        }
        return zeroize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(decrypt != nullptr)
    {
        children["decrypt"] = decrypt;
    }

    if(encrypt != nullptr)
    {
        children["encrypt"] = encrypt;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(generate != nullptr)
    {
        children["generate"] = generate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(move != nullptr)
    {
        children["move"] = move;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(zeroize != nullptr)
    {
        children["zeroize"] = zeroize;
    }

    return children;
}

void Native::Crypto::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt" || name == "encrypt" || name == "export" || name == "generate" || name == "import" || name == "move" || name == "pubkey-chain" || name == "zeroize" || name == "storage")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Decrypt()
    :
    ec(nullptr) // presence node
	,rsa(nullptr) // presence node
	,write(std::make_shared<Native::Crypto::Key::Decrypt::Write>())
{
    write->parent = this;

    yang_name = "decrypt"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::~Decrypt()
{
}

bool Native::Crypto::Key::Decrypt::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (write !=  nullptr && write->has_data());
}

bool Native::Crypto::Key::Decrypt::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (write !=  nullptr && write->has_operation());
}

std::string Native::Crypto::Key::Decrypt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Decrypt::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Decrypt::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "write")
    {
        if(write == nullptr)
        {
            write = std::make_shared<Native::Crypto::Key::Decrypt::Write>();
        }
        return write;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    if(write != nullptr)
    {
        children["write"] = write;
    }

    return children;
}

void Native::Crypto::Key::Decrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Decrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Decrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa" || name == "write")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::Ec::~Ec()
{
}

bool Native::Crypto::Key::Decrypt::Ec::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Decrypt::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Decrypt::Rsa::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Decrypt::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Write()
    :
    ec(nullptr) // presence node
	,rsa(nullptr) // presence node
{

    yang_name = "write"; yang_parent_name = "decrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::Write::~Write()
{
}

bool Native::Crypto::Key::Decrypt::Write::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Decrypt::Write::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Decrypt::Write::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::Write::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Decrypt::Write::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Decrypt::Write::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::Write::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Decrypt::Write::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Decrypt::Write::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Decrypt::Write::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::Write::Ec::~Ec()
{
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Write::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::Write::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::Write::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Decrypt::Write::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Write::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Write::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Decrypt::Write::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Decrypt::Write::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Decrypt::Write::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/decrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Decrypt::Write::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Decrypt::Write::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Decrypt::Write::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Decrypt::Write::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Decrypt::Write::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Decrypt::Write::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Decrypt::Write::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Encrypt()
    :
    ec(nullptr) // presence node
	,rsa(nullptr) // presence node
	,write(std::make_shared<Native::Crypto::Key::Encrypt::Write>())
{
    write->parent = this;

    yang_name = "encrypt"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::~Encrypt()
{
}

bool Native::Crypto::Key::Encrypt::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (write !=  nullptr && write->has_data());
}

bool Native::Crypto::Key::Encrypt::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (write !=  nullptr && write->has_operation());
}

std::string Native::Crypto::Key::Encrypt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Encrypt::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Encrypt::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "write")
    {
        if(write == nullptr)
        {
            write = std::make_shared<Native::Crypto::Key::Encrypt::Write>();
        }
        return write;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    if(write != nullptr)
    {
        children["write"] = write;
    }

    return children;
}

void Native::Crypto::Key::Encrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Encrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Encrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa" || name == "write")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::Ec::~Ec()
{
}

bool Native::Crypto::Key::Encrypt::Ec::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Encrypt::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Encrypt::Rsa::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Encrypt::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Write()
    :
    ec(nullptr) // presence node
	,rsa(nullptr) // presence node
{

    yang_name = "write"; yang_parent_name = "encrypt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::Write::~Write()
{
}

bool Native::Crypto::Key::Encrypt::Write::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Encrypt::Write::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Encrypt::Write::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::Write::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Encrypt::Write::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Encrypt::Write::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::Write::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Encrypt::Write::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Encrypt::Write::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Encrypt::Write::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::Write::Ec::~Ec()
{
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::Write::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::Write::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Encrypt::Write::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_data() const
{
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Encrypt::Write::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Encrypt::Write::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Export_()
{

    yang_name = "export"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export_::~Export_()
{
}

bool Native::Crypto::Key::Export_::has_data() const
{
    for (std::size_t index=0; index<ec.size(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.size(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Export_::has_operation() const
{
    for (std::size_t index=0; index<ec.size(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.size(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Export_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        for(auto const & c : ec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::Export_::Ec>();
        c->parent = this;
        ec.push_back(c);
        return c;
    }

    if(child_yang_name == "rsa")
    {
        for(auto const & c : rsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::Export_::Rsa>();
        c->parent = this;
        rsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ec)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Ec::Ec()
    :
    label{YType::str, "label"}
    	,
    pem(std::make_shared<Native::Crypto::Key::Export_::Ec::Pem>())
{
    pem->parent = this;

    yang_name = "ec"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export_::Ec::~Ec()
{
}

bool Native::Crypto::Key::Export_::Ec::has_data() const
{
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export_::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export_::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export_::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export_::Ec::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    return children;
}

void Native::Crypto::Key::Export_::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Ec::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export_::Ec::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Key::Export_::Ec::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Ec::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export_::Ec::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export_::Ec::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export_::Ec::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Ec::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Ec::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export_::Ec::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export_::Ec::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Ec::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Export_::Ec::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export_::Ec::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export_::Ec::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Ec::Pem::Terminal::Terminal()
    :
    des{YType::str, "des"},
    pk_3des{YType::str, "pk-3des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Ec::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export_::Ec::Pem::Terminal::has_data() const
{
    return des.is_set
	|| pk_3des.is_set;
}

bool Native::Crypto::Key::Export_::Ec::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(pk_3des.yfilter);
}

std::string Native::Crypto::Key::Export_::Ec::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Ec::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Ec::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Ec::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Export_::Ec::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Ec::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Ec::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "des" || name == "pk-3des")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Ec::Pem::Url::Url()
    :
    des{YType::str, "des"},
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Ec::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export_::Ec::Pem::Url::has_data() const
{
    return des.is_set
	|| file.is_set
	|| url_3des.is_set;
}

bool Native::Crypto::Key::Export_::Ec::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter);
}

std::string Native::Crypto::Key::Export_::Ec::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Ec::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Ec::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Ec::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Export_::Ec::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Ec::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Ec::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "des" || name == "file" || name == "url-3des")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Rsa::Rsa()
    :
    label{YType::str, "label"}
    	,
    pem(std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem>())
{
    pem->parent = this;

    yang_name = "rsa"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export_::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Export_::Rsa::has_data() const
{
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export_::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export_::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export_::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    return children;
}

void Native::Crypto::Key::Export_::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Rsa::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Rsa::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export_::Rsa::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export_::Rsa::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export_::Rsa::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Rsa::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Rsa::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export_::Rsa::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Rsa::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Export_::Rsa::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export_::Rsa::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export_::Rsa::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Rsa::Pem::Terminal::Terminal()
    :
    des{YType::str, "des"},
    pk_3des{YType::str, "pk-3des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Rsa::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Terminal::has_data() const
{
    return des.is_set
	|| pk_3des.is_set;
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(pk_3des.yfilter);
}

std::string Native::Crypto::Key::Export_::Rsa::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Rsa::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Rsa::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Rsa::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Export_::Rsa::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Rsa::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "des" || name == "pk-3des")
        return true;
    return false;
}

Native::Crypto::Key::Export_::Rsa::Pem::Url::Url()
    :
    des{YType::str, "des"},
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export_::Rsa::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Url::has_data() const
{
    return des.is_set
	|| file.is_set
	|| url_3des.is_set;
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter);
}

std::string Native::Crypto::Key::Export_::Rsa::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export_::Rsa::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export_::Rsa::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export_::Rsa::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Export_::Rsa::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export_::Rsa::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export_::Rsa::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "des" || name == "file" || name == "url-3des")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Generate()
    :
    ec(std::make_shared<Native::Crypto::Key::Generate::Ec>())
	,rsa(nullptr) // presence node
{
    ec->parent = this;

    yang_name = "generate"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Generate::~Generate()
{
}

bool Native::Crypto::Key::Generate::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Generate::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Generate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Generate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Generate::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Generate::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Generate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Generate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Generate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Generate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Ec::Ec()
    :
    exportable{YType::empty, "exportable"},
    keysize{YType::enumeration, "keysize"},
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Generate::Ec::~Ec()
{
}

bool Native::Crypto::Key::Generate::Ec::has_data() const
{
    return exportable.is_set
	|| keysize.is_set
	|| label.is_set;
}

bool Native::Crypto::Key::Generate::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Generate::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Generate::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Generate::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Generate::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exportable" || name == "keysize" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Rsa::Rsa()
    :
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_keys{YType::empty, "general-keys"},
    label{YType::str, "label"},
    modulus{YType::uint16, "modulus"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    usage_keys{YType::empty, "usage-keys"}
{

    yang_name = "rsa"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Generate::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Generate::Rsa::has_data() const
{
    return encryption.is_set
	|| exportable.is_set
	|| general_keys.is_set
	|| label.is_set
	|| modulus.is_set
	|| on.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| usage_keys.is_set;
}

bool Native::Crypto::Key::Generate::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_keys.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(modulus.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(usage_keys.yfilter);
}

std::string Native::Crypto::Key::Generate::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_keys.is_set || is_set(general_keys.yfilter)) leaf_name_data.push_back(general_keys.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (modulus.is_set || is_set(modulus.yfilter)) leaf_name_data.push_back(modulus.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Generate::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Generate::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Generate::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-keys")
    {
        general_keys = value;
        general_keys.value_namespace = name_space;
        general_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulus")
    {
        modulus = value;
        modulus.value_namespace = name_space;
        modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-keys")
    {
        general_keys.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "modulus")
    {
        modulus.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "exportable" || name == "general-keys" || name == "label" || name == "modulus" || name == "on" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Key::Import::Import()
{

    yang_name = "import"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Import::~Import()
{
}

bool Native::Crypto::Key::Import::has_data() const
{
    for (std::size_t index=0; index<ec.size(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.size(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Import::has_operation() const
{
    for (std::size_t index=0; index<ec.size(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.size(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        for(auto const & c : ec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::Import::Ec>();
        c->parent = this;
        ec.push_back(c);
        return c;
    }

    if(child_yang_name == "rsa")
    {
        for(auto const & c : rsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::Import::Rsa>();
        c->parent = this;
        rsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ec)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Ec()
    :
    name{YType::str, "name"},
    exportable{YType::empty, "exportable"},
    terminal{YType::str, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Key::Import::Ec::Url>())
{
    url->parent = this;

    yang_name = "ec"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Import::Ec::~Ec()
{
}

bool Native::Crypto::Key::Import::Ec::has_data() const
{
    return name.is_set
	|| exportable.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Ec::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Import::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "name" || name == "exportable" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Import::Ec::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Ec::Url::has_data() const
{
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Ec::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Ec::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Ec::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Ec::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Import::Ec::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
}

Native::Crypto::Key::Import::Rsa::Rsa()
    :
    label{YType::str, "label"},
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_purpose{YType::empty, "general-purpose"},
    on{YType::str, "on"},
    pem{YType::empty, "pem"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    terminal{YType::str, "terminal"},
    usage_keys{YType::empty, "usage-keys"}
    	,
    url(std::make_shared<Native::Crypto::Key::Import::Rsa::Url>())
{
    url->parent = this;

    yang_name = "rsa"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Import::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Import::Rsa::has_data() const
{
    return label.is_set
	|| encryption.is_set
	|| exportable.is_set
	|| general_purpose.is_set
	|| on.is_set
	|| pem.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| terminal.is_set
	|| usage_keys.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_purpose.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(pem.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| ydk::is_set(usage_keys.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_purpose.is_set || is_set(general_purpose.yfilter)) leaf_name_data.push_back(general_purpose.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Rsa::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Import::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-purpose")
    {
        general_purpose = value;
        general_purpose.value_namespace = name_space;
        general_purpose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-purpose")
    {
        general_purpose.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "label" || name == "encryption" || name == "exportable" || name == "general-purpose" || name == "on" || name == "pem" || name == "redundancy" || name == "signature" || name == "storage" || name == "terminal" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Key::Import::Rsa::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Import::Rsa::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Rsa::Url::has_data() const
{
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Rsa::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Rsa::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Rsa::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Rsa::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Import::Rsa::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
}

Native::Crypto::Key::Move::Move()
    :
    rsa(std::make_shared<Native::Crypto::Key::Move::Rsa>())
{
    rsa->parent = this;

    yang_name = "move"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Move::~Move()
{
}

bool Native::Crypto::Key::Move::has_data() const
{
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Move::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Move::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Move::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Move::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Move::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Move::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Move::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Move::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Move::Rsa::Rsa()
    :
    label{YType::str, "label"},
    non_exportable{YType::empty, "non-exportable"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    storage{YType::str, "storage"}
{

    yang_name = "rsa"; yang_parent_name = "move"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Move::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Move::Rsa::has_data() const
{
    return label.is_set
	|| non_exportable.is_set
	|| on.is_set
	|| redundancy.is_set
	|| storage.is_set;
}

bool Native::Crypto::Key::Move::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(non_exportable.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(storage.yfilter);
}

std::string Native::Crypto::Key::Move::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/move/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (non_exportable.is_set || is_set(non_exportable.yfilter)) leaf_name_data.push_back(non_exportable.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Move::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Move::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Move::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exportable")
    {
        non_exportable = value;
        non_exportable.value_namespace = name_space;
        non_exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Move::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "non-exportable")
    {
        non_exportable.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Move::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "non-exportable" || name == "on" || name == "redundancy" || name == "storage")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::PubkeyChain()
    :
    rsa(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>())
{
    rsa->parent = this;

    yang_name = "pubkey-chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::PubkeyChain::has_data() const
{
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Rsa()
    :
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_>())
{
    default_->parent = this;

    yang_name = "rsa"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_data() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        for(auto const & c : addressed_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "named-key")
    {
        for(auto const & c : named_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressed_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : named_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "default" || name == "named-key")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"},
    use{YType::enumeration, "use"}
    	,
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_>())
	,key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>())
{
    default_->parent = this;
    key_string->parent = this;

    yang_name = "addressed-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_data() const
{
    return ip.is_set
	|| address.is_set
	|| serial_number.is_set
	|| use.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(use.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "key-string" || name == "ip" || name == "address" || name == "serial-number" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::Default_()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_data() const
{
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::has_data() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        for(auto const & c : addressed_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "named-key")
    {
        for(auto const & c : named_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressed_key)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : named_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{

    yang_name = "addressed-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_data() const
{
    return ip.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{

    yang_name = "named-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_data() const
{
    return name.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"},
    use{YType::enumeration, "use"}
    	,
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_>())
	,key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>())
{
    default_->parent = this;
    key_string->parent = this;

    yang_name = "named-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_data() const
{
    return name.is_set
	|| address.is_set
	|| serial_number.is_set
	|| use.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(use.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "key-string" || name == "name" || name == "address" || name == "serial-number" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::Default_()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_data() const
{
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Zeroize()
    :
    ec(nullptr) // presence node
	,pubkey_chain(nullptr) // presence node
	,rsa(nullptr) // presence node
{

    yang_name = "zeroize"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::~Zeroize()
{
}

bool Native::Crypto::Key::Zeroize::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Zeroize::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Zeroize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zeroize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Zeroize::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Crypto::Key::Zeroize::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Zeroize::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Zeroize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Zeroize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Zeroize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "pubkey-chain" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Ec::Ec()
    :
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::Ec::~Ec()
{
}

bool Native::Crypto::Key::Zeroize::Ec::has_data() const
{
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::PubkeyChain::PubkeyChain()
    :
    index_{YType::uint16, "index"}
{

    yang_name = "pubkey-chain"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_data() const
{
    return index_.is_set;
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Rsa::Rsa()
    :
    label{YType::str, "label"}
{

    yang_name = "rsa"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Zeroize::Rsa::has_data() const
{
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Keyring::Keyring()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Crypto::Keyring::Default_>())
	,pre_shared_key(std::make_shared<Native::Crypto::Keyring::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::RsaPubkey>())
{
    default_->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "keyring"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Keyring::~Keyring()
{
}

bool Native::Crypto::Keyring::has_data() const
{
    return name.is_set
	|| description.is_set
	|| local_address.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:keyring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Keyring::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        children["rsa-pubkey"] = rsa_pubkey;
    }

    return children;
}

void Native::Crypto::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "name" || name == "description" || name == "local-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::Default_()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"}
    	,
    pre_shared_key(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey>())
{
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "default"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::~Default_()
{
}

bool Native::Crypto::Keyring::Default_::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        children["rsa-pubkey"] = rsa_pubkey;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-shared-key" || name == "rsa-pubkey" || name == "description" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address>())
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    mask{YType::str, "mask"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_data() const
{
    return ipv4_addr.is_set
	|| encryption.is_set
	|| key.is_set
	|| mask.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-addr='" <<ipv4_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "encryption" || name == "key" || name == "mask" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6.is_set
	|| encryption.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "encryption" || name == "key" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_data() const
{
    return name.is_set
	|| encryption.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encryption" || name == "key" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_data() const
{
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_data() const
{
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_data() const
{
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>())
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    mask{YType::str, "mask"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_data() const
{
    return ipv4_addr.is_set
	|| encryption.is_set
	|| key.is_set
	|| mask.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-addr='" <<ipv4_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "encryption" || name == "key" || name == "mask" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6.is_set
	|| encryption.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "encryption" || name == "key" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_data() const
{
    return name.is_set
	|| encryption.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encryption" || name == "key" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_data() const
{
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Keyring::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_data() const
{
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_data() const
{
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Logging::Logging()
    :
    ikev2{YType::empty, "ikev2"},
    session{YType::empty, "session"}
    	,
    ezvpn(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Logging::~Logging()
{
}

bool Native::Crypto::Logging::has_data() const
{
    return ikev2.is_set
	|| session.is_set
	|| (ezvpn !=  nullptr && ezvpn->has_data());
}

bool Native::Crypto::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ikev2.yfilter)
	|| ydk::is_set(session.yfilter)
	|| (ezvpn !=  nullptr && ezvpn->has_operation());
}

std::string Native::Crypto::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikev2.is_set || is_set(ikev2.yfilter)) leaf_name_data.push_back(ikev2.get_name_leafdata());
    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ezvpn")
    {
        if(ezvpn == nullptr)
        {
            ezvpn = std::make_shared<Native::Crypto::Logging::Ezvpn>();
        }
        return ezvpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ezvpn != nullptr)
    {
        children["ezvpn"] = ezvpn;
    }

    return children;
}

void Native::Crypto::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ikev2")
    {
        ikev2 = value;
        ikev2.value_namespace = name_space;
        ikev2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ikev2")
    {
        ikev2.yfilter = yfilter;
    }
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ezvpn" || name == "ikev2" || name == "session")
        return true;
    return false;
}

Native::Crypto::Logging::Ezvpn::Ezvpn()
    :
    group{YType::str, "group"}
{

    yang_name = "ezvpn"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Logging::Ezvpn::~Ezvpn()
{
}

bool Native::Crypto::Logging::Ezvpn::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::Logging::Ezvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Logging::Ezvpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::Ezvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ezvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::Ezvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Logging::Ezvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Logging::Ezvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Logging::Ezvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::Ezvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::Ezvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::MapClient::MapClient()
{

    yang_name = "map-client"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapClient::~MapClient()
{
}

bool Native::Crypto::MapClient::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapClient::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::MapClient::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::MapClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    isakmp_profile{YType::str, "isakmp-profile"},
    local_address{YType::str, "local-address"}
    	,
    client(std::make_shared<Native::Crypto::MapClient::Map::Client>())
	,isakmp(std::make_shared<Native::Crypto::MapClient::Map::Isakmp>())
	,redundancy(std::make_shared<Native::Crypto::MapClient::Map::Redundancy>())
{
    client->parent = this;
    isakmp->parent = this;
    redundancy->parent = this;

    yang_name = "map"; yang_parent_name = "map-client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapClient::Map::~Map()
{
}

bool Native::Crypto::MapClient::Map::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| isakmp_profile.is_set
	|| local_address.is_set
	|| (client !=  nullptr && client->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Crypto::MapClient::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Crypto::MapClient::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::MapClient::Map::Client>();
        }
        return client;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::MapClient::Map::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::MapClient::Map::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::Crypto::MapClient::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "isakmp" || name == "redundancy" || name == "name" || name == "ipv6" || name == "isakmp-profile" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Client()
    :
    accounting(std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>())
	,authentication(std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>())
	,configuration(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>())
{
    accounting->parent = this;
    authentication->parent = this;
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::~Client()
{
}

bool Native::Crypto::MapClient::Map::Client::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::MapClient::Map::Client::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "configuration")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Accounting::Accounting()
    :
    list{YType::str, "list"}
{

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Accounting::~Accounting()
{
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Configuration()
    :
    address(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>())
{
    address->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::Address()
    :
    initiate{YType::empty, "initiate"},
    respond{YType::empty, "respond"}
{

    yang_name = "address"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::~Address()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_data() const
{
    return initiate.is_set
	|| respond.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initiate.yfilter)
	|| ydk::is_set(respond.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initiate.is_set || is_set(initiate.yfilter)) leaf_name_data.push_back(initiate.get_name_leafdata());
    if (respond.is_set || is_set(respond.yfilter)) leaf_name_data.push_back(respond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initiate")
    {
        initiate = value;
        initiate.value_namespace = name_space;
        initiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respond")
    {
        respond = value;
        respond.value_namespace = name_space;
        respond.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initiate")
    {
        initiate.yfilter = yfilter;
    }
    if(value_path == "respond")
    {
        respond.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiate" || name == "respond")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Isakmp::Isakmp()
    :
    authorization{YType::empty, "authorization"},
    list{YType::str, "list"}
{

    yang_name = "isakmp"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Isakmp::~Isakmp()
{
}

bool Native::Crypto::MapClient::Map::Isakmp::has_data() const
{
    return authorization.is_set
	|| list.is_set;
}

bool Native::Crypto::MapClient::Map::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::Redundancy()
    :
    replay_interval(std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>())
{
    replay_interval->parent = this;

    yang_name = "redundancy"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::~Redundancy()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_data() const
{
    return (replay_interval !=  nullptr && replay_interval->has_data());
}

bool Native::Crypto::MapClient::Map::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (replay_interval !=  nullptr && replay_interval->has_operation());
}

std::string Native::Crypto::MapClient::Map::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-interval")
    {
        if(replay_interval == nullptr)
        {
            replay_interval = std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>();
        }
        return replay_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(replay_interval != nullptr)
    {
        children["replay-interval"] = replay_interval;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-interval")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::ReplayInterval()
    :
    inbound{YType::uint32, "inbound"},
    outbound{YType::uint32, "outbound"}
{

    yang_name = "replay-interval"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::~ReplayInterval()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::MapIpv6Gdoi()
{

    yang_name = "map-ipv6-gdoi"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapIpv6Gdoi::~MapIpv6Gdoi()
{
}

bool Native::Crypto::MapIpv6Gdoi::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapIpv6Gdoi::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-ipv6-gdoi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapIpv6Gdoi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapIpv6Gdoi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Map()
    :
    name{YType::str, "name"},
    activate{YType::empty, "activate"},
    gdoi{YType::enumeration, "gdoi"},
    ipv6{YType::empty, "ipv6"}
    	,
    default_(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_>())
	,match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>())
{
    default_->parent = this;
    match->parent = this;

    yang_name = "map"; yang_parent_name = "map-ipv6-gdoi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapIpv6Gdoi::Map::~Map()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_data() const
{
    return name.is_set
	|| activate.is_set
	|| gdoi.is_set
	|| ipv6.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-ipv6-gdoi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "name" || name == "activate" || name == "gdoi" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Default_()
    :
    activate{YType::empty, "activate"}
    	,
    match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_::Match>())
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::~Default_()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_data() const
{
    return activate.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Mib::Mib()
    :
    ipsec(std::make_shared<Native::Crypto::Mib::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "mib"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::~Mib()
{
}

bool Native::Crypto::Mib::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Mib::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Ipsec()
    :
    flowmib(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>())
{
    flowmib->parent = this;

    yang_name = "ipsec"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Mib::Ipsec::has_data() const
{
    return (flowmib !=  nullptr && flowmib->has_data());
}

bool Native::Crypto::Mib::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (flowmib !=  nullptr && flowmib->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowmib")
    {
        if(flowmib == nullptr)
        {
            flowmib = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>();
        }
        return flowmib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flowmib != nullptr)
    {
        children["flowmib"] = flowmib;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowmib")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::Flowmib()
    :
    history(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>())
{
    history->parent = this;

    yang_name = "flowmib"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::~Flowmib()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::History()
    :
    failure(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>())
	,tunnel(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>())
{
    failure->parent = this;
    tunnel->parent = this;

    yang_name = "history"; yang_parent_name = "flowmib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::~History()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::Failure()
    :
    size{YType::uint8, "size"}
{

    yang_name = "failure"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::~Failure()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::Tunnel()
    :
    size{YType::uint8, "size"}
{

    yang_name = "tunnel"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::~Tunnel()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Pki()
    :
    authenticate{YType::str, "authenticate"},
    enroll{YType::str, "enroll"}
    	,
    certificate(std::make_shared<Native::Crypto::Pki::Certificate>())
	,crl(std::make_shared<Native::Crypto::Pki::Crl>())
	,default_(std::make_shared<Native::Crypto::Pki::Default_>())
	,profile(std::make_shared<Native::Crypto::Pki::Profile>())
	,server(std::make_shared<Native::Crypto::Pki::Server>())
	,token(std::make_shared<Native::Crypto::Pki::Token>())
	,trustpool(std::make_shared<Native::Crypto::Pki::Trustpool>())
{
    certificate->parent = this;
    crl->parent = this;
    default_->parent = this;
    profile->parent = this;
    server->parent = this;
    token->parent = this;
    trustpool->parent = this;

    yang_name = "pki"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::~Pki()
{
}

bool Native::Crypto::Pki::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| enroll.is_set
	|| (certificate !=  nullptr && certificate->has_data())
	|| (crl !=  nullptr && crl->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (token !=  nullptr && token->has_data())
	|| (trustpool !=  nullptr && trustpool->has_data());
}

bool Native::Crypto::Pki::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(enroll.yfilter)
	|| (certificate !=  nullptr && certificate->has_operation())
	|| (crl !=  nullptr && crl->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (token !=  nullptr && token->has_operation())
	|| (trustpool !=  nullptr && trustpool->has_operation());
}

std::string Native::Crypto::Pki::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (enroll.is_set || is_set(enroll.yfilter)) leaf_name_data.push_back(enroll.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        if(certificate == nullptr)
        {
            certificate = std::make_shared<Native::Crypto::Pki::Certificate>();
        }
        return certificate;
    }

    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Pki::Crl>();
        }
        return crl;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Crypto::Pki::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Pki::Server>();
        }
        return server;
    }

    if(child_yang_name == "token")
    {
        if(token == nullptr)
        {
            token = std::make_shared<Native::Crypto::Pki::Token>();
        }
        return token;
    }

    if(child_yang_name == "trustpoint")
    {
        for(auto const & c : trustpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Trustpoint>();
        c->parent = this;
        trustpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "trustpool")
    {
        if(trustpool == nullptr)
        {
            trustpool = std::make_shared<Native::Crypto::Pki::Trustpool>();
        }
        return trustpool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate != nullptr)
    {
        children["certificate"] = certificate;
    }

    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(token != nullptr)
    {
        children["token"] = token;
    }

    for (auto const & c : trustpoint)
    {
        children[c->get_segment_path()] = c;
    }

    if(trustpool != nullptr)
    {
        children["trustpool"] = trustpool;
    }

    return children;
}

void Native::Crypto::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enroll")
    {
        enroll = value;
        enroll.value_namespace = name_space;
        enroll.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "enroll")
    {
        enroll.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "crl" || name == "default" || name == "export" || name == "import" || name == "profile" || name == "server" || name == "token" || name == "trustpoint" || name == "trustpool" || name == "authenticate" || name == "enroll")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Certificate()
    :
    pool{YType::empty, "pool"},
    query{YType::empty, "query"},
    validate{YType::str, "validate"}
    	,
    storage(std::make_shared<Native::Crypto::Pki::Certificate::Storage>())
{
    storage->parent = this;

    yang_name = "certificate"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::~Certificate()
{
}

bool Native::Crypto::Pki::Certificate::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return pool.is_set
	|| query.is_set
	|| validate.is_set
	|| (storage !=  nullptr && storage->has_data());
}

bool Native::Crypto::Pki::Certificate::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(validate.yfilter)
	|| (storage !=  nullptr && storage->has_operation());
}

std::string Native::Crypto::Pki::Certificate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain")
    {
        for(auto const & c : chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    if(child_yang_name == "storage")
    {
        if(storage == nullptr)
        {
            storage = std::make_shared<Native::Crypto::Pki::Certificate::Storage>();
        }
        return storage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chain)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    if(storage != nullptr)
    {
        children["storage"] = storage;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain" || name == "map" || name == "storage" || name == "pool" || name == "query" || name == "validate")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Chain::Chain()
    :
    name{YType::str, "name"}
{

    yang_name = "chain"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Chain::~Chain()
{
}

bool Native::Crypto::Pki::Certificate::Chain::has_data() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Pki::Certificate::Chain::has_operation() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        for(auto const & c : certificate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain::Certificate_>();
        c->parent = this;
        certificate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : certificate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "name")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Ec::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export_::Rsa::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_256 {0, "256"};
const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_384 {1, "384"};

const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::MapIpv6Gdoi::Map::Gdoi::fail_close {0, "fail-close"};


}
}

