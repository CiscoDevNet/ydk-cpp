
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

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
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

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Default::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::No()
    :
    permit(std::make_shared<Native::Arp::AccessList::No::Permit>())
    , deny(std::make_shared<Native::Arp::AccessList::No::Deny>())
{
    permit->parent = this;
    deny->parent = this;

    yang_name = "no"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::~No()
{
}

bool Native::Arp::AccessList::No::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data());
}

bool Native::Arp::AccessList::No::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation());
}

std::string Native::Arp::AccessList::No::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::No::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::No::Deny>();
        }
        return deny;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    return _children;
}

void Native::Arp::AccessList::No::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Ip>())
    , request(std::make_shared<Native::Arp::AccessList::No::Permit::Request>())
    , response(std::make_shared<Native::Arp::AccessList::No::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::~Permit()
{
}

bool Native::Arp::AccessList::No::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::No::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::No::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::No::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Ip::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
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

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::No::Permit::Request::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::~Response()
{
}

bool Native::Arp::AccessList::No::Permit::Response::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Deny()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Deny::Ip>())
    , request(std::make_shared<Native::Arp::AccessList::No::Deny::Request>())
    , response(std::make_shared<Native::Arp::AccessList::No::Deny::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "deny"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::~Deny()
{
}

bool Native::Arp::AccessList::No::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::No::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Deny::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::No::Deny::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::No::Deny::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::has_data() const
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

bool Native::Arp::AccessList::No::Deny::Ip::has_operation() const
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

std::string Native::Arp::AccessList::No::Deny::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Deny::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::has_data() const
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

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::get_children() const
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

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

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

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{

    yang_name = "esmc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Esmc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Esmc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Esmc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Esmc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Esmc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Native::BbaGroup::BbaGroup()
    :
    pppoe(this, {"id"})
{

    yang_name = "bba-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::BbaGroup::~BbaGroup()
{
}

bool Native::BbaGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pppoe.len(); index++)
    {
        if(pppoe[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BbaGroup::has_operation() const
{
    for (std::size_t index=0; index<pppoe.len(); index++)
    {
        if(pppoe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BbaGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bba-group:bba-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        auto ent_ = std::make_shared<Native::BbaGroup::Pppoe>();
        ent_->parent = this;
        pppoe.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pppoe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::BbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::Pppoe()
    :
    id{YType::str, "id"},
    virtual_template{YType::uint16, "virtual-template"}
        ,
    vendor_tag(std::make_shared<Native::BbaGroup::Pppoe::VendorTag>())
{
    vendor_tag->parent = this;

    yang_name = "pppoe"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::BbaGroup::Pppoe::~Pppoe()
{
}

bool Native::BbaGroup::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| virtual_template.is_set
	|| (vendor_tag !=  nullptr && vendor_tag->has_data());
}

bool Native::BbaGroup::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| (vendor_tag !=  nullptr && vendor_tag->has_operation());
}

std::string Native::BbaGroup::Pppoe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-bba-group:bba-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BbaGroup::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-tag")
    {
        if(vendor_tag == nullptr)
        {
            vendor_tag = std::make_shared<Native::BbaGroup::Pppoe::VendorTag>();
        }
        return vendor_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vendor_tag != nullptr)
    {
        _children["vendor-tag"] = vendor_tag;
    }

    return _children;
}

void Native::BbaGroup::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-tag" || name == "id" || name == "virtual-template")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::VendorTag()
    :
    strip{YType::empty, "strip"}
        ,
    circuit_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>())
    , dsl_sync_rate(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>())
    , remote_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>())
{
    circuit_id->parent = this;
    dsl_sync_rate->parent = this;
    remote_id->parent = this;

    yang_name = "vendor-tag"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::BbaGroup::Pppoe::VendorTag::~VendorTag()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::has_data() const
{
    if (is_presence_container) return true;
    return strip.is_set
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::BbaGroup::Pppoe::VendorTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strip.yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::BbaGroup::Pppoe::VendorTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strip.is_set || is_set(strip.yfilter)) leaf_name_data.push_back(strip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::Pppoe::VendorTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "dsl-sync-rate")
    {
        if(dsl_sync_rate == nullptr)
        {
            dsl_sync_rate = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>();
        }
        return dsl_sync_rate;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::Pppoe::VendorTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    if(dsl_sync_rate != nullptr)
    {
        _children["dsl-sync-rate"] = dsl_sync_rate;
    }

    if(remote_id != nullptr)
    {
        _children["remote-id"] = remote_id;
    }

    return _children;
}

void Native::BbaGroup::Pppoe::VendorTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "strip")
    {
        strip = value;
        strip.value_namespace = name_space;
        strip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strip")
    {
        strip.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id" || name == "dsl-sync-rate" || name == "remote-id" || name == "strip")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::CircuitId()
    :
    service{YType::empty, "service"}
{

    yang_name = "circuit-id"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::~CircuitId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::BbaGroup::Pppoe::VendorTag::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::DslSyncRate()
    :
    service{YType::empty, "service"}
{

    yang_name = "dsl-sync-rate"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::~DslSyncRate()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsl-sync-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::RemoteId()
    :
    service{YType::empty, "service"}
{

    yang_name = "remote-id"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::~RemoteId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::BbaGroup::Pppoe::VendorTag::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Cef::Cef()
    :
    table(std::make_shared<Native::Cef::Table>())
{
    table->parent = this;

    yang_name = "cef"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::~Cef()
{
}

bool Native::Cef::has_data() const
{
    if (is_presence_container) return true;
    return (table !=  nullptr && table->has_data());
}

bool Native::Cef::has_operation() const
{
    return is_set(yfilter)
	|| (table !=  nullptr && table->has_operation());
}

std::string Native::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        if(table == nullptr)
        {
            table = std::make_shared<Native::Cef::Table>();
        }
        return table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(table != nullptr)
    {
        _children["table"] = table;
    }

    return _children;
}

void Native::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Cef::Table::Table()
    :
    rate_monitor_period{YType::uint8, "rate-monitor-period"}
        ,
    output_chain(std::make_shared<Native::Cef::Table::OutputChain>())
    , consistency_check(std::make_shared<Native::Cef::Table::ConsistencyCheck>())
    , download(std::make_shared<Native::Cef::Table::Download>())
{
    output_chain->parent = this;
    consistency_check->parent = this;
    download->parent = this;

    yang_name = "table"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::~Table()
{
}

bool Native::Cef::Table::has_data() const
{
    if (is_presence_container) return true;
    return rate_monitor_period.is_set
	|| (output_chain !=  nullptr && output_chain->has_data())
	|| (consistency_check !=  nullptr && consistency_check->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::Cef::Table::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_monitor_period.yfilter)
	|| (output_chain !=  nullptr && output_chain->has_operation())
	|| (consistency_check !=  nullptr && consistency_check->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Cef::Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_monitor_period.is_set || is_set(rate_monitor_period.yfilter)) leaf_name_data.push_back(rate_monitor_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-chain")
    {
        if(output_chain == nullptr)
        {
            output_chain = std::make_shared<Native::Cef::Table::OutputChain>();
        }
        return output_chain;
    }

    if(child_yang_name == "consistency-check")
    {
        if(consistency_check == nullptr)
        {
            consistency_check = std::make_shared<Native::Cef::Table::ConsistencyCheck>();
        }
        return consistency_check;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Cef::Table::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output_chain != nullptr)
    {
        _children["output-chain"] = output_chain;
    }

    if(consistency_check != nullptr)
    {
        _children["consistency-check"] = consistency_check;
    }

    if(download != nullptr)
    {
        _children["download"] = download;
    }

    return _children;
}

void Native::Cef::Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period = value;
        rate_monitor_period.value_namespace = name_space;
        rate_monitor_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-chain" || name == "consistency-check" || name == "download" || name == "rate-monitor-period")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::OutputChain()
    :
    build(std::make_shared<Native::Cef::Table::OutputChain::Build>())
{
    build->parent = this;

    yang_name = "output-chain"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::~OutputChain()
{
}

bool Native::Cef::Table::OutputChain::has_data() const
{
    if (is_presence_container) return true;
    return (build !=  nullptr && build->has_data());
}

bool Native::Cef::Table::OutputChain::has_operation() const
{
    return is_set(yfilter)
	|| (build !=  nullptr && build->has_operation());
}

std::string Native::Cef::Table::OutputChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::OutputChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "build")
    {
        if(build == nullptr)
        {
            build = std::make_shared<Native::Cef::Table::OutputChain::Build>();
        }
        return build;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::OutputChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(build != nullptr)
    {
        _children["build"] = build;
    }

    return _children;
}

void Native::Cef::Table::OutputChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "build")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Build()
    :
    favor(std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>())
    , indirection(std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>())
    , inplace_modify(std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>())
{
    favor->parent = this;
    indirection->parent = this;
    inplace_modify->parent = this;

    yang_name = "build"; yang_parent_name = "output-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::~Build()
{
}

bool Native::Cef::Table::OutputChain::Build::has_data() const
{
    if (is_presence_container) return true;
    return (favor !=  nullptr && favor->has_data())
	|| (indirection !=  nullptr && indirection->has_data())
	|| (inplace_modify !=  nullptr && inplace_modify->has_data());
}

bool Native::Cef::Table::OutputChain::Build::has_operation() const
{
    return is_set(yfilter)
	|| (favor !=  nullptr && favor->has_operation())
	|| (indirection !=  nullptr && indirection->has_operation())
	|| (inplace_modify !=  nullptr && inplace_modify->has_operation());
}

std::string Native::Cef::Table::OutputChain::Build::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::OutputChain::Build::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "favor")
    {
        if(favor == nullptr)
        {
            favor = std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>();
        }
        return favor;
    }

    if(child_yang_name == "indirection")
    {
        if(indirection == nullptr)
        {
            indirection = std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>();
        }
        return indirection;
    }

    if(child_yang_name == "inplace-modify")
    {
        if(inplace_modify == nullptr)
        {
            inplace_modify = std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>();
        }
        return inplace_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::OutputChain::Build::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(favor != nullptr)
    {
        _children["favor"] = favor;
    }

    if(indirection != nullptr)
    {
        _children["indirection"] = indirection;
    }

    if(inplace_modify != nullptr)
    {
        _children["inplace-modify"] = inplace_modify;
    }

    return _children;
}

void Native::Cef::Table::OutputChain::Build::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::Build::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::Build::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "favor" || name == "indirection" || name == "inplace-modify")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Favor::Favor()
    :
    convergence_speed{YType::empty, "convergence-speed"},
    memory_utilization{YType::empty, "memory-utilization"}
{

    yang_name = "favor"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::Favor::~Favor()
{
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_data() const
{
    if (is_presence_container) return true;
    return convergence_speed.is_set
	|| memory_utilization.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergence_speed.yfilter)
	|| ydk::is_set(memory_utilization.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "favor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Favor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergence_speed.is_set || is_set(convergence_speed.yfilter)) leaf_name_data.push_back(convergence_speed.get_name_leafdata());
    if (memory_utilization.is_set || is_set(memory_utilization.yfilter)) leaf_name_data.push_back(memory_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::OutputChain::Build::Favor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::OutputChain::Build::Favor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cef::Table::OutputChain::Build::Favor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed = value;
        convergence_speed.value_namespace = name_space;
        convergence_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization = value;
        memory_utilization.value_namespace = name_space;
        memory_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Favor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed.yfilter = yfilter;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-speed" || name == "memory-utilization")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Indirection::Indirection()
    :
    ipv4_to_mpls{YType::empty, "ipv4-to-mpls"},
    ipv6_to_mpls{YType::empty, "ipv6-to-mpls"},
    mpls_end_of_stack{YType::empty, "mpls-end-of-stack"},
    mpls_non_end_of_stack{YType::empty, "mpls-non-end-of-stack"},
    non_recursive_prefix{YType::empty, "non-recursive-prefix"},
    recursive_prefix{YType::empty, "recursive-prefix"}
{

    yang_name = "indirection"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::Indirection::~Indirection()
{
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_to_mpls.is_set
	|| ipv6_to_mpls.is_set
	|| mpls_end_of_stack.is_set
	|| mpls_non_end_of_stack.is_set
	|| non_recursive_prefix.is_set
	|| recursive_prefix.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_to_mpls.yfilter)
	|| ydk::is_set(ipv6_to_mpls.yfilter)
	|| ydk::is_set(mpls_end_of_stack.yfilter)
	|| ydk::is_set(mpls_non_end_of_stack.yfilter)
	|| ydk::is_set(non_recursive_prefix.yfilter)
	|| ydk::is_set(recursive_prefix.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Indirection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_to_mpls.is_set || is_set(ipv4_to_mpls.yfilter)) leaf_name_data.push_back(ipv4_to_mpls.get_name_leafdata());
    if (ipv6_to_mpls.is_set || is_set(ipv6_to_mpls.yfilter)) leaf_name_data.push_back(ipv6_to_mpls.get_name_leafdata());
    if (mpls_end_of_stack.is_set || is_set(mpls_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_end_of_stack.get_name_leafdata());
    if (mpls_non_end_of_stack.is_set || is_set(mpls_non_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_non_end_of_stack.get_name_leafdata());
    if (non_recursive_prefix.is_set || is_set(non_recursive_prefix.yfilter)) leaf_name_data.push_back(non_recursive_prefix.get_name_leafdata());
    if (recursive_prefix.is_set || is_set(recursive_prefix.yfilter)) leaf_name_data.push_back(recursive_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::OutputChain::Build::Indirection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::OutputChain::Build::Indirection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls = value;
        ipv4_to_mpls.value_namespace = name_space;
        ipv4_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls = value;
        ipv6_to_mpls.value_namespace = name_space;
        ipv6_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack = value;
        mpls_end_of_stack.value_namespace = name_space;
        mpls_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack = value;
        mpls_non_end_of_stack.value_namespace = name_space;
        mpls_non_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix = value;
        non_recursive_prefix.value_namespace = name_space;
        non_recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix = value;
        recursive_prefix.value_namespace = name_space;
        recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls.yfilter = yfilter;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls.yfilter = yfilter;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix.yfilter = yfilter;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-to-mpls" || name == "ipv6-to-mpls" || name == "mpls-end-of-stack" || name == "mpls-non-end-of-stack" || name == "non-recursive-prefix" || name == "recursive-prefix")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::InplaceModify()
    :
    load_sharing{YType::empty, "load-sharing"},
    push_counter{YType::empty, "push-counter"}
{

    yang_name = "inplace-modify"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::OutputChain::Build::InplaceModify::~InplaceModify()
{
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_data() const
{
    if (is_presence_container) return true;
    return load_sharing.is_set
	|| push_counter.is_set;
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(push_counter.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inplace-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::InplaceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (push_counter.is_set || is_set(push_counter.yfilter)) leaf_name_data.push_back(push_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::OutputChain::Build::InplaceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::OutputChain::Build::InplaceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-counter")
    {
        push_counter = value;
        push_counter.value_namespace = name_space;
        push_counter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "push-counter")
    {
        push_counter.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "push-counter")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::ConsistencyCheck()
    :
    ipv4(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>())
    , ipv6(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "consistency-check"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::~ConsistencyCheck()
{
}

bool Native::Cef::Table::ConsistencyCheck::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::ConsistencyCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::ConsistencyCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Cef::Table::ConsistencyCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Ipv4()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
        ,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>())
    , type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv4"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::~Ipv4()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_repair != nullptr)
    {
        _children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
        ,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>())
    , scan_rib_ios(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>())
    , scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>())
    , scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_rib_ios->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_data() const
{
    if (is_presence_container) return true;
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-rib-ios")
    {
        if(scan_rib_ios == nullptr)
        {
            scan_rib_ios = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>();
        }
        return scan_rib_ios;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scan_ios_rib != nullptr)
    {
        _children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_rib_ios != nullptr)
    {
        _children["scan-rib-ios"] = scan_rib_ios;
    }

    if(scan_lc_rp != nullptr)
    {
        _children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        _children["scan-rp-lc"] = scan_rp_lc;
    }

    return _children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-rib-ios" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

const Enum::YLeaf Native::BbaGroup::Pppoe::Id::global {0, "global"};


}
}

