
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_228.hpp"
#include "Cisco_IOS_XE_native_229.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::~Request()
{
}

bool Native::Arp::AccessList::No::Deny::Request::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::~Response()
{
}

bool Native::Arp::AccessList::No::Deny::Response::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::NetworkPolicy::NetworkPolicy()
    :
    profile{YType::uint32, "profile"}
{

    yang_name = "network-policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkPolicy::~NetworkPolicy()
{
}

bool Native::NetworkPolicy::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::NetworkPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::NetworkPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:network-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::NetworkPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Energywise::Energywise()
    :
    domain(this, {"word"})
{

    yang_name = "energywise"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Energywise::~Energywise()
{
}

bool Native::Energywise::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Energywise::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Energywise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<Native::Energywise::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::Energywise::Domain::Domain()
    :
    word{YType::str, "word"}
        ,
    security(std::make_shared<Native::Energywise::Domain::Security>())
{
    security->parent = this;

    yang_name = "domain"; yang_parent_name = "energywise"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Energywise::Domain::~Domain()
{
}

bool Native::Energywise::Domain::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (security !=  nullptr && security->has_data());
}

bool Native::Energywise::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Energywise::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:energywise/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Energywise::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Energywise::Domain::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    return _children;
}

void Native::Energywise::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "word")
        return true;
    return false;
}

Native::Energywise::Domain::Security::Security()
    :
    shared_secret(std::make_shared<Native::Energywise::Domain::Security::SharedSecret>())
{
    shared_secret->parent = this;

    yang_name = "security"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Energywise::Domain::Security::~Security()
{
}

bool Native::Energywise::Domain::Security::has_data() const
{
    if (is_presence_container) return true;
    return (shared_secret !=  nullptr && shared_secret->has_data());
}

bool Native::Energywise::Domain::Security::has_operation() const
{
    return is_set(yfilter)
	|| (shared_secret !=  nullptr && shared_secret->has_operation());
}

std::string Native::Energywise::Domain::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared-secret")
    {
        if(shared_secret == nullptr)
        {
            shared_secret = std::make_shared<Native::Energywise::Domain::Security::SharedSecret>();
        }
        return shared_secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shared_secret != nullptr)
    {
        _children["shared-secret"] = shared_secret;
    }

    return _children;
}

void Native::Energywise::Domain::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-secret")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::SharedSecret()
    :
    zero(this, {"word"})
{

    yang_name = "shared-secret"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Energywise::Domain::Security::SharedSecret::~SharedSecret()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<zero.len(); index++)
    {
        if(zero[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Energywise::Domain::Security::SharedSecret::has_operation() const
{
    for (std::size_t index=0; index<zero.len(); index++)
    {
        if(zero[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Energywise::Domain::Security::SharedSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::Security::SharedSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        auto ent_ = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero>();
        ent_->parent = this;
        zero.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::Security::SharedSecret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : zero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Energywise::Domain::Security::SharedSecret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::SharedSecret::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::SharedSecret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Zero()
    :
    word{YType::str, "word"}
        ,
    protocol(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol>())
{
    protocol->parent = this;

    yang_name = "zero"; yang_parent_name = "shared-secret"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Energywise::Domain::Security::SharedSecret::Zero::~Zero()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "word")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Protocol()
    :
    udp(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp>())
{
    udp->parent = this;

    yang_name = "protocol"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::~Protocol()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::Udp()
    :
    port{YType::uint16, "port"},
    ip{YType::str, "ip"}
{

    yang_name = "udp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::~Udp()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| ip.is_set;
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "ip")
        return true;
    return false;
}

Native::ServiceTemplate::ServiceTemplate()
    :
    word{YType::str, "word"},
    vlan{YType::uint16, "vlan"},
    sgt{YType::uint16, "sgt"}
        ,
    inactivity_timer(std::make_shared<Native::ServiceTemplate::InactivityTimer>())
    , linksec(std::make_shared<Native::ServiceTemplate::Linksec>())
    , voice(std::make_shared<Native::ServiceTemplate::Voice>())
{
    inactivity_timer->parent = this;
    linksec->parent = this;
    voice->parent = this;

    yang_name = "service-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceTemplate::~ServiceTemplate()
{
}

bool Native::ServiceTemplate::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| vlan.is_set
	|| sgt.is_set
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::ServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::ServiceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:service-template";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity-timer")
    {
        if(inactivity_timer == nullptr)
        {
            inactivity_timer = std::make_shared<Native::ServiceTemplate::InactivityTimer>();
        }
        return inactivity_timer;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::ServiceTemplate::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::ServiceTemplate::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inactivity_timer != nullptr)
    {
        _children["inactivity-timer"] = inactivity_timer;
    }

    if(linksec != nullptr)
    {
        _children["linksec"] = linksec;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::ServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity-timer" || name == "linksec" || name == "voice" || name == "word" || name == "vlan" || name == "sgt")
        return true;
    return false;
}

Native::ServiceTemplate::InactivityTimer::InactivityTimer()
    :
    value_{YType::uint16, "value"},
    probe{YType::empty, "probe"}
{

    yang_name = "inactivity-timer"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceTemplate::InactivityTimer::~InactivityTimer()
{
}

bool Native::ServiceTemplate::InactivityTimer::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| probe.is_set;
}

bool Native::ServiceTemplate::InactivityTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(probe.yfilter);
}

std::string Native::ServiceTemplate::InactivityTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::InactivityTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceTemplate::InactivityTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceTemplate::InactivityTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceTemplate::InactivityTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::InactivityTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::InactivityTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "probe")
        return true;
    return false;
}

Native::ServiceTemplate::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceTemplate::Linksec::~Linksec()
{
}

bool Native::ServiceTemplate::Linksec::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::ServiceTemplate::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::ServiceTemplate::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceTemplate::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceTemplate::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceTemplate::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::ServiceTemplate::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceTemplate::Voice::~Voice()
{
}

bool Native::ServiceTemplate::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::ServiceTemplate::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::ServiceTemplate::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceTemplate::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceTemplate::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceTemplate::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Switch::Switch()
    :
    number{YType::uint8, "number"},
    provision{YType::enumeration, "provision"}
{

    yang_name = "switch"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Switch::~Switch()
{
}

bool Native::Switch::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| provision.is_set;
}

bool Native::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(provision.yfilter);
}

std::string Native::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (provision.is_set || is_set(provision.yfilter)) leaf_name_data.push_back(provision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provision")
    {
        provision = value;
        provision.value_namespace = name_space;
        provision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "provision")
    {
        provision.yfilter = yfilter;
    }
}

bool Native::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "provision")
        return true;
    return false;
}

Native::SwitchVirtual::SwitchVirtual()
    :
    domain{YType::uint32, "domain"},
    virtual_{YType::empty, "virtual"}
        ,
    switch_(std::make_shared<Native::SwitchVirtual::Switch>())
    , mac_address(std::make_shared<Native::SwitchVirtual::MacAddress>())
    , dual_active(std::make_shared<Native::SwitchVirtual::DualActive>())
{
    switch_->parent = this;
    mac_address->parent = this;
    dual_active->parent = this;

    yang_name = "switch-virtual"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SwitchVirtual::~SwitchVirtual()
{
}

bool Native::SwitchVirtual::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| virtual_.is_set
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data());
}

bool Native::SwitchVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(virtual_.yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation());
}

std::string Native::SwitchVirtual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SwitchVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch-virtual";
    ADD_KEY_TOKEN(domain, "domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::SwitchVirtual::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::SwitchVirtual::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SwitchVirtual::DualActive>();
        }
        return dual_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(dual_active != nullptr)
    {
        _children["dual-active"] = dual_active;
    }

    return _children;
}

void Native::SwitchVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
        virtual_.value_namespace = name_space;
        virtual_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "virtual")
    {
        virtual_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch" || name == "mac-address" || name == "dual-active" || name == "domain" || name == "virtual")
        return true;
    return false;
}

