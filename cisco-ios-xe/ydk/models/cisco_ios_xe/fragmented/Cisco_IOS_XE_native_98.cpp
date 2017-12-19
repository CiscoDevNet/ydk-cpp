
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_98.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Ikev2::DpdContainer::DpdContainer()
    :
    dpd{YType::uint16, "dpd"},
    retry_interval{YType::uint8, "retry-interval"},
    dpd_query{YType::enumeration, "dpd-query"}
{

    yang_name = "dpd-container"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::DpdContainer::~DpdContainer()
{
}

bool Native::Crypto::Ikev2::DpdContainer::has_data() const
{
    return dpd.is_set
	|| retry_interval.is_set
	|| dpd_query.is_set;
}

bool Native::Crypto::Ikev2::DpdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dpd.yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| ydk::is_set(dpd_query.yfilter);
}

std::string Native::Crypto::Ikev2::DpdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::DpdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::DpdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dpd.is_set || is_set(dpd.yfilter)) leaf_name_data.push_back(dpd.get_name_leafdata());
    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());
    if (dpd_query.is_set || is_set(dpd_query.yfilter)) leaf_name_data.push_back(dpd_query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::DpdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::DpdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::DpdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dpd")
    {
        dpd = value;
        dpd.value_namespace = name_space;
        dpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpd-query")
    {
        dpd_query = value;
        dpd_query.value_namespace = name_space;
        dpd_query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::DpdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dpd")
    {
        dpd.yfilter = yfilter;
    }
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
    if(value_path == "dpd-query")
    {
        dpd_query.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::DpdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpd" || name == "retry-interval" || name == "dpd-query")
        return true;
    return false;
}

Native::Crypto::Ikev2::Fragmentation::Fragmentation()
    :
    mtu{YType::uint16, "mtu"}
{

    yang_name = "fragmentation"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Fragmentation::~Fragmentation()
{
}

bool Native::Crypto::Ikev2::Fragmentation::has_data() const
{
    return mtu.is_set;
}

bool Native::Crypto::Ikev2::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Crypto::Ikev2::Fragmentation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Crypto::Ikev2::HttpUrl::HttpUrl()
    :
    cert{YType::empty, "cert"}
{

    yang_name = "http-url"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::HttpUrl::~HttpUrl()
{
}

bool Native::Crypto::Ikev2::HttpUrl::has_data() const
{
    return cert.is_set;
}

bool Native::Crypto::Ikev2::HttpUrl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cert.yfilter);
}

std::string Native::Crypto::Ikev2::HttpUrl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::HttpUrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::HttpUrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::HttpUrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::HttpUrl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::HttpUrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::HttpUrl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::HttpUrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cert")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Keyring()
    :
    name{YType::str, "name"}
{

    yang_name = "keyring"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Keyring::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Ikev2::Keyring::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Peer()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    hostname{YType::str, "hostname"}
    	,
    address(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>())
	,pre_shared_key(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>())
{
    address->parent = this;
    identity->parent = this;
    pre_shared_key->parent = this;

    yang_name = "peer"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_data() const
{
    return name.is_set
	|| description.is_set
	|| hostname.is_set
	|| (address !=  nullptr && address->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>();
        }
        return address;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity" || name == "pre-shared-key" || name == "name" || name == "description" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Address()
    :
    ipv6_prefix{YType::str, "ipv6-prefix"}
    	,
    ipv4(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_data() const
{
    return ipv6_prefix.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Identity()
    :
    address{YType::str, "address"},
    key_id{YType::str, "key-id"}
    	,
    email(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>())
	,fqdn(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>())
{
    email->parent = this;
    fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_data() const
{
    return address.is_set
	|| key_id.is_set
	|| (email !=  nullptr && email->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| (email !=  nullptr && email->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "email")
    {
        if(email == nullptr)
        {
            email = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>();
        }
        return email;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(email != nullptr)
    {
        children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        children["fqdn"] = fqdn;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email" || name == "fqdn" || name == "address" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::Email()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "email"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_data() const
{
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::Fqdn()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_data() const
{
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::PreSharedKey()
    :
    local{YType::empty, "local"},
    remote{YType::empty, "remote"},
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"},
    hex{YType::str, "hex"}
{

    yang_name = "pre-shared-key"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_data() const
{
    return local.is_set
	|| remote.is_set
	|| encryption.is_set
	|| key.is_set
	|| hex.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(hex.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (hex.is_set || is_set(hex.yfilter)) leaf_name_data.push_back(hex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hex")
    {
        hex = value;
        hex.value_namespace = name_space;
        hex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "hex")
    {
        hex.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "encryption" || name == "key" || name == "hex")
        return true;
    return false;
}

Native::Crypto::Ikev2::Limit::Limit()
    :
    max_sa{YType::uint32, "max-sa"}
    	,
    max_neg_sa(std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>())
{
    max_neg_sa->parent = this;

    yang_name = "limit"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Limit::~Limit()
{
}

bool Native::Crypto::Ikev2::Limit::has_data() const
{
    return max_sa.is_set
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_data());
}

bool Native::Crypto::Ikev2::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_operation());
}

std::string Native::Crypto::Ikev2::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-neg-sa")
    {
        if(max_neg_sa == nullptr)
        {
            max_neg_sa = std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>();
        }
        return max_neg_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_neg_sa != nullptr)
    {
        children["max-neg-sa"] = max_neg_sa;
    }

    return children;
}

void Native::Crypto::Ikev2::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-neg-sa" || name == "max-sa")
        return true;
    return false;
}

Native::Crypto::Ikev2::Limit::MaxNegSa::MaxNegSa()
    :
    max_in_negotation_sa{YType::uint32, "max-in-negotation-sa"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "max-neg-sa"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Limit::MaxNegSa::~MaxNegSa()
{
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_data() const
{
    return max_in_negotation_sa.is_set
	|| direction.is_set;
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_in_negotation_sa.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Crypto::Ikev2::Limit::MaxNegSa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Limit::MaxNegSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-neg-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Limit::MaxNegSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_in_negotation_sa.is_set || is_set(max_in_negotation_sa.yfilter)) leaf_name_data.push_back(max_in_negotation_sa.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Limit::MaxNegSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Limit::MaxNegSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Limit::MaxNegSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-in-negotation-sa")
    {
        max_in_negotation_sa = value;
        max_in_negotation_sa.value_namespace = name_space;
        max_in_negotation_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Limit::MaxNegSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-in-negotation-sa")
    {
        max_in_negotation_sa.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-in-negotation-sa" || name == "direction")
        return true;
    return false;
}

Native::Crypto::Ikev2::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Nat::has_data() const
{
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Ikev2::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Policy()
    :
    name{YType::str, "name"},
    proposal{YType::str, "proposal"}
    	,
    match(std::make_shared<Native::Crypto::Ikev2::Policy::Match>())
{
    match->parent = this;

    yang_name = "policy"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Policy::has_data() const
{
    return name.is_set
	|| proposal.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::Ikev2::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(proposal.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal.is_set || is_set(proposal.yfilter)) leaf_name_data.push_back(proposal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Policy::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::Ikev2::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal")
    {
        proposal = value;
        proposal.value_namespace = name_space;
        proposal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "proposal")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>())
	,fvrf(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>())
{
    address->parent = this;
    fvrf->parent = this;

    yang_name = "match"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Policy::Match::~Match()
{
}

bool Native::Crypto::Ikev2::Policy::Match::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (fvrf !=  nullptr && fvrf->has_data());
}

bool Native::Crypto::Ikev2::Policy::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fvrf !=  nullptr && fvrf->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>();
        }
        return address;
    }

    if(child_yang_name == "fvrf")
    {
        if(fvrf == nullptr)
        {
            fvrf = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>();
        }
        return fvrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        children["fvrf"] = fvrf;
    }

    return children;
}

void Native::Crypto::Ikev2::Policy::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Policy::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Policy::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fvrf")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Address::Address()
    :
    local{YType::str, "local"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Policy::Match::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_data() const
{
    return local.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Ikev2::Policy::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Policy::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::Fvrf()
    :
    name{YType::str, "name"},
    any{YType::empty, "any"}
{

    yang_name = "fvrf"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_data() const
{
    return name.is_set
	|| any.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::Crypto::Ikev2::Policy::Match::Fvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fvrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::Fvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Policy::Match::Fvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::Match::Fvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "any")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    ivrf{YType::str, "ivrf"},
    shutdown{YType::empty, "shutdown"}
    	,
    aaa(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>())
	,authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>())
	,config_exchange(std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>())
	,dpd(std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Profile::Identity>())
	,initial_contact(std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>())
	,keyring(std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>())
	,lifetime(std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>())
	,match(std::make_shared<Native::Crypto::Ikev2::Profile::Match>())
	,nat(std::make_shared<Native::Crypto::Ikev2::Profile::Nat>())
	,pki(std::make_shared<Native::Crypto::Ikev2::Profile::Pki>())
	,reconnect(nullptr) // presence node
	,redirect(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>())
	,virtual_template(std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>())
{
    aaa->parent = this;
    authentication->parent = this;
    config_exchange->parent = this;
    dpd->parent = this;
    identity->parent = this;
    initial_contact->parent = this;
    keyring->parent = this;
    lifetime->parent = this;
    match->parent = this;
    nat->parent = this;
    pki->parent = this;
    redirect->parent = this;
    virtual_template->parent = this;

    yang_name = "profile"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Profile::~Profile()
{
}

bool Native::Crypto::Ikev2::Profile::has_data() const
{
    return name.is_set
	|| description.is_set
	|| ivrf.is_set
	|| shutdown.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (config_exchange !=  nullptr && config_exchange->has_data())
	|| (dpd !=  nullptr && dpd->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (initial_contact !=  nullptr && initial_contact->has_data())
	|| (keyring !=  nullptr && keyring->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (virtual_template !=  nullptr && virtual_template->has_data());
}

bool Native::Crypto::Ikev2::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ivrf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (config_exchange !=  nullptr && config_exchange->has_operation())
	|| (dpd !=  nullptr && dpd->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (initial_contact !=  nullptr && initial_contact->has_operation())
	|| (keyring !=  nullptr && keyring->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (virtual_template !=  nullptr && virtual_template->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ivrf.is_set || is_set(ivrf.yfilter)) leaf_name_data.push_back(ivrf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "config-exchange")
    {
        if(config_exchange == nullptr)
        {
            config_exchange = std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>();
        }
        return config_exchange;
    }

    if(child_yang_name == "dpd")
    {
        if(dpd == nullptr)
        {
            dpd = std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>();
        }
        return dpd;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Profile::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "initial-contact")
    {
        if(initial_contact == nullptr)
        {
            initial_contact = std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>();
        }
        return initial_contact;
    }

    if(child_yang_name == "keyring")
    {
        if(keyring == nullptr)
        {
            keyring = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>();
        }
        return keyring;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Profile::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Ikev2::Profile::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Profile::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "virtual-template")
    {
        if(virtual_template == nullptr)
        {
            virtual_template = std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>();
        }
        return virtual_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(config_exchange != nullptr)
    {
        children["config-exchange"] = config_exchange;
    }

    if(dpd != nullptr)
    {
        children["dpd"] = dpd;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(initial_contact != nullptr)
    {
        children["initial-contact"] = initial_contact;
    }

    if(keyring != nullptr)
    {
        children["keyring"] = keyring;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    if(reconnect != nullptr)
    {
        children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(virtual_template != nullptr)
    {
        children["virtual-template"] = virtual_template;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ivrf")
    {
        ivrf = value;
        ivrf.value_namespace = name_space;
        ivrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ivrf")
    {
        ivrf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "authentication" || name == "config-exchange" || name == "dpd" || name == "identity" || name == "initial-contact" || name == "keyring" || name == "lifetime" || name == "match" || name == "nat" || name == "pki" || name == "reconnect" || name == "redirect" || name == "virtual-template" || name == "name" || name == "description" || name == "ivrf" || name == "shutdown")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Aaa()
    :
    accounting(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>())
	,authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>())
	,authorization(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>())
{
    accounting->parent = this;
    authentication->parent = this;
    authorization->parent = this;

    yang_name = "aaa"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::get_children() const
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

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "authorization")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::Accounting()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    cert{YType::str, "cert"},
    eap{YType::str, "eap"},
    psk{YType::str, "psk"}
{

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::~Accounting()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_data() const
{
    return anyconnect_eap.is_set
	|| cert.is_set
	|| eap.is_set
	|| psk.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anyconnect_eap.yfilter)
	|| ydk::is_set(cert.yfilter)
	|| ydk::is_set(eap.yfilter)
	|| ydk::is_set(psk.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.yfilter)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());
    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());
    if (psk.is_set || is_set(psk.yfilter)) leaf_name_data.push_back(psk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
        anyconnect_eap.value_namespace = name_space;
        anyconnect_eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psk")
    {
        psk = value;
        psk.value_namespace = name_space;
        psk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap.yfilter = yfilter;
    }
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
    if(value_path == "psk")
    {
        psk.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::Authentication()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    eap{YType::str, "eap"}
{

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_data() const
{
    return anyconnect_eap.is_set
	|| eap.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anyconnect_eap.yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.yfilter)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
        anyconnect_eap.value_namespace = name_space;
        anyconnect_eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap.yfilter = yfilter;
    }
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "eap")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Authorization()
    :
    group(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>())
	,user(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>())
{
    group->parent = this;
    user->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_data() const
{
    return (group !=  nullptr && group->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>();
        }
        return group;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "user")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Group()
    :
    override{YType::empty, "override"}
    	,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>())
	,cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>())
	,eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>())
	,psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>())
{
    anyconnect_eap->parent = this;
    cert->parent = this;
    eap->parent = this;
    psk->parent = this;

    yang_name = "group"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_data() const
{
    return override.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk" || name == "override")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::AnyconnectEap()
{

    yang_name = "anyconnect-eap"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::Cert()
{

    yang_name = "cert"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::Eap()
{

    yang_name = "eap"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::Psk()
{

    yang_name = "psk"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::User()
    :
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>())
	,cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>())
	,eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>())
	,psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>())
{
    anyconnect_eap->parent = this;
    cert->parent = this;
    eap->parent = this;
    psk->parent = this;

    yang_name = "user"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::~User()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_data() const
{
    return (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_operation() const
{
    return is_set(yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::AnyconnectEap()
    :
    cached{YType::empty, "cached"}
{

    yang_name = "anyconnect-eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::Cert()
{

    yang_name = "cert"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::Eap()
    :
    cached{YType::empty, "cached"}
{

    yang_name = "eap"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::Psk()
    :
    cached{YType::empty, "cached"}
{

    yang_name = "psk"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cached")
    {
        cached.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "cached")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::List()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_data() const
{
    return name.is_set
	|| username.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "username" || name == "local" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Authentication()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>())
	,remote(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "authentication"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Local()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
    	,
    eap(nullptr) // presence node
	,pre_share(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_data() const
{
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecdsa_sig.yfilter)
	|| ydk::is_set(rsa_sig.yfilter)
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.yfilter)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.yfilter)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
        ecdsa_sig.value_namespace = name_space;
        ecdsa_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
        rsa_sig.value_namespace = name_space;
        rsa_sig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig.yfilter = yfilter;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap" || name == "pre-share" || name == "ecdsa-sig" || name == "rsa-sig")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Eap()
    :
    gtc(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>())
	,md5(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>())
	,mschapv2(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>())
{
    gtc->parent = this;
    md5->parent = this;
    mschapv2->parent = this;

    yang_name = "eap"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_data() const
{
    return (gtc !=  nullptr && gtc->has_data())
	|| (md5 !=  nullptr && md5->has_data())
	|| (mschapv2 !=  nullptr && mschapv2->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_operation() const
{
    return is_set(yfilter)
	|| (gtc !=  nullptr && gtc->has_operation())
	|| (md5 !=  nullptr && md5->has_operation())
	|| (mschapv2 !=  nullptr && mschapv2->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtc")
    {
        if(gtc == nullptr)
        {
            gtc = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>();
        }
        return gtc;
    }

    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "mschapv2")
    {
        if(mschapv2 == nullptr)
        {
            mschapv2 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>();
        }
        return mschapv2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtc != nullptr)
    {
        children["gtc"] = gtc;
    }

    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(mschapv2 != nullptr)
    {
        children["mschapv2"] = mschapv2;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtc" || name == "md5" || name == "mschapv2")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Gtc()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>())
{
    password->parent = this;

    yang_name = "gtc"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::~Gtc()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "gtc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Md5()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>())
{
    password->parent = this;

    yang_name = "md5"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::~Md5()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Mschapv2()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>())
{
    password->parent = this;

    yang_name = "mschapv2"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::~Mschapv2()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mschapv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "mschapv2"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pre-share"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Remote()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
    	,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>())
	,eap(nullptr) // presence node
	,pre_share(nullptr) // presence node
{
    anyconnect_eap->parent = this;

    yang_name = "remote"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_data() const
{
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecdsa_sig.yfilter)
	|| ydk::is_set(rsa_sig.yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.yfilter)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.yfilter)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
        ecdsa_sig.value_namespace = name_space;
        ecdsa_sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
        rsa_sig.value_namespace = name_space;
        rsa_sig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig.yfilter = yfilter;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "eap" || name == "pre-share" || name == "ecdsa-sig" || name == "rsa-sig")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::AnyconnectEap()
    :
    aggregate(nullptr) // presence node
{

    yang_name = "anyconnect-eap"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate>();
        }
        return aggregate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::Aggregate()
    :
    cert_request{YType::empty, "cert-request"}
{

    yang_name = "aggregate"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::~Aggregate()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_data() const
{
    return cert_request.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cert_request.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert_request.is_set || is_set(cert_request.yfilter)) leaf_name_data.push_back(cert_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cert-request")
    {
        cert_request = value;
        cert_request.value_namespace = name_space;
        cert_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cert-request")
    {
        cert_request.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cert-request")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::Eap()
    :
    query_identity{YType::empty, "query-identity"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "eap"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_data() const
{
    return query_identity.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_identity.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_identity.is_set || is_set(query_identity.yfilter)) leaf_name_data.push_back(query_identity.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-identity")
    {
        query_identity = value;
        query_identity.value_namespace = name_space;
        query_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-identity")
    {
        query_identity.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-identity" || name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pre-share"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::ConfigExchange::ConfigExchange()
    :
    request{YType::empty, "request"},
    set{YType::enumeration, "set"}
{

    yang_name = "config-exchange"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::ConfigExchange::~ConfigExchange()
{
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_data() const
{
    return request.is_set
	|| set.is_set;
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(set.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::ConfigExchange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-exchange";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::ConfigExchange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (set.is_set || is_set(set.yfilter)) leaf_name_data.push_back(set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::ConfigExchange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::ConfigExchange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::ConfigExchange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set")
    {
        set = value;
        set.value_namespace = name_space;
        set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::ConfigExchange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "set")
    {
        set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::ConfigExchange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "set")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Dpd::Dpd()
    :
    interval{YType::uint16, "interval"},
    retry{YType::uint8, "retry"},
    query{YType::enumeration, "query"}
{

    yang_name = "dpd"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Dpd::~Dpd()
{
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_data() const
{
    return interval.is_set
	|| retry.is_set
	|| query.is_set;
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(query.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Dpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Dpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Dpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Dpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Dpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Dpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Dpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "retry" || name == "query")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Identity::Identity()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Identity::Local>())
{
    local->parent = this;

    yang_name = "identity"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Profile::Identity::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Ikev2::Profile::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Identity::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Identity::Local::Local()
    :
    address{YType::str, "address"},
    dn{YType::empty, "dn"},
    email{YType::str, "email"},
    fqdn{YType::str, "fqdn"},
    key_id{YType::str, "key-id"}
{

    yang_name = "local"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Identity::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_data() const
{
    return address.is_set
	|| dn.is_set
	|| email.is_set
	|| fqdn.is_set
	|| key_id.is_set;
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(key_id.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Identity::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Identity::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Identity::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Identity::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Identity::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Identity::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Identity::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "dn" || name == "email" || name == "fqdn" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::InitialContact::InitialContact()
    :
    force{YType::empty, "force"}
{

    yang_name = "initial-contact"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::InitialContact::~InitialContact()
{
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_data() const
{
    return force.is_set;
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::InitialContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial-contact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::InitialContact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::InitialContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::InitialContact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::InitialContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::InitialContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::InitialContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Keyring()
    :
    local{YType::str, "local"}
{

    yang_name = "keyring"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_data() const
{
    for (std::size_t index=0; index<aaa.size(); index++)
    {
        if(aaa[index]->has_data())
            return true;
    }
    return local.is_set;
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_operation() const
{
    for (std::size_t index=0; index<aaa.size(); index++)
    {
        if(aaa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        for(auto const & c : aaa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa>();
        c->parent = this;
        aaa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aaa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Aaa()
    :
    name{YType::str, "name"},
    name_mangler{YType::str, "name-mangler"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password>())
{
    password->parent = this;

    yang_name = "aaa"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_data() const
{
    return name.is_set
	|| name_mangler.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_mangler.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.yfilter)) leaf_name_data.push_back(name_mangler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
        name_mangler.value_namespace = name_space;
        name_mangler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "name-mangler")
    {
        name_mangler.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "name" || name == "name-mangler")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Lifetime::Lifetime()
    :
    seconds{YType::uint32, "seconds"},
    certificate{YType::empty, "certificate"}
{

    yang_name = "lifetime"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_data() const
{
    return seconds.is_set
	|| certificate.is_set;
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(certificate.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Match()
    :
    certificate{YType::str, "certificate"}
    	,
    address(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address>())
	,fvrf(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Fvrf>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity>())
{
    address->parent = this;
    fvrf->parent = this;
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::~Match()
{
}

bool Native::Crypto::Ikev2::Profile::Match::has_data() const
{
    return certificate.is_set
	|| (address !=  nullptr && address->has_data())
	|| (fvrf !=  nullptr && fvrf->has_data())
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fvrf !=  nullptr && fvrf->has_operation())
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address>();
        }
        return address;
    }

    if(child_yang_name == "fvrf")
    {
        if(fvrf == nullptr)
        {
            fvrf = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Fvrf>();
        }
        return fvrf;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        children["fvrf"] = fvrf;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fvrf" || name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Address::Address()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address::Local>())
{
    local->parent = this;

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Address::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Address::Local::Local()
    :
    ip{YType::str, "ip"},
    interface{YType::str, "interface"}
{

    yang_name = "local"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Address::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_data() const
{
    return ip.is_set
	|| interface.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Address::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Address::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Address::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Address::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Address::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::Fvrf()
    :
    name{YType::str, "name"},
    any{YType::empty, "any"}
{

    yang_name = "fvrf"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_data() const
{
    return name.is_set
	|| any.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Fvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fvrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Fvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Fvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Fvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "any")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Identity()
    :
    remote(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote>())
{
    remote->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_data() const
{
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Remote()
    :
    any{YType::empty, "any"},
    key_id{YType::str, "key-id"}
    	,
    address(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address>())
	,email(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email>())
	,fqdn(std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn>())
{
    address->parent = this;
    email->parent = this;
    fqdn->parent = this;

    yang_name = "remote"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_data() const
{
    return any.is_set
	|| key_id.is_set
	|| (address !=  nullptr && address->has_data())
	|| (email !=  nullptr && email->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (email !=  nullptr && email->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address>();
        }
        return address;
    }

    if(child_yang_name == "email")
    {
        if(email == nullptr)
        {
            email = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email>();
        }
        return email;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(email != nullptr)
    {
        children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        children["fqdn"] = fqdn;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "email" || name == "fqdn" || name == "any" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Address()
    :
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (auto const & leaf : ipv6_prefix.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ipv6_prefix.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_prefix_name_datas = ipv6_prefix.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefix_name_datas.begin(), ipv6_prefix_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.append(value);
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::Email()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "email"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_data() const
{
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::Fqdn()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "fqdn"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_data() const
{
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Profile::Nat::has_data() const
{
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Profile::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Pki::Pki()
    :
    trustpoint{YType::str, "trustpoint"},
    use{YType::enumeration, "use"}
{

    yang_name = "pki"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Pki::~Pki()
{
}

bool Native::Crypto::Ikev2::Profile::Pki::has_data() const
{
    return trustpoint.is_set
	|| use.is_set;
}

bool Native::Crypto::Ikev2::Profile::Pki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint" || name == "use")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Reconnect::Reconnect()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "reconnect"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Reconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Redirect()
    :
    gateway(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>())
{
    gateway->parent = this;

    yang_name = "redirect"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_data() const
{
    return (gateway !=  nullptr && gateway->has_data());
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>();
        }
        return gateway;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::Gateway()
    :
    auth{YType::empty, "auth"}
{

    yang_name = "gateway"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::~Gateway()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_data() const
{
    return auth.is_set;
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::VirtualTemplate()
    :
    number{YType::uint16, "number"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "virtual-template"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::~VirtualTemplate()
{
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_data() const
{
    return number.is_set
	|| mode.is_set;
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::VirtualTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::VirtualTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mode")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Proposal()
    :
    name{YType::str, "name"}
    	,
    encryption(std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>())
	,group(std::make_shared<Native::Crypto::Ikev2::Proposal::Group>())
	,integrity(std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>())
	,prf(std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>())
{
    encryption->parent = this;
    group->parent = this;
    integrity->parent = this;
    prf->parent = this;

    yang_name = "proposal"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Proposal::~Proposal()
{
}

bool Native::Crypto::Ikev2::Proposal::has_data() const
{
    return name.is_set
	|| (encryption !=  nullptr && encryption->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (integrity !=  nullptr && integrity->has_data())
	|| (prf !=  nullptr && prf->has_data());
}

bool Native::Crypto::Ikev2::Proposal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (integrity !=  nullptr && integrity->has_operation())
	|| (prf !=  nullptr && prf->has_operation());
}

std::string Native::Crypto::Ikev2::Proposal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Proposal::Group>();
        }
        return group;
    }

    if(child_yang_name == "integrity")
    {
        if(integrity == nullptr)
        {
            integrity = std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>();
        }
        return integrity;
    }

    if(child_yang_name == "prf")
    {
        if(prf == nullptr)
        {
            prf = std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>();
        }
        return prf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(integrity != nullptr)
    {
        children["integrity"] = integrity;
    }

    if(prf != nullptr)
    {
        children["prf"] = prf;
    }

    return children;
}

void Native::Crypto::Ikev2::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "group" || name == "integrity" || name == "prf" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Encryption::Encryption()
    :
    en_3des{YType::empty, "en-3des"},
    aes_cbc_128{YType::empty, "aes-cbc-128"},
    aes_cbc_192{YType::empty, "aes-cbc-192"},
    aes_cbc_256{YType::empty, "aes-cbc-256"},
    aes_gcm_128{YType::empty, "aes-gcm-128"},
    aes_gcm_256{YType::empty, "aes-gcm-256"},
    des{YType::empty, "des"}
{

    yang_name = "encryption"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Encryption::~Encryption()
{
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_data() const
{
    return en_3des.is_set
	|| aes_cbc_128.is_set
	|| aes_cbc_192.is_set
	|| aes_cbc_256.is_set
	|| aes_gcm_128.is_set
	|| aes_gcm_256.is_set
	|| des.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(en_3des.yfilter)
	|| ydk::is_set(aes_cbc_128.yfilter)
	|| ydk::is_set(aes_cbc_192.yfilter)
	|| ydk::is_set(aes_cbc_256.yfilter)
	|| ydk::is_set(aes_gcm_128.yfilter)
	|| ydk::is_set(aes_gcm_256.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (en_3des.is_set || is_set(en_3des.yfilter)) leaf_name_data.push_back(en_3des.get_name_leafdata());
    if (aes_cbc_128.is_set || is_set(aes_cbc_128.yfilter)) leaf_name_data.push_back(aes_cbc_128.get_name_leafdata());
    if (aes_cbc_192.is_set || is_set(aes_cbc_192.yfilter)) leaf_name_data.push_back(aes_cbc_192.get_name_leafdata());
    if (aes_cbc_256.is_set || is_set(aes_cbc_256.yfilter)) leaf_name_data.push_back(aes_cbc_256.get_name_leafdata());
    if (aes_gcm_128.is_set || is_set(aes_gcm_128.yfilter)) leaf_name_data.push_back(aes_gcm_128.get_name_leafdata());
    if (aes_gcm_256.is_set || is_set(aes_gcm_256.yfilter)) leaf_name_data.push_back(aes_gcm_256.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "en-3des")
    {
        en_3des = value;
        en_3des.value_namespace = name_space;
        en_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128 = value;
        aes_cbc_128.value_namespace = name_space;
        aes_cbc_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192 = value;
        aes_cbc_192.value_namespace = name_space;
        aes_cbc_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256 = value;
        aes_cbc_256.value_namespace = name_space;
        aes_cbc_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128 = value;
        aes_gcm_128.value_namespace = name_space;
        aes_gcm_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256 = value;
        aes_gcm_256.value_namespace = name_space;
        aes_gcm_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "en-3des")
    {
        en_3des.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "en-3des" || name == "aes-cbc-128" || name == "aes-cbc-192" || name == "aes-cbc-256" || name == "aes-gcm-128" || name == "aes-gcm-256" || name == "des")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Group::Group()
    :
    one{YType::empty, "one"},
    fourteen{YType::empty, "fourteen"},
    fifteen{YType::empty, "fifteen"},
    sixteen{YType::empty, "sixteen"},
    nineteen{YType::empty, "nineteen"},
    two{YType::empty, "two"},
    twenty{YType::empty, "twenty"},
    twenty_one{YType::empty, "twenty-one"},
    twenty_four{YType::empty, "twenty-four"},
    five{YType::empty, "five"}
{

    yang_name = "group"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Proposal::Group::has_data() const
{
    return one.is_set
	|| fourteen.is_set
	|| fifteen.is_set
	|| sixteen.is_set
	|| nineteen.is_set
	|| two.is_set
	|| twenty.is_set
	|| twenty_one.is_set
	|| twenty_four.is_set
	|| five.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one.yfilter)
	|| ydk::is_set(fourteen.yfilter)
	|| ydk::is_set(fifteen.yfilter)
	|| ydk::is_set(sixteen.yfilter)
	|| ydk::is_set(nineteen.yfilter)
	|| ydk::is_set(two.yfilter)
	|| ydk::is_set(twenty.yfilter)
	|| ydk::is_set(twenty_one.yfilter)
	|| ydk::is_set(twenty_four.yfilter)
	|| ydk::is_set(five.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one.is_set || is_set(one.yfilter)) leaf_name_data.push_back(one.get_name_leafdata());
    if (fourteen.is_set || is_set(fourteen.yfilter)) leaf_name_data.push_back(fourteen.get_name_leafdata());
    if (fifteen.is_set || is_set(fifteen.yfilter)) leaf_name_data.push_back(fifteen.get_name_leafdata());
    if (sixteen.is_set || is_set(sixteen.yfilter)) leaf_name_data.push_back(sixteen.get_name_leafdata());
    if (nineteen.is_set || is_set(nineteen.yfilter)) leaf_name_data.push_back(nineteen.get_name_leafdata());
    if (two.is_set || is_set(two.yfilter)) leaf_name_data.push_back(two.get_name_leafdata());
    if (twenty.is_set || is_set(twenty.yfilter)) leaf_name_data.push_back(twenty.get_name_leafdata());
    if (twenty_one.is_set || is_set(twenty_one.yfilter)) leaf_name_data.push_back(twenty_one.get_name_leafdata());
    if (twenty_four.is_set || is_set(twenty_four.yfilter)) leaf_name_data.push_back(twenty_four.get_name_leafdata());
    if (five.is_set || is_set(five.yfilter)) leaf_name_data.push_back(five.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one")
    {
        one = value;
        one.value_namespace = name_space;
        one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fourteen")
    {
        fourteen = value;
        fourteen.value_namespace = name_space;
        fourteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fifteen")
    {
        fifteen = value;
        fifteen.value_namespace = name_space;
        fifteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sixteen")
    {
        sixteen = value;
        sixteen.value_namespace = name_space;
        sixteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nineteen")
    {
        nineteen = value;
        nineteen.value_namespace = name_space;
        nineteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two")
    {
        two = value;
        two.value_namespace = name_space;
        two.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty")
    {
        twenty = value;
        twenty.value_namespace = name_space;
        twenty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-one")
    {
        twenty_one = value;
        twenty_one.value_namespace = name_space;
        twenty_one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-four")
    {
        twenty_four = value;
        twenty_four.value_namespace = name_space;
        twenty_four.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "five")
    {
        five = value;
        five.value_namespace = name_space;
        five.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one")
    {
        one.yfilter = yfilter;
    }
    if(value_path == "fourteen")
    {
        fourteen.yfilter = yfilter;
    }
    if(value_path == "fifteen")
    {
        fifteen.yfilter = yfilter;
    }
    if(value_path == "sixteen")
    {
        sixteen.yfilter = yfilter;
    }
    if(value_path == "nineteen")
    {
        nineteen.yfilter = yfilter;
    }
    if(value_path == "two")
    {
        two.yfilter = yfilter;
    }
    if(value_path == "twenty")
    {
        twenty.yfilter = yfilter;
    }
    if(value_path == "twenty-one")
    {
        twenty_one.yfilter = yfilter;
    }
    if(value_path == "twenty-four")
    {
        twenty_four.yfilter = yfilter;
    }
    if(value_path == "five")
    {
        five.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "fourteen" || name == "fifteen" || name == "sixteen" || name == "nineteen" || name == "two" || name == "twenty" || name == "twenty-one" || name == "twenty-four" || name == "five")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Integrity::Integrity()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "integrity"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Integrity::~Integrity()
{
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_data() const
{
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Integrity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Integrity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Integrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Integrity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Prf::Prf()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "prf"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Ikev2::Proposal::Prf::~Prf()
{
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_data() const
{
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Prf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Proposal::Prf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Prf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Prf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Prf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Prf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Reconnect::Reconnect()
    :
    key{YType::uint8, "key"},
    value_{YType::str, "value"},
    active{YType::str, "active"}
{

    yang_name = "reconnect"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Reconnect::has_data() const
{
    return key.is_set
	|| value_.is_set
	|| active.is_set;
}

bool Native::Crypto::Ikev2::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string Native::Crypto::Ikev2::Reconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Reconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "value" || name == "active")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Redirect()
    :
    gateway{YType::enumeration, "gateway"}
    	,
    client(nullptr) // presence node
{

    yang_name = "redirect"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Redirect::has_data() const
{
    return gateway.is_set
	|| (client !=  nullptr && client->has_data());
}

bool Native::Crypto::Ikev2::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Crypto::Ikev2::Redirect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Redirect::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Crypto::Ikev2::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Client::Client()
    :
    max_redirects{YType::uint8, "max-redirects"}
{

    yang_name = "client"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ikev2::Redirect::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Redirect::Client::has_data() const
{
    return max_redirects.is_set;
}

bool Native::Crypto::Ikev2::Redirect::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_redirects.yfilter);
}

std::string Native::Crypto::Ikev2::Redirect::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/redirect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Redirect::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Redirect::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_redirects.is_set || is_set(max_redirects.yfilter)) leaf_name_data.push_back(max_redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Redirect::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-redirects")
    {
        max_redirects = value;
        max_redirects.value_namespace = name_space;
        max_redirects.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-redirects")
    {
        max_redirects.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-redirects")
        return true;
    return false;
}

Native::Crypto::Gkm::Gkm()
{

    yang_name = "gkm"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gkm::~Gkm()
{
}

bool Native::Crypto::Gkm::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gkm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gkm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Gkm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gkm::Group::Client>())
	,identity(std::make_shared<Native::Crypto::Gkm::Group::Identity>())
	,server(std::make_shared<Native::Crypto::Gkm::Group::Server>())
	,default_(std::make_shared<Native::Crypto::Gkm::Group::Default_>())
{
    client->parent = this;
    identity->parent = this;
    server->parent = this;
    default_->parent = this;

    yang_name = "group"; yang_parent_name = "gkm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gkm::Group::~Group()
{
}

bool Native::Crypto::Gkm::Group::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gkm::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gkm::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gkm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gkm::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Server>();
        }
        return server;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gkm::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "default" || name == "name" || name == "ipv6" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>())
	,recovery_check(std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>())
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gkm::Group::Client::Status>())
{
    protocol->parent = this;
    recovery_check->parent = this;
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Client::has_data() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_data() const
{
    return interval.is_set;
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>())
	,hash(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;
    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::Encryption()
    :
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_data() const
{
    return rekey_3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.yfilter)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
        rekey_3des_cbc.value_namespace = name_space;
        rekey_3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rekey-3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_data() const
{
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_data() const
{
    return track.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Identity::has_data() const
{
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "number")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>())
	,local(std::make_shared<Native::Crypto::Gkm::Group::Server::Local>())
{
    address->parent = this;
    hostname->parent = this;
    local->parent = this;

    yang_name = "server"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Server::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gkm::Group::Server::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Address::has_data() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Address::has_operation() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_name_datas = ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_name_datas.begin(), ipv4_name_datas.end());
    auto ipv6_name_datas = ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_name_datas.begin(), ipv6_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4.append(value);
    }
    if(value_path == "ipv6")
    {
        ipv6.append(value);
    }
}

void Native::Crypto::Gkm::Group::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>())
	,authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>())
	,group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>())
	,identifier(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>())
	,redundancy(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>())
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>())
	,default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_>())
{
    address->parent = this;
    authorization->parent = this;
    group->parent = this;
    identifier->parent = this;
    redundancy->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;
    default_->parent = this;

    yang_name = "local"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>();
        }
        return sa;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "default" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_data() const
{
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(large.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(small.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.yfilter)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.yfilter)) leaf_name_data.push_back(small.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "large")
    {
        large = value;
        large.value_namespace = name_space;
        large.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small")
    {
        small = value;
        small.value_namespace = name_space;
        small.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "large")
    {
        large.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "small")
    {
        small.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large" || name == "medium" || name == "small")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
    	,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_>())
	,range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;
    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_data() const
{
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Default_()
    :
    value_{YType::uint8, "value"}
    	,
    range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_data() const
{
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_>())
	,local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>())
	,protocol(nullptr) // presence node
{
    default_->parent = this;
    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Default_()
    :
    local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer>())
	,protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>())
	,algorithm(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>())
	,authentication(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>())
	,lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>())
	,retransmit(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>())
	,sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;
    algorithm->parent = this;
    authentication->parent = this;
    lifetime->parent = this;
    retransmit->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_data() const
{
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mypubkey != nullptr)
    {
        children["mypubkey"] = mypubkey;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{

    yang_name = "mypubkey"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    return rsa.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    seconds{YType::uint8, "seconds"},
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"}
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    return seconds.is_set
	|| number.is_set
	|| periodic.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "number" || name == "periodic")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P>())
	,pair_wise_keying(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;
    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::D3P()
    :
    window(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_data() const
{
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{

    yang_name = "window"; yang_parent_name = "d3p"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::~Window()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_data() const
{
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQuery::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQuery::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::Direction::incoming {0, "incoming"};
const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::Direction::outgoing {1, "outgoing"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::ConfigExchange::Set::accept {0, "accept"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::ConfigExchange::Set::send {1, "send"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Dpd::Query::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Dpd::Query::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::sign {0, "sign"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::verify {1, "verify"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::VirtualTemplate::Mode::auto_ {0, "auto"};

const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::auth {0, "auth"};
const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::init {1, "init"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};


}
}

