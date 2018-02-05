
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_100.hpp"
#include "Cisco_IOS_XE_native_101.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_data() const
{
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::Authorization()
    :
    list{YType::empty, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::Keepalive()
{

    yang_name = "keepalive"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Match()
    :
    certificate{YType::str, "certificate"}
    	,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_data() const
{
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Identity()
    :
    group{YType::str, "group"}
    	,
    ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>())
	,address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>())
	,host(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>())
	,user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>())
{
    ipv4_address->parent = this;
    address->parent = this;
    host->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_data() const
{
    return group.is_set
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>();
        }
        return address;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(user_fqdn != nullptr)
    {
        children["user-fqdn"] = user_fqdn;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "address" || name == "host" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::~Ipv4Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_data() const
{
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::Host()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>())
	,domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_data() const
{
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>())
	,domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_data() const
{
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
    }

    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::SelfIdentity()
{

    yang_name = "self-identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_data() const
{
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address>())
	,address(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Address>())
	,host(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host>())
	,user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn>())
{
    ipv4_address->parent = this;
    address->parent = this;
    host->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_data() const
{
    return group.is_set
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
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
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

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
    char count=0;
    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(host != nullptr)
    {
        children["host"] = host;
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
    if(name == "ipv4-address" || name == "address" || name == "host" || name == "user-fqdn" || name == "group")
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
    char count=0;
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
    char count=0;
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
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>())
	,domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_data() const
{
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
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
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
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
    if(name == "domain-name" || name == "domain-match")
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
    char count=0;
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
    char count=0;
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

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>())
	,domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_data() const
{
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
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
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        children["domain-match"] = domain_match;
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
    if(name == "domain-name" || name == "domain-match")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
	,export_(std::make_shared<Native::Crypto::Key::Export>())
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
            export_ = std::make_shared<Native::Crypto::Key::Export>();
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Native::Crypto::Key::Export::Export()
{

    yang_name = "export"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export::~Export()
{
}

bool Native::Crypto::Key::Export::has_data() const
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

bool Native::Crypto::Key::Export::has_operation() const
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

std::string Native::Crypto::Key::Export::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        auto c = std::make_shared<Native::Crypto::Key::Export::Ec>();
        c->parent = this;
        ec.push_back(c);
        return c;
    }

    if(child_yang_name == "rsa")
    {
        auto c = std::make_shared<Native::Crypto::Key::Export::Rsa>();
        c->parent = this;
        rsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Key::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Ec()
    :
    label{YType::str, "label"}
    	,
    pem(std::make_shared<Native::Crypto::Key::Export::Ec::Pem>())
{
    pem->parent = this;

    yang_name = "ec"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export::Ec::~Ec()
{
}

bool Native::Crypto::Key::Export::Ec::has_data() const
{
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Ec::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    return children;
}

void Native::Crypto::Key::Export::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Ec::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Ec::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Ec::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Ec::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Crypto::Key::Export::Ec::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Ec::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_data() const
{
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Ec::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_data() const
{
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Ec::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Ec::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Rsa()
    :
    label{YType::str, "label"}
    	,
    pem(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>())
{
    pem->parent = this;

    yang_name = "rsa"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Export::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Export::Rsa::has_data() const
{
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    return children;
}

void Native::Crypto::Key::Export::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Rsa::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Rsa::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Rsa::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Crypto::Key::Export::Rsa::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Rsa::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_data() const
{
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::Export::Rsa::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_data() const
{
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Export::Rsa::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Export::Rsa::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
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
    char count=0;
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
    keysize{YType::enumeration, "keysize"},
    exportable{YType::empty, "exportable"},
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Generate::Ec::~Ec()
{
}

bool Native::Crypto::Key::Generate::Ec::has_data() const
{
    return keysize.is_set
	|| exportable.is_set
	|| label.is_set;
}

bool Native::Crypto::Key::Generate::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(exportable.yfilter)
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

    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
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
    char count=0;
    return children;
}

void Native::Crypto::Key::Generate::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keysize" || name == "exportable" || name == "label")
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
    char count=0;
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
        auto c = std::make_shared<Native::Crypto::Key::Import::Ec>();
        c->parent = this;
        ec.push_back(c);
        return c;
    }

    if(child_yang_name == "rsa")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : ec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    usage_keys{YType::empty, "usage-keys"},
    terminal{YType::str, "terminal"}
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
	|| usage_keys.is_set
	|| terminal.is_set
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
	|| ydk::is_set(usage_keys.yfilter)
	|| ydk::is_set(terminal.yfilter)
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
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

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
    char count=0;
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
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "label" || name == "encryption" || name == "exportable" || name == "general-purpose" || name == "on" || name == "pem" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys" || name == "terminal")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>())
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
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "named-key")
    {
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : addressed_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : named_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
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
    if(name == "addressed-key" || name == "named-key" || name == "default")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
    	,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>())
	,default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "addressed-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_data() const
{
    return ip.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
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
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
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
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
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
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "ip" || name == "use" || name == "address" || name == "serial-number")
        return true;
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
    char count=0;
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

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
    	,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>())
	,default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "named-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_data() const
{
    return name.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
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
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
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
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
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
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "name" || name == "use" || name == "address" || name == "serial-number")
        return true;
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
    char count=0;
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

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::Default()
{

    yang_name = "default"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_data() const
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

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_operation() const
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

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "named-key")
    {
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : addressed_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : named_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{

    yang_name = "addressed-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_data() const
{
    return ip.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{

    yang_name = "named-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_data() const
{
    return name.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "use")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    vrf{YType::str, "vrf"},
    description{YType::str, "description"},
    local_address{YType::str, "local-address"}
    	,
    default_(std::make_shared<Native::Crypto::Keyring::Default>())
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
	|| vrf.is_set
	|| description.is_set
	|| local_address.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
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
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Keyring::Default>();
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
    char count=0;
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
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
}

void Native::Crypto::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "name" || name == "vrf" || name == "description" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::Default()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"}
    	,
    pre_shared_key(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>())
{
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "default"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::~Default()
{
}

bool Native::Crypto::Keyring::Default::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Crypto::Keyring::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-shared-key" || name == "rsa-pubkey" || name == "description" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>())
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        auto c = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    count = 0;
    for (auto const & c : hostname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_data() const
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

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_operation() const
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

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        auto c = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_data() const
{
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-addr='" <<ipv4_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6_addr{YType::str, "ipv6-addr"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6-addr='" <<ipv6_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_data() const
{
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_data() const
{
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Crypto::Keyring::Default::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_data() const
{
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_data() const
{
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
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
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    count = 0;
    for (auto const & c : hostname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
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
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
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
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
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
    char count=0;
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
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6_addr{YType::str, "ipv6-addr"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6-addr='" <<ipv6_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
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
    char count=0;
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
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
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
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
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
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
    char count=0;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Native::Crypto::CryptoMap::CryptoMap()
{

    yang_name = "crypto-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::~CryptoMap()
{
}

bool Native::Crypto::CryptoMap::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::CryptoMap::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        auto c = std::make_shared<Native::Crypto::CryptoMap::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Crypto::CryptoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    sequence_number{YType::uint16, "sequence-number"},
    keying{YType::enumeration, "keying"},
    dynamic{YType::str, "dynamic"},
    profile{YType::str, "profile"},
    description{YType::str, "description"}
    	,
    default_(std::make_shared<Native::Crypto::CryptoMap::Map::Default>())
	,dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "map"; yang_parent_name = "crypto-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::Map::~Map()
{
}

bool Native::Crypto::CryptoMap::Map::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| sequence_number.is_set
	|| keying.is_set
	|| dynamic.is_set
	|| profile.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(keying.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:crypto-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (keying.is_set || is_set(keying.yfilter)) leaf_name_data.push_back(keying.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::CryptoMap::Map::Default>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keying")
    {
        keying = value;
        keying.value_namespace = name_space;
        keying.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "keying")
    {
        keying.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "ipv6" || name == "sequence-number" || name == "keying" || name == "dynamic" || name == "profile" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Default()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::~Default()
{
}

bool Native::Crypto::CryptoMap::Map::Default::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    remote_peer{YType::str, "remote-peer"},
    gateway{YType::empty, "gateway"},
    static_{YType::empty, "static"}
{

    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return remote_peer.is_set
	|| gateway.is_set
	|| static_.is_set;
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_peer.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_peer.is_set || is_set(remote_peer.yfilter)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-peer")
    {
        remote_peer = value;
        remote_peer.value_namespace = name_space;
        remote_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-peer")
    {
        remote_peer.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer" || name == "gateway" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::CryptoMap::Map::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::Peer::~Peer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
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
    char count=0;
    count = 0;
    for (auto const & c : map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    ipv6{YType::empty, "ipv6"},
    gdoi{YType::enumeration, "gdoi"},
    activate{YType::empty, "activate"}
    	,
    default_(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default>())
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
	|| ipv6.is_set
	|| gdoi.is_set
	|| activate.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(activate.yfilter)
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
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default>();
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
    char count=0;
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
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "name" || name == "ipv6" || name == "gdoi" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Default()
    :
    activate{YType::empty, "activate"}
    	,
    match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default::Match>())
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::~Default()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_data() const
{
    return activate.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

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

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::signature {1, "signature"};

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

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_isakmp {0, "ipsec-isakmp"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_manual {1, "ipsec-manual"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::gdoi {2, "gdoi"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ckm {3, "ckm"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Default::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::MapIpv6Gdoi::Map::Gdoi::fail_close {0, "fail-close"};


}
}