Native::SwitchVirtual::Switch::Switch()
    :
    switch_number{YType::uint32, "switch-number"},
    priority{YType::uint32, "priority"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "switch"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::Switch::~Switch()
{
}

bool Native::SwitchVirtual::Switch::has_data() const
{
    if (is_presence_container) return true;
    return switch_number.is_set
	|| priority.is_set
	|| mode.is_set;
}

bool Native::SwitchVirtual::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::SwitchVirtual::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SwitchVirtual::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number" || name == "priority" || name == "mode")
        return true;
    return false;
}

Native::SwitchVirtual::MacAddress::MacAddress()
    :
    use_virtual{YType::empty, "use-virtual"}
{

    yang_name = "mac-address"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::MacAddress::~MacAddress()
{
}

bool Native::SwitchVirtual::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return use_virtual.is_set;
}

bool Native::SwitchVirtual::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_virtual.yfilter);
}

std::string Native::SwitchVirtual::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_virtual.is_set || is_set(use_virtual.yfilter)) leaf_name_data.push_back(use_virtual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SwitchVirtual::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-virtual")
    {
        use_virtual = value;
        use_virtual.value_namespace = name_space;
        use_virtual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-virtual")
    {
        use_virtual.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-virtual")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::DualActive()
    :
    recovery(std::make_shared<Native::SwitchVirtual::DualActive::Recovery>())
    , detection(std::make_shared<Native::SwitchVirtual::DualActive::Detection>())
{
    recovery->parent = this;
    detection->parent = this;

    yang_name = "dual-active"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::DualActive::~DualActive()
{
}

bool Native::SwitchVirtual::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data())
	|| (detection !=  nullptr && detection->has_data());
}

bool Native::SwitchVirtual::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation())
	|| (detection !=  nullptr && detection->has_operation());
}

std::string Native::SwitchVirtual::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::SwitchVirtual::DualActive::Recovery>();
        }
        return recovery;
    }

    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::SwitchVirtual::DualActive::Detection>();
        }
        return detection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    return _children;
}

