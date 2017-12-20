
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    path_buffer << "key-hash" <<"[key-type='" <<key_type <<"']" <<"[key-hash-value='" <<key_hash_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_hash_value.is_set || is_set(key_hash_value.yfilter)) leaf_name_data.push_back(key_hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Ssh::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,peruser(std::make_shared<Native::Ip::Ssh::Server::Peruser>())
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

std::shared_ptr<Entity> Native::Ip::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(peruser != nullptr)
    {
        children["peruser"] = peruser;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Peruser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Peruser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Peruser::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Peruser::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    path_buffer << "port" <<"[port-no='" <<port_no <<"']";
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

std::shared_ptr<Entity> Native::Ip::Ssh::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
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

    yang_name = "path-mtu-discovery"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tcp::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_data() const
{
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

std::shared_ptr<Entity> Native::Ip::Tcp::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,source_interface(std::make_shared<Native::Ip::Tftp::SourceInterface>())
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

std::shared_ptr<Entity> Native::Ip::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_interface != nullptr)
    {
        children["boot-interface"] = boot_interface;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
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
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
	,atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>())
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
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
	,atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>())
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
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    helper(std::make_shared<Native::Ip::AccessList::Helper>())
	,log_update(std::make_shared<Native::Ip::AccessList::LogUpdate>())
	,logging(std::make_shared<Native::Ip::AccessList::Logging>())
	,resequence(std::make_shared<Native::Ip::AccessList::Resequence>())
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
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended.size(); index++)
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
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended.size(); index++)
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