void Native::SwitchVirtual::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery" || name == "detection")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Recovery()
    :
    switch_{YType::uint8, "switch"}
        ,
    ip(std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>())
{
    ip->parent = this;

    yang_name = "recovery"; yang_parent_name = "dual-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::DualActive::Recovery::~Recovery()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::SwitchVirtual::DualActive::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::SwitchVirtual::DualActive::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "switch")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::DualActive::Recovery::Ip::~Ip()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Recovery::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Recovery::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::Recovery::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::Recovery::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Detection()
    :
    pagp(nullptr) // presence node
{

    yang_name = "detection"; yang_parent_name = "dual-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::DualActive::Detection::~Detection()
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_data() const
{
    if (is_presence_container) return true;
    return (pagp !=  nullptr && pagp->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::has_operation() const
{
    return is_set(yfilter)
	|| (pagp !=  nullptr && pagp->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pagp")
    {
        if(pagp == nullptr)
        {
            pagp = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp>();
        }
        return pagp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pagp != nullptr)
    {
        _children["pagp"] = pagp;
    }

    return _children;
}

void Native::SwitchVirtual::DualActive::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pagp")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Pagp()
    :
    trust(std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>())
{
    trust->parent = this;

    yang_name = "pagp"; yang_parent_name = "detection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::~Pagp()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_data() const
{
    if (is_presence_container) return true;
    return (trust !=  nullptr && trust->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::Pagp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    return _children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::Trust()
    :
    channel_group{YType::uint8, "channel-group"}
{

    yang_name = "trust"; yang_parent_name = "pagp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::~Trust()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_data() const
{
    if (is_presence_container) return true;
    return channel_group.is_set;
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_group.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-group")
        return true;
    return false;
}

Native::Device::Device()
    :
    classifier{YType::empty, "classifier"}
{

    yang_name = "device"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Device::~Device()
{
}

bool Native::Device::has_data() const
{
    if (is_presence_container) return true;
    return classifier.is_set;
}

bool Native::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classifier.yfilter);
}

std::string Native::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier.is_set || is_set(classifier.yfilter)) leaf_name_data.push_back(classifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier")
    {
        classifier = value;
        classifier.value_namespace = name_space;
        classifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier")
    {
        classifier.yfilter = yfilter;
    }
}

bool Native::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier")
        return true;
    return false;
}

Native::StackMac::StackMac()
    :
    persistent(std::make_shared<Native::StackMac::Persistent>())
{
    persistent->parent = this;

    yang_name = "stack-mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackMac::~StackMac()
{
}

bool Native::StackMac::has_data() const
{
    if (is_presence_container) return true;
    return (persistent !=  nullptr && persistent->has_data());
}

bool Native::StackMac::has_operation() const
{
    return is_set(yfilter)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::StackMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:stack-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::StackMac::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(persistent != nullptr)
    {
        _children["persistent"] = persistent;
    }

    return _children;
}

void Native::StackMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackMac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent")
        return true;
    return false;
}

Native::StackMac::Persistent::Persistent()
    :
    timer{YType::uint8, "timer"}
{

    yang_name = "persistent"; yang_parent_name = "stack-mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackMac::Persistent::~Persistent()
{
}

bool Native::StackMac::Persistent::has_data() const
{
    if (is_presence_container) return true;
    return timer.is_set;
}

bool Native::StackMac::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Native::StackMac::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:stack-mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackMac::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackMac::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackMac::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackMac::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::StackMac::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::StackMac::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::StackMac::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer")
        return true;
    return false;
}

Native::L2protocolTunnel::L2protocolTunnel()
    :
    cos{YType::uint8, "cos"}
        ,
    global(std::make_shared<Native::L2protocolTunnel::Global>())
{
    global->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| (global !=  nullptr && global->has_data());
}

bool Native::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::L2protocolTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::L2protocolTunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "cos")
        return true;
    return false;
}

Native::L2protocolTunnel::Global::Global()
    :
    drop_threshold{YType::uint16, "drop-threshold"}
{

    yang_name = "global"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2protocolTunnel::Global::~Global()
{
}

bool Native::L2protocolTunnel::Global::has_data() const
{
    if (is_presence_container) return true;
    return drop_threshold.is_set;
}

bool Native::L2protocolTunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_threshold.yfilter);
}

std::string Native::L2protocolTunnel::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:l2protocol-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2protocolTunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2protocolTunnel::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_threshold.is_set || is_set(drop_threshold.yfilter)) leaf_name_data.push_back(drop_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2protocolTunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2protocolTunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2protocolTunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold = value;
        drop_threshold.value_namespace = name_space;
        drop_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2protocolTunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold.yfilter = yfilter;
    }
}

bool Native::L2protocolTunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold")
        return true;
    return false;
}

Native::Rep::Rep()
    :
    admin(std::make_shared<Native::Rep::Admin>())
{
    admin->parent = this;

    yang_name = "rep"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rep::~Rep()
{
}

bool Native::Rep::has_data() const
{
    if (is_presence_container) return true;
    return (admin !=  nullptr && admin->has_data());
}

bool Native::Rep::has_operation() const
{
    return is_set(yfilter)
	|| (admin !=  nullptr && admin->has_operation());
}

std::string Native::Rep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:rep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin")
    {
        if(admin == nullptr)
        {
            admin = std::make_shared<Native::Rep::Admin>();
        }
        return admin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(admin != nullptr)
    {
        _children["admin"] = admin;
    }

    return _children;
}

void Native::Rep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin")
        return true;
    return false;
}

Native::Rep::Admin::Admin()
    :
    vlan(this, {"name"})
{

    yang_name = "admin"; yang_parent_name = "rep"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rep::Admin::~Admin()
{
}

bool Native::Rep::Admin::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rep::Admin::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rep::Admin::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::Admin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::Admin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rep::Admin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Rep::Admin::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rep::Admin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Rep::Admin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::Admin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::Admin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Rep::Admin::Vlan::Vlan()
    :
    name{YType::uint16, "name"}
{

    yang_name = "vlan"; yang_parent_name = "admin"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rep::Admin::Vlan::~Vlan()
{
}

bool Native::Rep::Admin::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Rep::Admin::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Rep::Admin::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/admin/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rep::Admin::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rep::Admin::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rep::Admin::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rep::Admin::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Rep::Admin::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rep::Admin::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Rep::Admin::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::HwSwitch::HwSwitch()
    :
    switch_(std::make_shared<Native::HwSwitch::Switch>())
{
    switch_->parent = this;

    yang_name = "hw-switch"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwSwitch::~HwSwitch()
{
}

bool Native::HwSwitch::has_data() const
{
    if (is_presence_container) return true;
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::HwSwitch::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::HwSwitch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:hw-switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::HwSwitch::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    return _children;
}

void Native::HwSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::HwSwitch::Switch::Switch()
    :
    switch_number(this, {"switch_number"})
{

    yang_name = "switch"; yang_parent_name = "hw-switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwSwitch::Switch::~Switch()
{
}

bool Native::HwSwitch::Switch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_number.len(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::HwSwitch::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch_number.len(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::HwSwitch::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwSwitch::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-number")
    {
        auto ent_ = std::make_shared<Native::HwSwitch::Switch::SwitchNumber>();
        ent_->parent = this;
        switch_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwSwitch::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : switch_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::HwSwitch::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch::SwitchNumber::SwitchNumber()
    :
    switch_number{YType::uint8, "switch-number"}
        ,
    logging(std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging>())
{
    logging->parent = this;

    yang_name = "switch-number"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwSwitch::Switch::SwitchNumber::~SwitchNumber()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::has_data() const
{
    if (is_presence_container) return true;
    return switch_number.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::HwSwitch::Switch::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::HwSwitch::Switch::SwitchNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::Switch::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number";
    ADD_KEY_TOKEN(switch_number, "switch-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch::SwitchNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwSwitch::Switch::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwSwitch::Switch::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::HwSwitch::Switch::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Logging()
    :
    onboard(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "switch-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::HwSwitch::Switch::SwitchNumber::Logging::~Logging()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (onboard !=  nullptr && onboard->has_data());
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Native::HwSwitch::Switch::SwitchNumber::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch::SwitchNumber::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwSwitch::Switch::SwitchNumber::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwSwitch::Switch::SwitchNumber::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(onboard != nullptr)
    {
        _children["onboard"] = onboard;
    }

    return _children;
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onboard")
        return true;
    return false;
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::Onboard()
    :
    counter{YType::empty, "counter"},
    environment{YType::empty, "environment"},
    message{YType::empty, "message"},
    poe{YType::empty, "poe"},
    temperature{YType::empty, "temperature"},
    voltage{YType::empty, "voltage"}
{

    yang_name = "onboard"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::~Onboard()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::has_data() const
{
    if (is_presence_container) return true;
    return counter.is_set
	|| environment.is_set
	|| message.is_set
	|| poe.is_set
	|| temperature.is_set
	|| voltage.is_set;
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(environment.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(poe.yfilter)
	|| ydk::is_set(temperature.yfilter)
	|| ydk::is_set(voltage.yfilter);
}

std::string Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (environment.is_set || is_set(environment.yfilter)) leaf_name_data.push_back(environment.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (poe.is_set || is_set(poe.yfilter)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.yfilter)) leaf_name_data.push_back(voltage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environment")
    {
        environment = value;
        environment.value_namespace = name_space;
        environment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe")
    {
        poe = value;
        poe.value_namespace = name_space;
        poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voltage")
    {
        voltage = value;
        voltage.value_namespace = name_space;
        voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "environment")
    {
        environment.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "poe")
    {
        poe.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
    if(value_path == "voltage")
    {
        voltage.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "environment" || name == "message" || name == "poe" || name == "temperature" || name == "voltage")
        return true;
    return false;
}

Native::Feature::Feature()
    :
    openflow{YType::empty, "openflow"}
{

    yang_name = "feature"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Feature::~Feature()
{
}

bool Native::Feature::has_data() const
{
    if (is_presence_container) return true;
    return openflow.is_set;
}

bool Native::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(openflow.yfilter);
}

std::string Native::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (openflow.is_set || is_set(openflow.yfilter)) leaf_name_data.push_back(openflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "openflow")
    {
        openflow = value;
        openflow.value_namespace = name_space;
        openflow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "openflow")
    {
        openflow.yfilter = yfilter;
    }
}

bool Native::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "openflow")
        return true;
    return false;
}

Native::Openflow::Openflow()
    :
    switch_(this, {"number"})
{

    yang_name = "openflow"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Openflow::~Openflow()
{
}

bool Native::Openflow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Openflow::has_operation() const
{
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Openflow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Openflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:openflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        auto ent_ = std::make_shared<Native::Openflow::Switch>();
        ent_->parent = this;
        switch_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : switch_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Openflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Openflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Openflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Openflow::Switch::Switch()
    :
    number{YType::uint32, "number"},
    pipeline{YType::uint32, "pipeline"},
    datapath_id{YType::str, "datapath-id"},
    protocol_version{YType::enumeration, "protocol-version"},
    max_backoff{YType::uint16, "max-backoff"},
    probe_interval{YType::uint16, "probe-interval"},
    shutdown{YType::empty, "shutdown"},
    dataplane_default{YType::enumeration, "dataplane-default"},
    default_miss{YType::enumeration, "default-miss"}
        ,
    controller(std::make_shared<Native::Openflow::Switch::Controller>())
    , of_port(std::make_shared<Native::Openflow::Switch::OfPort>())
    , rate_limit(std::make_shared<Native::Openflow::Switch::RateLimit>())
    , statistics(std::make_shared<Native::Openflow::Switch::Statistics>())
    , logging(std::make_shared<Native::Openflow::Switch::Logging>())
    , tls(std::make_shared<Native::Openflow::Switch::Tls>())
{
    controller->parent = this;
    of_port->parent = this;
    rate_limit->parent = this;
    statistics->parent = this;
    logging->parent = this;
    tls->parent = this;

    yang_name = "switch"; yang_parent_name = "openflow"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Openflow::Switch::~Switch()
{
}

bool Native::Openflow::Switch::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| pipeline.is_set
	|| datapath_id.is_set
	|| protocol_version.is_set
	|| max_backoff.is_set
	|| probe_interval.is_set
	|| shutdown.is_set
	|| dataplane_default.is_set
	|| default_miss.is_set
	|| (controller !=  nullptr && controller->has_data())
	|| (of_port !=  nullptr && of_port->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (tls !=  nullptr && tls->has_data());
}

bool Native::Openflow::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(pipeline.yfilter)
	|| ydk::is_set(datapath_id.yfilter)
	|| ydk::is_set(protocol_version.yfilter)
	|| ydk::is_set(max_backoff.yfilter)
	|| ydk::is_set(probe_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(dataplane_default.yfilter)
	|| ydk::is_set(default_miss.yfilter)
	|| (controller !=  nullptr && controller->has_operation())
	|| (of_port !=  nullptr && of_port->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (tls !=  nullptr && tls->has_operation());
}

std::string Native::Openflow::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:openflow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Openflow::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (pipeline.is_set || is_set(pipeline.yfilter)) leaf_name_data.push_back(pipeline.get_name_leafdata());
    if (datapath_id.is_set || is_set(datapath_id.yfilter)) leaf_name_data.push_back(datapath_id.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.yfilter)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (max_backoff.is_set || is_set(max_backoff.yfilter)) leaf_name_data.push_back(max_backoff.get_name_leafdata());
    if (probe_interval.is_set || is_set(probe_interval.yfilter)) leaf_name_data.push_back(probe_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (dataplane_default.is_set || is_set(dataplane_default.yfilter)) leaf_name_data.push_back(dataplane_default.get_name_leafdata());
    if (default_miss.is_set || is_set(default_miss.yfilter)) leaf_name_data.push_back(default_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Openflow::Switch::Controller>();
        }
        return controller;
    }

    if(child_yang_name == "of-port")
    {
        if(of_port == nullptr)
        {
            of_port = std::make_shared<Native::Openflow::Switch::OfPort>();
        }
        return of_port;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Openflow::Switch::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Openflow::Switch::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Openflow::Switch::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "tls")
    {
        if(tls == nullptr)
        {
            tls = std::make_shared<Native::Openflow::Switch::Tls>();
        }
        return tls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    if(of_port != nullptr)
    {
        _children["of-port"] = of_port;
    }

    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(tls != nullptr)
    {
        _children["tls"] = tls;
    }

    return _children;
}

void Native::Openflow::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pipeline")
    {
        pipeline = value;
        pipeline.value_namespace = name_space;
        pipeline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "datapath-id")
    {
        datapath_id = value;
        datapath_id.value_namespace = name_space;
        datapath_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
        protocol_version.value_namespace = name_space;
        protocol_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-backoff")
    {
        max_backoff = value;
        max_backoff.value_namespace = name_space;
        max_backoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-interval")
    {
        probe_interval = value;
        probe_interval.value_namespace = name_space;
        probe_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-default")
    {
        dataplane_default = value;
        dataplane_default.value_namespace = name_space;
        dataplane_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-miss")
    {
        default_miss = value;
        default_miss.value_namespace = name_space;
        default_miss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "pipeline")
    {
        pipeline.yfilter = yfilter;
    }
    if(value_path == "datapath-id")
    {
        datapath_id.yfilter = yfilter;
    }
    if(value_path == "protocol-version")
    {
        protocol_version.yfilter = yfilter;
    }
    if(value_path == "max-backoff")
    {
        max_backoff.yfilter = yfilter;
    }
    if(value_path == "probe-interval")
    {
        probe_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "dataplane-default")
    {
        dataplane_default.yfilter = yfilter;
    }
    if(value_path == "default-miss")
    {
        default_miss.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "of-port" || name == "rate-limit" || name == "statistics" || name == "logging" || name == "tls" || name == "number" || name == "pipeline" || name == "datapath-id" || name == "protocol-version" || name == "max-backoff" || name == "probe-interval" || name == "shutdown" || name == "dataplane-default" || name == "default-miss")
        return true;
    return false;
}

Native::Openflow::Switch::Controller::Controller()
    :
    ipv4(this, {"address"})
{

    yang_name = "controller"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Controller::~Controller()
{
}

bool Native::Openflow::Switch::Controller::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Openflow::Switch::Controller::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Openflow::Switch::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Openflow::Switch::Controller::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Controller::get_children() const
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

void Native::Openflow::Switch::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Openflow::Switch::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Openflow::Switch::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Openflow::Switch::Controller::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
        ,
    port(this, {"number"})
{

    yang_name = "ipv4"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Controller::Ipv4::~Ipv4()
{
}

bool Native::Openflow::Switch::Controller::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return address.is_set;
}

bool Native::Openflow::Switch::Controller::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Openflow::Switch::Controller::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Controller::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Controller::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Native::Openflow::Switch::Controller::Ipv4::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Controller::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Openflow::Switch::Controller::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::Controller::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Controller::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "address")
        return true;
    return false;
}

Native::Openflow::Switch::Controller::Ipv4::Port::Port()
    :
    number{YType::uint16, "number"}
        ,
    vrf(this, {"name"})
{

    yang_name = "port"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Controller::Ipv4::Port::~Port()
{
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Openflow::Switch::Controller::Ipv4::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Controller::Ipv4::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Controller::Ipv4::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Openflow::Switch::Controller::Ipv4::Port::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Controller::Ipv4::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Native::Openflow::Switch::Controller::Ipv4::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::Controller::Ipv4::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "number")
        return true;
    return false;
}

Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::Vrf()
    :
    name{YType::str, "name"},
    security{YType::enumeration, "security"}
{

    yang_name = "vrf"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::~Vrf()
{
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| security.is_set;
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "security")
        return true;
    return false;
}

Native::Openflow::Switch::OfPort::OfPort()
    :
    interface(this, {"name"})
{

    yang_name = "of-port"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::OfPort::~OfPort()
{
}

bool Native::Openflow::Switch::OfPort::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Openflow::Switch::OfPort::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Openflow::Switch::OfPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::OfPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::OfPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Openflow::Switch::OfPort::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::OfPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Openflow::Switch::OfPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Openflow::Switch::OfPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Openflow::Switch::OfPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Openflow::Switch::OfPort::Interface::Interface()
    :
    name{YType::str, "name"}
{

    yang_name = "interface"; yang_parent_name = "of-port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::OfPort::Interface::~Interface()
{
}

bool Native::Openflow::Switch::OfPort::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Openflow::Switch::OfPort::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Openflow::Switch::OfPort::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::OfPort::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::OfPort::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::OfPort::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::OfPort::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::OfPort::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::OfPort::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Openflow::Switch::RateLimit::RateLimit()
    :
    packet_in{YType::uint16, "packet_in"},
    burst{YType::uint16, "burst"}
{

    yang_name = "rate-limit"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::RateLimit::~RateLimit()
{
}

bool Native::Openflow::Switch::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    return packet_in.is_set
	|| burst.is_set;
}

bool Native::Openflow::Switch::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_in.yfilter)
	|| ydk::is_set(burst.yfilter);
}

std::string Native::Openflow::Switch::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_in.is_set || is_set(packet_in.yfilter)) leaf_name_data.push_back(packet_in.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet_in")
    {
        packet_in = value;
        packet_in.value_namespace = name_space;
        packet_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet_in")
    {
        packet_in.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet_in" || name == "burst")
        return true;
    return false;
}

Native::Openflow::Switch::Statistics::Statistics()
    :
    collection_interval{YType::uint8, "collection-interval"}
{

    yang_name = "statistics"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Statistics::~Statistics()
{
}

bool Native::Openflow::Switch::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return collection_interval.is_set;
}

bool Native::Openflow::Switch::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collection_interval.yfilter);
}

std::string Native::Openflow::Switch::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection_interval.is_set || is_set(collection_interval.yfilter)) leaf_name_data.push_back(collection_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collection-interval")
    {
        collection_interval = value;
        collection_interval.value_namespace = name_space;
        collection_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collection-interval")
    {
        collection_interval.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection-interval")
        return true;
    return false;
}

Native::Openflow::Switch::Logging::Logging()
    :
    flow_modify{YType::empty, "flow-modify"}
{

    yang_name = "logging"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Logging::~Logging()
{
}

bool Native::Openflow::Switch::Logging::has_data() const
{
    if (is_presence_container) return true;
    return flow_modify.is_set;
}

bool Native::Openflow::Switch::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_modify.yfilter);
}

std::string Native::Openflow::Switch::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_modify.is_set || is_set(flow_modify.yfilter)) leaf_name_data.push_back(flow_modify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-modify")
    {
        flow_modify = value;
        flow_modify.value_namespace = name_space;
        flow_modify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Openflow::Switch::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-modify")
    {
        flow_modify.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-modify")
        return true;
    return false;
}

Native::Openflow::Switch::Tls::Tls()
    :
    trustpoint(std::make_shared<Native::Openflow::Switch::Tls::Trustpoint>())
{
    trustpoint->parent = this;

    yang_name = "tls"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Tls::~Tls()
{
}

bool Native::Openflow::Switch::Tls::has_data() const
{
    if (is_presence_container) return true;
    return (trustpoint !=  nullptr && trustpoint->has_data());
}

bool Native::Openflow::Switch::Tls::has_operation() const
{
    return is_set(yfilter)
	|| (trustpoint !=  nullptr && trustpoint->has_operation());
}

std::string Native::Openflow::Switch::Tls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Tls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Tls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trustpoint")
    {
        if(trustpoint == nullptr)
        {
            trustpoint = std::make_shared<Native::Openflow::Switch::Tls::Trustpoint>();
        }
        return trustpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Tls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trustpoint != nullptr)
    {
        _children["trustpoint"] = trustpoint;
    }

    return _children;
}

void Native::Openflow::Switch::Tls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Openflow::Switch::Tls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Openflow::Switch::Tls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Openflow::Switch::Tls::Trustpoint::Trustpoint()
    :
    local{YType::str, "local"},
    remote{YType::str, "remote"}
{

    yang_name = "trustpoint"; yang_parent_name = "tls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Openflow::Switch::Tls::Trustpoint::~Trustpoint()
{
}

bool Native::Openflow::Switch::Tls::Trustpoint::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Openflow::Switch::Tls::Trustpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Openflow::Switch::Tls::Trustpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Openflow::Switch::Tls::Trustpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Openflow::Switch::Tls::Trustpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Openflow::Switch::Tls::Trustpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Openflow::Switch::Tls::Trustpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Openflow::Switch::Tls::Trustpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Openflow::Switch::Tls::Trustpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::EtAnalytics::EtAnalytics()
    :
    inactive_timeout{YType::uint32, "inactive-timeout"}
        ,
    ip(std::make_shared<Native::EtAnalytics::Ip>())
    , whitelist(std::make_shared<Native::EtAnalytics::Whitelist>())
{
    ip->parent = this;
    whitelist->parent = this;

    yang_name = "et-analytics"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::EtAnalytics::~EtAnalytics()
{
}

bool Native::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return inactive_timeout.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactive_timeout.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::EtAnalytics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactive_timeout.is_set || is_set(inactive_timeout.yfilter)) leaf_name_data.push_back(inactive_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::EtAnalytics::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::EtAnalytics::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout = value;
        inactive_timeout.value_namespace = name_space;
        inactive_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "whitelist" || name == "inactive-timeout")
        return true;
    return false;
}

Native::EtAnalytics::Ip::Ip()
    :
    flow_export(std::make_shared<Native::EtAnalytics::Ip::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "ip"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::~Ip()
{
}

bool Native::EtAnalytics::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::EtAnalytics::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::EtAnalytics::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::EtAnalytics::Ip::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_export != nullptr)
    {
        _children["flow-export"] = flow_export;
    }

    return _children;
}

void Native::EtAnalytics::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::FlowExport()
    :
    destination(this, {"address", "port"})
    , destination_vrf(std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>())
{
    destination_vrf->parent = this;

    yang_name = "flow-export"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::~FlowExport()
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return (destination_vrf !=  nullptr && destination_vrf->has_data());
}

bool Native::EtAnalytics::Ip::FlowExport::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (destination_vrf !=  nullptr && destination_vrf->has_operation());
}

std::string Native::EtAnalytics::Ip::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<Native::EtAnalytics::Ip::FlowExport::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    if(child_yang_name == "destination-vrf")
    {
        if(destination_vrf == nullptr)
        {
            destination_vrf = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>();
        }
        return destination_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(destination_vrf != nullptr)
    {
        _children["destination-vrf"] = destination_vrf;
    }

    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-vrf")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"}
{

    yang_name = "destination"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::DestinationVrf()
    :
    destination(this, {"address", "port", "vrf"})
{

    yang_name = "destination-vrf"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::~DestinationVrf()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    vrf{YType::str, "vrf"}
{

    yang_name = "destination"; yang_parent_name = "destination-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| vrf.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/destination-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "vrf")
        return true;
    return false;
}

Native::EtAnalytics::Whitelist::Whitelist()
    :
    acl{YType::str, "acl"}
{

    yang_name = "whitelist"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Whitelist::~Whitelist()
{
}

bool Native::EtAnalytics::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set;
}

bool Native::EtAnalytics::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::EtAnalytics::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl")
        return true;
    return false;
}

Native::Dialer::Dialer()
    :
    watch_list(this, {"number"})
{

    yang_name = "dialer"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dialer::~Dialer()
{
}

bool Native::Dialer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<watch_list.len(); index++)
    {
        if(watch_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Dialer::has_operation() const
{
    for (std::size_t index=0; index<watch_list.len(); index++)
    {
        if(watch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Dialer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watch-list")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList>();
        ent_->parent = this;
        watch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : watch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watch-list")
        return true;
    return false;
}

Native::Dialer::WatchList::WatchList()
    :
    number{YType::uint8, "number"}
        ,
    delay(this, {"interval"})
    , ip(this, {"address"})
{

    yang_name = "watch-list"; yang_parent_name = "dialer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dialer::WatchList::~WatchList()
{
}

bool Native::Dialer::WatchList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<delay.len(); index++)
    {
        if(delay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Dialer::WatchList::has_operation() const
{
    for (std::size_t index=0; index<delay.len(); index++)
    {
        if(delay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Dialer::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cellular:dialer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList::Delay>();
        ent_->parent = this;
        delay.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : delay.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Dialer::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "number")
        return true;
    return false;
}

Native::Dialer::WatchList::Delay::Delay()
    :
    interval{YType::enumeration, "interval"},
    initial{YType::empty, "initial"},
    delay_time{YType::uint32, "delay-time"}
{

    yang_name = "delay"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Dialer::WatchList::Delay::~Delay()
{
}

bool Native::Dialer::WatchList::Delay::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial.is_set
	|| delay_time.is_set;
}

bool Native::Dialer::WatchList::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(delay_time.yfilter);
}

std::string Native::Dialer::WatchList::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (delay_time.is_set || is_set(delay_time.yfilter)) leaf_name_data.push_back(delay_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dialer::WatchList::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-time")
    {
        delay_time = value;
        delay_time.value_namespace = name_space;
        delay_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "delay-time")
    {
        delay_time.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial" || name == "delay-time")
        return true;
    return false;
}

Native::Dialer::WatchList::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Dialer::WatchList::Ip::~Ip()
{
}

bool Native::Dialer::WatchList::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Dialer::WatchList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Dialer::WatchList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dialer::WatchList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Dialer::WatchList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::DialerList::DialerList()
    :
    group_number{YType::uint8, "group-number"}
        ,
    protocol(this, {"protocol_type"})
{

    yang_name = "dialer-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DialerList::~DialerList()
{
}

bool Native::DialerList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return group_number.is_set;
}

bool Native::DialerList::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter);
}

std::string Native::DialerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DialerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer-list";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DialerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<Native::DialerList::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DialerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::DialerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::DialerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "group-number")
        return true;
    return false;
}

Native::DialerList::Protocol::Protocol()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    access{YType::enumeration, "access"},
    list_name{YType::str, "list-name"}
{

    yang_name = "protocol"; yang_parent_name = "dialer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DialerList::Protocol::~Protocol()
{
}

bool Native::DialerList::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_type.is_set
	|| access.is_set
	|| list_name.is_set;
}

bool Native::DialerList::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(list_name.yfilter);
}

std::string Native::DialerList::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_type, "protocol-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DialerList::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DialerList::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::DialerList::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
}

bool Native::DialerList::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "access" || name == "list-name")
        return true;
    return false;
}

Native::Utd::Utd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
        ,
    redirect(std::make_shared<Native::Utd::Redirect>())
    , engine(nullptr) // presence node
{
    redirect->parent = this;

    yang_name = "utd"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Utd::~Utd()
{
}

bool Native::Utd::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set
	|| (redirect !=  nullptr && redirect->has_data())
	|| (engine !=  nullptr && engine->has_data());
}

bool Native::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (engine !=  nullptr && engine->has_operation());
}

std::string Native::Utd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Utd::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::Utd::Engine>();
        }
        return engine;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(engine != nullptr)
    {
        _children["engine"] = engine;
    }

    return _children;
}

void Native::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "engine" || name == "all-interfaces")
        return true;
    return false;
}

Native::Utd::Redirect::Redirect()
    :
    interface(std::make_shared<Native::Utd::Redirect::Interface>())
{
    interface->parent = this;

    yang_name = "redirect"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Utd::Redirect::~Redirect()
{
}

bool Native::Utd::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Utd::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Utd::Redirect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Utd::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Utd::Redirect::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Utd::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Utd::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Utd::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Utd::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Utd::Redirect::Interface::Interface()
    :
    bdi{YType::str, "BDI"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"}
{

    yang_name = "interface"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Utd::Redirect::Interface::~Interface()
{
}

bool Native::Utd::Redirect::Interface::has_data() const
{
    if (is_presence_container) return true;
    return bdi.is_set
	|| virtualportgroup.is_set;
}

bool Native::Utd::Redirect::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter);
}

std::string Native::Utd::Redirect::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd/redirect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::Redirect::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::Redirect::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Utd::Redirect::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Utd::Redirect::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Utd::Redirect::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Utd::Redirect::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
}

bool Native::Utd::Redirect::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDI" || name == "VirtualPortGroup")
        return true;
    return false;
}

Native::Utd::Engine::Engine()
    :
    mode{YType::enumeration, "mode"}
        ,
    fail(std::make_shared<Native::Utd::Engine::Fail>())
{
    fail->parent = this;

    yang_name = "engine"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Utd::Engine::~Engine()
{
}

bool Native::Utd::Engine::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| (fail !=  nullptr && fail->has_data());
}

bool Native::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (fail !=  nullptr && fail->has_operation());
}

std::string Native::Utd::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Utd::Engine::Fail>();
        }
        return fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    return _children;
}

void Native::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail" || name == "mode")
        return true;
    return false;
}

Native::Utd::Engine::Fail::Fail()
    :
    close{YType::empty, "close"}
{

    yang_name = "fail"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Utd::Engine::Fail::~Fail()
{
}

bool Native::Utd::Engine::Fail::has_data() const
{
    if (is_presence_container) return true;
    return close.is_set;
}

bool Native::Utd::Engine::Fail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close.yfilter);
}

std::string Native::Utd::Engine::Fail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::Engine::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::Engine::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close.is_set || is_set(close.yfilter)) leaf_name_data.push_back(close.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Utd::Engine::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Utd::Engine::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Utd::Engine::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close")
    {
        close = value;
        close.value_namespace = name_space;
        close.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Utd::Engine::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close")
    {
        close.yfilter = yfilter;
    }
}

bool Native::Utd::Engine::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close")
        return true;
    return false;
}

Native::UtdSt::UtdSt()
    :
    utd(std::make_shared<Native::UtdSt::Utd>())
{
    utd->parent = this;

    yang_name = "utd-st"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::~UtdSt()
{
}

bool Native::UtdSt::has_data() const
{
    if (is_presence_container) return true;
    return (utd !=  nullptr && utd->has_data());
}

bool Native::UtdSt::has_operation() const
{
    return is_set(yfilter)
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdSt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdSt::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utd != nullptr)
    {
        _children["utd"] = utd;
    }

    return _children;
}

void Native::UtdSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd")
        return true;
    return false;
}

Native::UtdSt::Utd::Utd()
    :
    web_filter(std::make_shared<Native::UtdSt::Utd::WebFilter>())
    , engine(std::make_shared<Native::UtdSt::Utd::Engine>())
    , threat_inspection(std::make_shared<Native::UtdSt::Utd::ThreatInspection>())
{
    web_filter->parent = this;
    engine->parent = this;
    threat_inspection->parent = this;

    yang_name = "utd"; yang_parent_name = "utd-st"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::~Utd()
{
}

bool Native::UtdSt::Utd::has_data() const
{
    if (is_presence_container) return true;
    return (web_filter !=  nullptr && web_filter->has_data())
	|| (engine !=  nullptr && engine->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data());
}

bool Native::UtdSt::Utd::has_operation() const
{
    return is_set(yfilter)
	|| (web_filter !=  nullptr && web_filter->has_operation())
	|| (engine !=  nullptr && engine->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation());
}

std::string Native::UtdSt::Utd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdSt::Utd::WebFilter>();
        }
        return web_filter;
    }

    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::UtdSt::Utd::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdSt::Utd::ThreatInspection>();
        }
        return threat_inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(web_filter != nullptr)
    {
        _children["web-filter"] = web_filter;
    }

    if(engine != nullptr)
    {
        _children["engine"] = engine;
    }

    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    return _children;
}

void Native::UtdSt::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "web-filter" || name == "engine" || name == "threat-inspection")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::WebFilter()
    :
    block(std::make_shared<Native::UtdSt::Utd::WebFilter::Block>())
    , sourcedb(this, {"id"})
    , url(std::make_shared<Native::UtdSt::Utd::WebFilter::Url>())
    , domain(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain>())
{
    block->parent = this;
    url->parent = this;
    domain->parent = this;

    yang_name = "web-filter"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::~WebFilter()
{
}

bool Native::UtdSt::Utd::WebFilter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourcedb.len(); index++)
    {
        if(sourcedb[index]->has_data())
            return true;
    }
    return (block !=  nullptr && block->has_data())
	|| (url !=  nullptr && url->has_data())
	|| (domain !=  nullptr && domain->has_data());
}

bool Native::UtdSt::Utd::WebFilter::has_operation() const
{
    for (std::size_t index=0; index<sourcedb.len(); index++)
    {
        if(sourcedb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (block !=  nullptr && block->has_operation())
	|| (url !=  nullptr && url->has_operation())
	|| (domain !=  nullptr && domain->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdSt::Utd::WebFilter::Block>();
        }
        return block;
    }

    if(child_yang_name == "sourcedb")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Sourcedb>();
        ent_->parent = this;
        sourcedb.append(ent_);
        return ent_;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdSt::Utd::WebFilter::Url>();
        }
        return url;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain>();
        }
        return domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(block != nullptr)
    {
        _children["block"] = block;
    }

    count_ = 0;
    for (auto ent_ : sourcedb.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block" || name == "sourcedb" || name == "url" || name == "domain")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::Block()
    :
    local_server(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer>())
    , page(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::Page>())
{
    local_server->parent = this;
    page->parent = this;

    yang_name = "block"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Block::~Block()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::has_data() const
{
    if (is_presence_container) return true;
    return (local_server !=  nullptr && local_server->has_data())
	|| (page !=  nullptr && page->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Block::has_operation() const
{
    return is_set(yfilter)
	|| (local_server !=  nullptr && local_server->has_operation())
	|| (page !=  nullptr && page->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-server")
    {
        if(local_server == nullptr)
        {
            local_server = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer>();
        }
        return local_server;
    }

    if(child_yang_name == "page")
    {
        if(page == nullptr)
        {
            page = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::Page>();
        }
        return page;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_server != nullptr)
    {
        _children["local-server"] = local_server;
    }

    if(page != nullptr)
    {
        _children["page"] = page;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-server" || name == "page")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::LocalServer()
    :
    profile(this, {"id"})
{

    yang_name = "local-server"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::~LocalServer()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Profile()
    :
    id{YType::str, "id"},
    http_ports{YType::str, "http-ports"}
        ,
    block_page_interface(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface>())
    , content(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content>())
{
    block_page_interface->parent = this;
    content->parent = this;

    yang_name = "profile"; yang_parent_name = "local-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| http_ports.is_set
	|| (block_page_interface !=  nullptr && block_page_interface->has_data())
	|| (content !=  nullptr && content->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(http_ports.yfilter)
	|| (block_page_interface !=  nullptr && block_page_interface->has_operation())
	|| (content !=  nullptr && content->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/local-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (http_ports.is_set || is_set(http_ports.yfilter)) leaf_name_data.push_back(http_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-page-interface")
    {
        if(block_page_interface == nullptr)
        {
            block_page_interface = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface>();
        }
        return block_page_interface;
    }

    if(child_yang_name == "content")
    {
        if(content == nullptr)
        {
            content = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content>();
        }
        return content;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(block_page_interface != nullptr)
    {
        _children["block-page-interface"] = block_page_interface;
    }

    if(content != nullptr)
    {
        _children["content"] = content;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http-ports")
    {
        http_ports = value;
        http_ports.value_namespace = name_space;
        http_ports.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "http-ports")
    {
        http_ports.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-page-interface" || name == "content" || name == "id" || name == "http-ports")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::BlockPageInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "block-page-interface"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::~BlockPageInterface()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-page-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::Content()
    :
    text{YType::str, "text"},
    file{YType::str, "file"}
{

    yang_name = "content"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::~Content()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_data() const
{
    if (is_presence_container) return true;
    return text.is_set
	|| file.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(file.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "content";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text" || name == "file")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::Page()
    :
    profile(this, {"id"})
{

    yang_name = "page"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Block::Page::~Page()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "page";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::Page::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::Page::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::Page::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::Page::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::Page::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Block::Page::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::Profile::Profile()
    :
    id{YType::str, "id"},
    file{YType::str, "file"},
    redirect_url{YType::str, "redirect-url"},
    text{YType::str, "text"}
{

    yang_name = "profile"; yang_parent_name = "page"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Block::Page::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| file.is_set
	|| redirect_url.is_set
	|| text.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(redirect_url.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (redirect_url.is_set || is_set(redirect_url.yfilter)) leaf_name_data.push_back(redirect_url.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Block::Page::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-url")
    {
        redirect_url = value;
        redirect_url.value_namespace = name_space;
        redirect_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::Page::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "redirect-url")
    {
        redirect_url.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "file" || name == "redirect-url" || name == "text")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Sourcedb()
    :
    id{YType::str, "id"}
        ,
    logging(std::make_shared<Native::UtdSt::Utd::WebFilter::Sourcedb::Logging>())
{
    logging->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Sourcedb::~Sourcedb()
{
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::WebFilter::Sourcedb::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "id")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Url()
    :
    profile(this, {"id"})
{

    yang_name = "url"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Url::~Url()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Profile()
    :
    id{YType::str, "id"},
    alert{YType::enumeration, "alert"}
        ,
    blacklist(nullptr) // presence node
    , categories(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories>())
    , block(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Block>())
    , log(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Log>())
    , reputation(nullptr) // presence node
    , sourcedb(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb>())
    , whitelist(nullptr) // presence node
{
    categories->parent = this;
    block->parent = this;
    log->parent = this;
    sourcedb->parent = this;

    yang_name = "profile"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : alert.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| (blacklist !=  nullptr && blacklist->has_data())
	|| (categories !=  nullptr && categories->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (reputation !=  nullptr && reputation->has_data())
	|| (sourcedb !=  nullptr && sourcedb->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_operation() const
{
    for (auto const & leaf : alert.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| (blacklist !=  nullptr && blacklist->has_operation())
	|| (categories !=  nullptr && categories->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (reputation !=  nullptr && reputation->has_operation())
	|| (sourcedb !=  nullptr && sourcedb->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto alert_name_datas = alert.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), alert_name_datas.begin(), alert_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blacklist")
    {
        if(blacklist == nullptr)
        {
            blacklist = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist>();
        }
        return blacklist;
    }

    if(child_yang_name == "categories")
    {
        if(categories == nullptr)
        {
            categories = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories>();
        }
        return categories;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Block>();
        }
        return block;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Log>();
        }
        return log;
    }

    if(child_yang_name == "reputation")
    {
        if(reputation == nullptr)
        {
            reputation = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation>();
        }
        return reputation;
    }

    if(child_yang_name == "sourcedb")
    {
        if(sourcedb == nullptr)
        {
            sourcedb = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb>();
        }
        return sourcedb;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(blacklist != nullptr)
    {
        _children["blacklist"] = blacklist;
    }

    if(categories != nullptr)
    {
        _children["categories"] = categories;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(reputation != nullptr)
    {
        _children["reputation"] = reputation;
    }

    if(sourcedb != nullptr)
    {
        _children["sourcedb"] = sourcedb;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert.append(value);
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blacklist" || name == "categories" || name == "block" || name == "log" || name == "reputation" || name == "sourcedb" || name == "whitelist" || name == "id" || name == "alert")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::Blacklist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "blacklist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::~Blacklist()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blacklist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "blacklist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Categories()
    :
    allow(nullptr) // presence node
    , block(nullptr) // presence node
{

    yang_name = "categories"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::~Categories()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_data() const
{
    if (is_presence_container) return true;
    return (allow !=  nullptr && allow->has_data())
	|| (block !=  nullptr && block->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (block !=  nullptr && block->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "categories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block>();
        }
        return block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allow != nullptr)
    {
        _children["allow"] = allow;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Allow()
    :
    category(this, {"name"})
{

    yang_name = "allow"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::~Allow()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_operation() const
{
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::~Category()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Block()
    :
    category(this, {"name"})
{

    yang_name = "block"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::~Block()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_operation() const
{
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::~Category()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Block::Block()
    :
    local_server{YType::str, "local-server"},
    page_profile{YType::str, "page-profile"}
{

    yang_name = "block"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Block::~Block()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_data() const
{
    if (is_presence_container) return true;
    return local_server.is_set
	|| page_profile.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_server.yfilter)
	|| ydk::is_set(page_profile.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_server.is_set || is_set(local_server.yfilter)) leaf_name_data.push_back(local_server.get_name_leafdata());
    if (page_profile.is_set || is_set(page_profile.yfilter)) leaf_name_data.push_back(page_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-server")
    {
        local_server = value;
        local_server.value_namespace = name_space;
        local_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "page-profile")
    {
        page_profile = value;
        page_profile.value_namespace = name_space;
        page_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-server")
    {
        local_server.yfilter = yfilter;
    }
    if(value_path == "page-profile")
    {
        page_profile.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-server" || name == "page-profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Log()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "log"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Log::~Log()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::Reputation()
    :
    block_threshold{YType::enumeration, "block-threshold"}
{

    yang_name = "reputation"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::~Reputation()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_data() const
{
    if (is_presence_container) return true;
    return block_threshold.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_threshold.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reputation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_threshold.is_set || is_set(block_threshold.yfilter)) leaf_name_data.push_back(block_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-threshold")
    {
        block_threshold = value;
        block_threshold.value_namespace = name_space;
        block_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-threshold")
    {
        block_threshold.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-threshold")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Sourcedb()
    :
    fail(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail>())
{
    fail->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::~Sourcedb()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_data() const
{
    if (is_presence_container) return true;
    return (fail !=  nullptr && fail->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| (fail !=  nullptr && fail->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail>();
        }
        return fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::Fail()
    :
    close{YType::empty, "close"}
{

    yang_name = "fail"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::~Fail()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_data() const
{
    if (is_presence_container) return true;
    return close.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close.is_set || is_set(close.yfilter)) leaf_name_data.push_back(close.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close")
    {
        close = value;
        close.value_namespace = name_space;
        close.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close")
    {
        close.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::Whitelist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Domain()
    :
    profile(this, {"id"})
{

    yang_name = "domain"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Domain::~Domain()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Profile()
    :
    id{YType::str, "id"},
    alert{YType::enumeration, "alert"}
        ,
    blacklist(nullptr) // presence node
    , redirect_server(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer>())
    , whitelist(nullptr) // presence node
{
    redirect_server->parent = this;

    yang_name = "profile"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| alert.is_set
	|| (blacklist !=  nullptr && blacklist->has_data())
	|| (redirect_server !=  nullptr && redirect_server->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| (blacklist !=  nullptr && blacklist->has_operation())
	|| (redirect_server !=  nullptr && redirect_server->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blacklist")
    {
        if(blacklist == nullptr)
        {
            blacklist = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist>();
        }
        return blacklist;
    }

    if(child_yang_name == "redirect-server")
    {
        if(redirect_server == nullptr)
        {
            redirect_server = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer>();
        }
        return redirect_server;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(blacklist != nullptr)
    {
        _children["blacklist"] = blacklist;
    }

    if(redirect_server != nullptr)
    {
        _children["redirect-server"] = redirect_server;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blacklist" || name == "redirect-server" || name == "whitelist" || name == "id" || name == "alert")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::Blacklist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "blacklist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::~Blacklist()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blacklist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "blacklist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::RedirectServer()
    :
    external{YType::str, "external"},
    local_block_server{YType::str, "local-block-server"}
{

    yang_name = "redirect-server"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::~RedirectServer()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| local_block_server.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(local_block_server.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (local_block_server.is_set || is_set(local_block_server.yfilter)) leaf_name_data.push_back(local_block_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-block-server")
    {
        local_block_server = value;
        local_block_server.value_namespace = name_space;
        local_block_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "local-block-server")
    {
        local_block_server.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "local-block-server")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::Whitelist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Engine()
    :
    advanced(nullptr) // presence node
    , standard(nullptr) // presence node
{

    yang_name = "engine"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::~Engine()
{
}

bool Native::UtdSt::Utd::Engine::has_data() const
{
    if (is_presence_container) return true;
    return (advanced !=  nullptr && advanced->has_data())
	|| (standard !=  nullptr && standard->has_data());
}

bool Native::UtdSt::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdSt::Utd::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::UtdSt::Utd::Engine::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdSt::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advanced != nullptr)
    {
        _children["advanced"] = advanced;
    }

    if(standard != nullptr)
    {
        _children["standard"] = standard;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "standard")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Advanced::Advanced()
    :
    threat(std::make_shared<Native::UtdSt::Utd::Engine::Advanced::Threat>())
{
    threat->parent = this;

    yang_name = "advanced"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdSt::Utd::Engine::Advanced::~Advanced()
{
}

bool Native::UtdSt::Utd::Engine::Advanced::has_data() const
{
    if (is_presence_container) return true;
    return (threat !=  nullptr && threat->has_data());
}

bool Native::UtdSt::Utd::Engine::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Advanced::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdSt::Utd::Engine::Advanced::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threat != nullptr)
    {
        _children["threat"] = threat;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threat")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Advanced::Threat::Threat()
    :
    detection{YType::empty, "detection"}
{

    yang_name = "threat"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Advanced::Threat::~Threat()
{
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_data() const
{
    if (is_presence_container) return true;
    return detection.is_set;
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Advanced::Threat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/advanced/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Advanced::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Advanced::Threat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Advanced::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Advanced::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Advanced::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Advanced::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::Standard()
    :
    logging(std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging>())
    , threat_inspection(nullptr) // presence node
    , web_filter(nullptr) // presence node
{
    logging->parent = this;

    yang_name = "standard"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdSt::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdSt::Utd::Engine::Standard::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data())
	|| (web_filter !=  nullptr && web_filter->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation())
	|| (web_filter !=  nullptr && web_filter->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection>();
        }
        return threat_inspection;
    }

    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdSt::Utd::Engine::Standard::WebFilter>();
        }
        return web_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    if(web_filter != nullptr)
    {
        _children["web-filter"] = web_filter;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "threat-inspection" || name == "web-filter")
        return true;
    return false;
}

const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_secure {1, "must-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Switch::Provision::ws_c2960x_24pd_l {0, "ws-c2960x-24pd-l"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48ps {1, "ws-c3650-48ps"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_24ps {2, "ws-c3650-24ps"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_48p {3, "ws-c3850-48p"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24p {4, "ws-c3850-24p"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_48t {5, "ws-c3850-48t"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24t {6, "ws-c3850-24t"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_48f {7, "ws-c3850-48f"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_48u {8, "ws-c3850-48u"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24u {9, "ws-c3850-24u"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_12x48u {10, "ws-c3850-12x48u"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24xu {11, "ws-c3850-24xu"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24ux {12, "ws-c3850-24ux"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_12s {13, "ws-c3850-12s"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24s {14, "ws-c3850-24s"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_12xs {15, "ws-c3850-12xs"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_24xs {16, "ws-c3850-24xs"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_48xs {17, "ws-c3850-48xs"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_12x48fd {18, "ws-c3650-12x48fd"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_12x48uq {19, "ws-c3650-12x48uq"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_12x48ur {20, "ws-c3650-12x48ur"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_12x48uz {21, "ws-c3650-12x48uz"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_24pd {22, "ws-c3650-24pd"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_24pdm {23, "ws-c3650-24pdm"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_24td {24, "ws-c3650-24td"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_24ts {25, "ws-c3650-24ts"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48fqm {26, "ws-c3650-48fqm"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48pd {27, "ws-c3650-48pd"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48pq {28, "ws-c3650-48pq"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48td {29, "ws-c3650-48td"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48tq {30, "ws-c3650-48tq"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_48ts {31, "ws-c3650-48ts"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_8x24pd {32, "ws-c3650-8x24pd"};
const Enum::YLeaf Native::Switch::Provision::ws_c3650_8x24uq {33, "ws-c3650-8x24uq"};
const Enum::YLeaf Native::Switch::Provision::ws_c3750x_24p {34, "ws-c3750x-24p"};
const Enum::YLeaf Native::Switch::Provision::ws_c3750x_12s {35, "ws-c3750x-12s"};
const Enum::YLeaf Native::Switch::Provision::ws_c3850_12x48au {36, "ws-c3850-12x48au"};
const Enum::YLeaf Native::Switch::Provision::c9300_24p {37, "c9300-24p"};
const Enum::YLeaf Native::Switch::Provision::c9300_24t {38, "c9300-24t"};
const Enum::YLeaf Native::Switch::Provision::c9300_24u {39, "c9300-24u"};
const Enum::YLeaf Native::Switch::Provision::c9300_48p {40, "c9300-48p"};
const Enum::YLeaf Native::Switch::Provision::c9300_48t {41, "c9300-48t"};
const Enum::YLeaf Native::Switch::Provision::c9300_48u {42, "c9300-48u"};

const Enum::YLeaf Native::SwitchVirtual::Switch::Mode::virtual_ {0, "virtual"};

const Enum::YLeaf Native::Openflow::Switch::ProtocolVersion::Y_1__DOT__0 {0, "1.0"};
const Enum::YLeaf Native::Openflow::Switch::ProtocolVersion::Y_1__DOT__3 {1, "1.3"};
const Enum::YLeaf Native::Openflow::Switch::ProtocolVersion::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Openflow::Switch::DataplaneDefault::secure {0, "secure"};
const Enum::YLeaf Native::Openflow::Switch::DataplaneDefault::standalone {1, "standalone"};

const Enum::YLeaf Native::Openflow::Switch::DefaultMiss::continue_drop {0, "continue-drop"};
const Enum::YLeaf Native::Openflow::Switch::DefaultMiss::drop {1, "drop"};

const Enum::YLeaf Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::Security::none {0, "none"};
const Enum::YLeaf Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::Security::tls {1, "tls"};

const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::connect {0, "connect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::disconnect {1, "disconnect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::route_check {2, "route-check"};

const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::appletalk {0, "appletalk"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::bridge {1, "bridge"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns {2, "clns"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_es {3, "clns_es"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_is {4, "clns_is"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet {5, "decnet"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_node {6, "decnet_node"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L1 {7, "decnet_router-L1"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L2 {8, "decnet_router-L2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ip {9, "ip"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipv6 {10, "ipv6"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipx {11, "ipx"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::llc2 {12, "llc2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::netbios {13, "netbios"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::novell {14, "novell"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::vines {15, "vines"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::xns {16, "xns"};

const Enum::YLeaf Native::DialerList::Protocol::Access::deny {0, "deny"};
const Enum::YLeaf Native::DialerList::Protocol::Access::list {1, "list"};
const Enum::YLeaf Native::DialerList::Protocol::Access::permit {2, "permit"};

const Enum::YLeaf Native::Utd::Engine::Mode::standard {0, "standard"};
const Enum::YLeaf Native::Utd::Engine::Mode::advanced {1, "advanced"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::debug {0, "debug"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::error {1, "error"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::info {2, "info"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::trace {3, "trace"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::warning {4, "warning"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::all {0, "all"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::blacklist {1, "blacklist"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::categories_reputation {2, "categories-reputation"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::whitelist {3, "whitelist"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::detailed {0, "detailed"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::error {1, "error"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::info {2, "info"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::high_risk {0, "high-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::low_risk {1, "low-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::moderate_risk {2, "moderate-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::suspicious {3, "suspicious"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::trustworthy {4, "trustworthy"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::all {0, "all"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::blacklist {1, "blacklist"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::whitelist {2, "whitelist"};


}
}