std::shared_ptr<Entity> Native::Ip::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-acl:standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:role-based")
    {
        for(auto const & c : role_based)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased>();
        c->parent = this;
        role_based.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:extended")
    {
        for(auto const & c : extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : role_based)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    if(helper != nullptr)
    {
        children["Cisco-IOS-XE-acl:helper"] = helper;
    }

    if(log_update != nullptr)
    {
        children["Cisco-IOS-XE-acl:log-update"] = log_update;
    }

    if(logging != nullptr)
    {
        children["Cisco-IOS-XE-acl:logging"] = logging;
    }

    if(resequence != nullptr)
    {
        children["Cisco-IOS-XE-acl:resequence"] = resequence;
    }

    return children;
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
    default_(std::make_shared<Native::Ip::AccessList::Standard::Default_>())
{
    default_->parent = this;

    yang_name = "standard"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Standard::~Standard()
{
}

bool Native::Ip::AccessList::Standard::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Standard::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
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
    path_buffer << "Cisco-IOS-XE-acl:standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Standard::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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
	,permit(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>())
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
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::AccessList::Standard::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Standard::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Standard::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    deny(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>())
	,permit(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_data() const
{
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_data() const
{
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::RoleBased()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::RoleBased::Default_>())
{
    default_->parent = this;

    yang_name = "role-based"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::RoleBased::~RoleBased()
{
}

bool Native::Ip::AccessList::RoleBased::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
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
    path_buffer << "Cisco-IOS-XE-acl:role-based" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
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
	,match_all(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_data() const
{
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
	|| (match_any !=  nullptr && match_any->has_data());
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
	|| (match_any !=  nullptr && match_any->has_operation());
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    return children;
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
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::AccessList::RoleBased::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::~Default_()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::RoleBased::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::RoleBased::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::RoleBased::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::AceRule()
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
    ttl(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>())
	,match_all(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_data() const
{
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
	|| (match_any !=  nullptr && match_any->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_operation() const
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
	|| (match_any !=  nullptr && match_any->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
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

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
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

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
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

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
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

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Extended()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::Extended::Default_>())
{
    default_->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Extended::~Extended()
{
}

bool Native::Ip::AccessList::Extended::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
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
    path_buffer << "Cisco-IOS-XE-acl:extended" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Extended::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
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
	,match_all(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>())
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::AccessList::Extended::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Extended::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Extended::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Extended::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Extended::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::AceRule()
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
    ttl(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>())
	,match_all(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_data() const
{
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_operation() const
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

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ipv4-address" || name == "mask" || name == "any" || name == "host" || name == "object-group" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dst-any" || name == "dst-host" || name == "dst-object-group" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
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

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
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

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
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

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
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

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<Entity> Native::Ip::AccessList::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::AccessList::Resequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Resequence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tracking != nullptr)
    {
        children["Cisco-IOS-XE-device-tracking:tracking"] = tracking;
    }

    return children;
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

    yang_name = "tracking"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::~Tracking()
{
}

bool Native::Ip::Device::Tracking::has_data() const
{
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

std::shared_ptr<Entity> Native::Ip::Device::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
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

    yang_name = "auto-source"; yang_parent_name = "probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::~AutoSource()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_data() const
{
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

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
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
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
	,atm_acrsubinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>())
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
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
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
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
	,atm_acrsubinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
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
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::CommunityList::CommunityList()
{

    yang_name = "community-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::~CommunityList()
{
}

bool Native::Ip::CommunityList::has_data() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::has_operation() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::CommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:community-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number-standard")
    {
        for(auto const & c : number_standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        for(auto const & c : number_expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "expanded")
    {
        for(auto const & c : expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : number_standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::CommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::CommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::CommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-standard" || name == "number-expanded" || name == "expanded" || name == "standard")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::CommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::CommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Expanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::CommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Standard::~Standard()
{
}

bool Native::Ip::CommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Standard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Standard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::ExtcommunityList()
{

    yang_name = "extcommunity-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::~ExtcommunityList()
{
}

bool Native::Ip::ExtcommunityList::has_data() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::has_operation() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:extcommunity-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number-standard")
    {
        for(auto const & c : number_standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        for(auto const & c : number_expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "expanded")
    {
        for(auto const & c : expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : number_standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-standard" || name == "number-expanded" || name == "expanded" || name == "standard")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::ExtcommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::Expanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::Expanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::Standard::~Standard()
{
}

bool Native::Ip::ExtcommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Http::Http()
    :
    access_class{YType::uint8, "access-class"},
    server{YType::boolean, "server"},
    secure_server{YType::boolean, "secure-server"},
    secure_trustpoint{YType::str, "secure-trustpoint"},
    secure_client_auth{YType::empty, "secure-client-auth"}
    	,
    authentication(std::make_shared<Native::Ip::Http::Authentication>())
	,timeout_policy(std::make_shared<Native::Ip::Http::TimeoutPolicy>())
	,client(std::make_shared<Native::Ip::Http::Client>())
{
    authentication->parent = this;
    timeout_policy->parent = this;
    client->parent = this;

    yang_name = "http"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::~Http()
{
}

bool Native::Ip::Http::has_data() const
{
    return access_class.is_set
	|| server.is_set
	|| secure_server.is_set
	|| secure_trustpoint.is_set
	|| secure_client_auth.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (timeout_policy !=  nullptr && timeout_policy->has_data())
	|| (client !=  nullptr && client->has_data());
}

bool Native::Ip::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(secure_server.yfilter)
	|| ydk::is_set(secure_trustpoint.yfilter)
	|| ydk::is_set(secure_client_auth.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (timeout_policy !=  nullptr && timeout_policy->has_operation())
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Ip::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-http:http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class.is_set || is_set(access_class.yfilter)) leaf_name_data.push_back(access_class.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (secure_server.is_set || is_set(secure_server.yfilter)) leaf_name_data.push_back(secure_server.get_name_leafdata());
    if (secure_trustpoint.is_set || is_set(secure_trustpoint.yfilter)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (secure_client_auth.is_set || is_set(secure_client_auth.yfilter)) leaf_name_data.push_back(secure_client_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Http::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "timeout-policy")
    {
        if(timeout_policy == nullptr)
        {
            timeout_policy = std::make_shared<Native::Ip::Http::TimeoutPolicy>();
        }
        return timeout_policy;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Http::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(timeout_policy != nullptr)
    {
        children["timeout-policy"] = timeout_policy;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Ip::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class")
    {
        access_class = value;
        access_class.value_namespace = name_space;
        access_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-server")
    {
        secure_server = value;
        secure_server.value_namespace = name_space;
        secure_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
        secure_trustpoint.value_namespace = name_space;
        secure_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth = value;
        secure_client_auth.value_namespace = name_space;
        secure_client_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class")
    {
        access_class.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "secure-server")
    {
        secure_server.yfilter = yfilter;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint.yfilter = yfilter;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth.yfilter = yfilter;
    }
}

bool Native::Ip::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "timeout-policy" || name == "client" || name == "access-class" || name == "server" || name == "secure-server" || name == "secure-trustpoint" || name == "secure-client-auth")
        return true;
    return false;
}

Native::Ip::Http::Authentication::Authentication()
    :
    aaa{YType::empty, "aaa"},
    local{YType::empty, "local"}
{

    yang_name = "authentication"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Authentication::~Authentication()
{
}

bool Native::Ip::Http::Authentication::has_data() const
{
    return aaa.is_set
	|| local.is_set;
}

bool Native::Ip::Http::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Ip::Http::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa.is_set || is_set(aaa.yfilter)) leaf_name_data.push_back(aaa.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa")
    {
        aaa = value;
        aaa.value_namespace = name_space;
        aaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa")
    {
        aaa.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "local")
        return true;
    return false;
}

Native::Ip::Http::TimeoutPolicy::TimeoutPolicy()
    :
    idle{YType::uint16, "idle"},
    life{YType::uint32, "life"},
    requests{YType::uint32, "requests"}
{

    yang_name = "timeout-policy"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::TimeoutPolicy::~TimeoutPolicy()
{
}

bool Native::Ip::Http::TimeoutPolicy::has_data() const
{
    return idle.is_set
	|| life.is_set
	|| requests.is_set;
}

bool Native::Ip::Http::TimeoutPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Ip::Http::TimeoutPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::TimeoutPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::TimeoutPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::TimeoutPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::TimeoutPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::TimeoutPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::TimeoutPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Ip::Http::TimeoutPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle" || name == "life" || name == "requests")
        return true;
    return false;
}

Native::Ip::Http::Client::Client()
    :
    secure_trustpoint{YType::str, "secure-trustpoint"},
    source_interface{YType::str, "source-interface"}
    	,
    proxy_server(std::make_shared<Native::Ip::Http::Client::ProxyServer>())
{
    proxy_server->parent = this;

    yang_name = "client"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Client::~Client()
{
}

bool Native::Ip::Http::Client::has_data() const
{
    return secure_trustpoint.is_set
	|| source_interface.is_set
	|| (proxy_server !=  nullptr && proxy_server->has_data());
}

bool Native::Ip::Http::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secure_trustpoint.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (proxy_server !=  nullptr && proxy_server->has_operation());
}

std::string Native::Ip::Http::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secure_trustpoint.is_set || is_set(secure_trustpoint.yfilter)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-server")
    {
        if(proxy_server == nullptr)
        {
            proxy_server = std::make_shared<Native::Ip::Http::Client::ProxyServer>();
        }
        return proxy_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy_server != nullptr)
    {
        children["proxy-server"] = proxy_server;
    }

    return children;
}

void Native::Ip::Http::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
        secure_trustpoint.value_namespace = name_space;
        secure_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server" || name == "secure-trustpoint" || name == "source-interface")
        return true;
    return false;
}

Native::Ip::Http::Client::ProxyServer::ProxyServer()
    :
    proxy_server_name{YType::str, "proxy-server-name"},
    proxy_port{YType::uint16, "proxy-port"}
{

    yang_name = "proxy-server"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Client::ProxyServer::~ProxyServer()
{
}

bool Native::Ip::Http::Client::ProxyServer::has_data() const
{
    return proxy_server_name.is_set
	|| proxy_port.is_set;
}

bool Native::Ip::Http::Client::ProxyServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_server_name.yfilter)
	|| ydk::is_set(proxy_port.yfilter);
}

std::string Native::Ip::Http::Client::ProxyServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Client::ProxyServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Client::ProxyServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_server_name.is_set || is_set(proxy_server_name.yfilter)) leaf_name_data.push_back(proxy_server_name.get_name_leafdata());
    if (proxy_port.is_set || is_set(proxy_port.yfilter)) leaf_name_data.push_back(proxy_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::ProxyServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::ProxyServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::Client::ProxyServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-server-name")
    {
        proxy_server_name = value;
        proxy_server_name.value_namespace = name_space;
        proxy_server_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-port")
    {
        proxy_port = value;
        proxy_port.value_namespace = name_space;
        proxy_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Client::ProxyServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-server-name")
    {
        proxy_server_name.yfilter = yfilter;
    }
    if(value_path == "proxy-port")
    {
        proxy_port.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Client::ProxyServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server-name" || name == "proxy-port")
        return true;
    return false;
}

Native::Ip::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Ip::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::~Icmp()
{
}

bool Native::Ip::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Ip::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Ip::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-icmp:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Ip::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::RateLimit()
    :
    redirect{YType::enumeration, "redirect"}
    	,
    unreachable(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Ip::Icmp::RateLimit::has_data() const
{
    return redirect.is_set
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Ip::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "redirect")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Unreachable()
    :
    time{YType::uint32, "time"}
    	,
    df(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>())
	,log(nullptr) // presence node
{
    df->parent = this;

    yang_name = "unreachable"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::~Unreachable()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_data() const
{
    return time.is_set
	|| (df !=  nullptr && df->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| (df !=  nullptr && df->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DF")
    {
        if(df == nullptr)
        {
            df = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>();
        }
        return df;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(df != nullptr)
    {
        children["DF"] = df;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DF" || name == "log" || name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::DF()
    :
    time{YType::uint32, "time"}
{

    yang_name = "DF"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::~DF()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_data() const
{
    return time.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DF";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::DF::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::Log()
    :
    number_unreachables{YType::uint32, "number-unreachables"},
    log_message{YType::uint32, "log-message"}
{

    yang_name = "log"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::~Log()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_data() const
{
    return number_unreachables.is_set
	|| log_message.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_unreachables.yfilter)
	|| ydk::is_set(log_message.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_unreachables.is_set || is_set(number_unreachables.yfilter)) leaf_name_data.push_back(number_unreachables.get_name_leafdata());
    if (log_message.is_set || is_set(log_message.yfilter)) leaf_name_data.push_back(log_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables = value;
        number_unreachables.value_namespace = name_space;
        number_unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-message")
    {
        log_message = value;
        log_message.value_namespace = name_space;
        log_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables.yfilter = yfilter;
    }
    if(value_path == "log-message")
    {
        log_message.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-unreachables" || name == "log-message")
        return true;
    return false;
}

Native::Ip::Igmp::Igmp()
    :
    snooping_conf(std::make_shared<Native::Ip::Igmp::SnoopingConf>())
	,snooping(std::make_shared<Native::Ip::Igmp::Snooping>())
	,ssm_map(std::make_shared<Native::Ip::Igmp::SsmMap>())
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
    for (std::size_t index=0; index<vrf.size(); index++)
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
    for (std::size_t index=0; index<vrf.size(); index++)
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

std::shared_ptr<Entity> Native::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Igmp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping_conf != nullptr)
    {
        children["snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,explicit_tracking(std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>())
	,querier(nullptr) // presence node
	,tcn(std::make_shared<Native::Ip::Igmp::Snooping::Tcn>())
{
    check->parent = this;
    explicit_tracking->parent = this;
    tcn->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::Ip::Igmp::Snooping::has_data() const
{
    return l2_entry_limit.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (tcn !=  nullptr && tcn->has_data());
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
	|| (tcn !=  nullptr && tcn->has_operation());
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    return children;
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
    if(name == "check" || name == "explicit-tracking" || name == "querier" || name == "tcn" || name == "l2-entry-limit" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable")
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,timer(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Querier::has_data() const
{
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
	,query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>())
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flood != nullptr)
    {
        children["flood"] = flood;
    }

    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
	,static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static_>())
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

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ip::Igmp::SsmMap::Static_::Static_()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::SsmMap::Static_::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SsmMap::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Igmp::SsmMap::Static_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Igmp::SsmMap::Static_::has_leaf_or_child_of_name(const std::string & name) const
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
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
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
{

    yang_name = "ssm-map"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
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

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static_>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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

Native::Ip::Igmp::Vrf::SsmMap::Static_::Static_()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Vrf::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_data() const
{
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[srcaddress='" <<srcaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Igmp::Vrf::SsmMap::Static_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcaddress" || name == "aclname")
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

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

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

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::host {0, "host"};
const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::subnet {1, "subnet"};


}
}

