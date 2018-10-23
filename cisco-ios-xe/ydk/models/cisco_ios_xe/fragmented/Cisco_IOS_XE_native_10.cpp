
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::Protocol()
    :
    protocols_list(this, {"name"})
{

    yang_name = "protocol"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::~Protocol()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.len(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList>();
        ent_->parent = this;
        protocols_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocols_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::ProtocolsList()
    :
    name{YType::str, "name"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::TunneledTraffic::TunneledTraffic()
    :
    capwap{YType::empty, "capwap"},
    ipv6inip{YType::empty, "ipv6inip"},
    teredo{YType::empty, "teredo"}
{

    yang_name = "tunneled-traffic"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Classification::TunneledTraffic::~TunneledTraffic()
{
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_data() const
{
    if (is_presence_container) return true;
    return capwap.is_set
	|| ipv6inip.is_set
	|| teredo.is_set;
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capwap.yfilter)
	|| ydk::is_set(ipv6inip.yfilter)
	|| ydk::is_set(teredo.yfilter);
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunneled-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::TunneledTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capwap.is_set || is_set(capwap.yfilter)) leaf_name_data.push_back(capwap.get_name_leafdata());
    if (ipv6inip.is_set || is_set(ipv6inip.yfilter)) leaf_name_data.push_back(ipv6inip.get_name_leafdata());
    if (teredo.is_set || is_set(teredo.yfilter)) leaf_name_data.push_back(teredo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Classification::TunneledTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Classification::TunneledTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capwap")
    {
        capwap = value;
        capwap.value_namespace = name_space;
        capwap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip = value;
        ipv6inip.value_namespace = name_space;
        ipv6inip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teredo")
    {
        teredo = value;
        teredo.value_namespace = name_space;
        teredo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capwap")
    {
        capwap.yfilter = yfilter;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip.yfilter = yfilter;
    }
    if(value_path == "teredo")
    {
        teredo.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap" || name == "ipv6inip" || name == "teredo")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
        ,
    composite(std::make_shared<Native::Ip::Nbar::Custom::Composite>())
    , dns(std::make_shared<Native::Ip::Nbar::Custom::Dns>())
    , http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
    , ssl(std::make_shared<Native::Ip::Nbar::Custom::Ssl>())
    , transport(std::make_shared<Native::Ip::Nbar::Custom::Transport>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Ip_>())
{
    composite->parent = this;
    dns->parent = this;
    http->parent = this;
    ssl->parent = this;
    transport->parent = this;
    ip->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (composite !=  nullptr && composite->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (composite !=  nullptr && composite->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "composite")
    {
        if(composite == nullptr)
        {
            composite = std::make_shared<Native::Ip::Nbar::Custom::Composite>();
        }
        return composite;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Custom::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Ip::Nbar::Custom::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Ip::Nbar::Custom::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Ip_>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(composite != nullptr)
    {
        _children["composite"] = composite;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(http != nullptr)
    {
        _children["http"] = http;
    }

    if(ssl != nullptr)
    {
        _children["ssl"] = ssl;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "composite" || name == "dns" || name == "http" || name == "ssl" || name == "transport" || name == "ip" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::Composite()
    :
    server_name(this, {"name"})
{

    yang_name = "composite"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Composite::~Composite()
{
}

bool Native::Ip::Nbar::Custom::Composite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_name.len(); index++)
    {
        if(server_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Composite::has_operation() const
{
    for (std::size_t index=0; index<server_name.len(); index++)
    {
        if(server_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "composite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Composite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-name")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Composite::ServerName>();
        ent_->parent = this;
        server_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Composite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Composite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Composite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Composite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::ServerName::ServerName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "server-name"; yang_parent_name = "composite"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Composite::ServerName::~ServerName()
{
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::ServerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::ServerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Composite::ServerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Composite::ServerName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::Dns()
    :
    domain_name(this, {"name"})
{

    yang_name = "dns"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Custom::Dns::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain_name.len(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Dns::has_operation() const
{
    for (std::size_t index=0; index<domain_name.len(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Dns::DomainName>();
        ent_->parent = this;
        domain_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::DomainName::DomainName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "domain-name"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Dns::DomainName::~DomainName()
{
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Dns::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Dns::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"},
    id{YType::uint16, "id"}
{

    yang_name = "http"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    if (is_presence_container) return true;
    return cookie.is_set
	|| host.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(via.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.yfilter)) leaf_name_data.push_back(via.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "via")
    {
        via = value;
        via.value_namespace = name_space;
        via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "via")
    {
        via.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie" || name == "host" || name == "method" || name == "referer" || name == "url" || name == "user-agent" || name == "version" || name == "via" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::Ssl()
    :
    unique_name(this, {"name"})
{

    yang_name = "ssl"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ssl::~Ssl()
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unique_name.len(); index++)
    {
        if(unique_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Ssl::has_operation() const
{
    for (std::size_t index=0; index<unique_name.len(); index++)
    {
        if(unique_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unique-name")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ssl::UniqueName>();
        ent_->parent = this;
        unique_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unique_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unique-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::UniqueName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"}
{

    yang_name = "unique-name"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::~UniqueName()
{
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::UniqueName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unique-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::UniqueName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Transport()
    :
    tcp(nullptr) // presence node
    , udp(nullptr) // presence node
    , udp_tcp(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::~Transport()
{
}

bool Native::Ip::Nbar::Custom::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (udp_tcp !=  nullptr && udp_tcp->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (udp_tcp !=  nullptr && udp_tcp->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udp-tcp")
    {
        if(udp_tcp == nullptr)
        {
            udp_tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp>();
        }
        return udp_tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(udp_tcp != nullptr)
    {
        _children["udp-tcp"] = udp_tcp;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp" || name == "udp-tcp")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Tcp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::~Tcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Udp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::~Udp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::UdpTcp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp-tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::~UdpTcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Ip_()
    :
    any(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_data() const
{
    if (is_presence_container) return true;
    return (any !=  nullptr && any->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::has_operation() const
{
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any>();
        }
        return any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(any != nullptr)
    {
        _children["any"] = any;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Any()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::~Any()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::ProtocolPack()
    :
    filepath(this, {"filepath"})
{

    yang_name = "protocol-pack"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::ProtocolPack::~ProtocolPack()
{
}

bool Native::Ip::Nbar::ProtocolPack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filepath.len(); index++)
    {
        if(filepath[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::ProtocolPack::has_operation() const
{
    for (std::size_t index=0; index<filepath.len(); index++)
    {
        if(filepath[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-pack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::ProtocolPack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filepath")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::ProtocolPack::Filepath>();
        ent_->parent = this;
        filepath.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::ProtocolPack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filepath.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::ProtocolPack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::ProtocolPack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::ProtocolPack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::Filepath::Filepath()
    :
    filepath{YType::str, "filepath"},
    force{YType::empty, "force"}
{

    yang_name = "filepath"; yang_parent_name = "protocol-pack"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::ProtocolPack::Filepath::~Filepath()
{
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_data() const
{
    if (is_presence_container) return true;
    return filepath.is_set
	|| force.is_set;
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filepath.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/protocol-pack/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filepath";
    ADD_KEY_TOKEN(filepath, "filepath");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::Filepath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filepath.is_set || is_set(filepath.yfilter)) leaf_name_data.push_back(filepath.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::ProtocolPack::Filepath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::ProtocolPack::Filepath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filepath")
    {
        filepath = value;
        filepath.value_namespace = name_space;
        filepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filepath")
    {
        filepath.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath" || name == "force")
        return true;
    return false;
}

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
        ,
    peer(std::make_shared<Native::Ip::Msdp::Peer>())
    , default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
    , description(std::make_shared<Native::Ip::Msdp::Description>())
    , filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
    , keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
    , mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
    , password(std::make_shared<Native::Ip::Msdp::Password>())
    , redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
    , sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
    , sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
    , shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
    , ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
    , vrf(this, {"name"})
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::~Msdp()
{
}

bool Native::Ip::Msdp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::TtlThreshold>();
        }
        return ttl_threshold;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Msdp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        _children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        _children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        _children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        _children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        _children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        _children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        _children["ttl-threshold"] = ttl_threshold;
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

void Native::Ip::Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "vrf" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::DefaultPeer::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::DefaultPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Description::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Password::~Password()
{
}

bool Native::Ip::Msdp::Password::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Ip::Msdp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Password::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Password::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::SaFilter::In>())
    , out(std::make_shared<Native::Ip::Msdp::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::SaFilter::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::SaFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Ip::Msdp::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::SaFilter::In::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::In::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::SaFilter::Out::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::Out::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::SaLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::TtlThreshold::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::TtlThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
        ,
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
    , default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
    , description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
    , filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
    , keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
    , mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
    , password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
    , redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
    , sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
    , sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
    , shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
    , ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Vrf::~Vrf()
{
}

bool Native::Ip::Msdp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Vrf::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Vrf::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>();
        }
        return ttl_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        _children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        _children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        _children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        _children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        _children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        _children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        _children["ttl-threshold"] = ttl_threshold;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "name" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Vrf::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Password::~Password()
{
}

bool Native::Ip::Msdp::Vrf::Password::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Vrf::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Vrf::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>())
    , out(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::Vrf::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::Vrf::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::McrConf::McrConf()
    :
    multicast_routing{YType::empty, "multicast-routing"}
{

    yang_name = "mcr-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::McrConf::~McrConf()
{
}

bool Native::Ip::McrConf::has_data() const
{
    if (is_presence_container) return true;
    return multicast_routing.is_set;
}

bool Native::Ip::McrConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_routing.yfilter);
}

std::string Native::Ip::McrConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::McrConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.yfilter)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::McrConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing = value;
        multicast_routing.value_namespace = name_space;
        multicast_routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::McrConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing.yfilter = yfilter;
    }
}

bool Native::Ip::McrConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-routing")
        return true;
    return false;
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
        ,
    vrf(this, {"name"})
{

    yang_name = "multicast-routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::MulticastRouting::get_children() const
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

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "distributed")
        return true;
    return false;
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{

    yang_name = "vrf"; yang_parent_name = "multicast-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Mroute::Mroute()
    :
    source_address{YType::str, "source-address"},
    subnet_mask{YType::str, "subnet-mask"},
    tunnel{YType::int32, "Tunnel"}
{

    yang_name = "mroute"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Mroute::~Mroute()
{
}

bool Native::Ip::Mroute::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| subnet_mask.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Mroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Mroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Mroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Mroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Mroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Mroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "subnet-mask" || name == "Tunnel")
        return true;
    return false;
}

Native::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
    , signalling(std::make_shared<Native::Ip::Rsvp::Signalling>())
{
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::~Rsvp()
{
}

bool Native::Ip::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Native::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Native::Ip::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    return _children;
}

void Native::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "signalling")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    neighbor(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>())
    , lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>())
{
    neighbor->parent = this;
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Ip::Rsvp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "lifetime" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Neighbor()
    :
    access_list(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>())
    , address(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>())
{
    access_list->parent = this;
    address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::~Neighbor()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return (access_list !=  nullptr && access_list->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::AccessList()
    :
    number(this, {"acl_number"})
    , name(this, {"acl_name"})
{

    yang_name = "access-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::~AccessList()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_operation() const
{
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number>();
        ent_->parent = this;
        number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "name")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Number()
    :
    acl_number{YType::uint8, "acl-number"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "number"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::~Number()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_data() const
{
    if (is_presence_container) return true;
    return acl_number.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number";
    ADD_KEY_TOKEN(acl_number, "acl-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-number" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Name()
    :
    acl_name{YType::str, "acl-name"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "name"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::~Name()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-name" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Address()
    :
    ipv4(this, {"ipv4_address"})
{

    yang_name = "address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::~Address()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_children() const
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

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::~Ipv4()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_address, "ipv4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv4-address" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Signalling()
    :
    initial_retransmit_delay{YType::uint16, "initial-retransmit-delay"}
        ,
    fast_local_repair(std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>())
    , hello(nullptr) // presence node
    , patherr(std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>())
    , rate_limit(nullptr) // presence node
    , refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>())
{
    fast_local_repair->parent = this;
    patherr->parent = this;
    refresh->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Ip::Rsvp::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return initial_retransmit_delay.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (patherr !=  nullptr && patherr->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_retransmit_delay.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (patherr !=  nullptr && patherr->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_retransmit_delay.is_set || is_set(initial_retransmit_delay.yfilter)) leaf_name_data.push_back(initial_retransmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "patherr")
    {
        if(patherr == nullptr)
        {
            patherr = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>();
        }
        return patherr;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Rsvp::Signalling::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fast_local_repair != nullptr)
    {
        _children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    if(patherr != nullptr)
    {
        _children["patherr"] = patherr;
    }

    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay = value;
        initial_retransmit_delay.value_namespace = name_space;
        initial_retransmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "patherr" || name == "rate-limit" || name == "refresh" || name == "initial-retransmit-delay")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    notifications{YType::uint16, "notifications"},
    rate{YType::uint16, "rate"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    if (is_presence_container) return true;
    return notifications.is_set
	|| rate.is_set;
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications" || name == "rate")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    statistics{YType::empty, "statistics"}
        ,
    graceful_restart(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>())
{
    graceful_restart->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| statistics.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "bfd" || name == "statistics")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::GracefulRestart()
    :
    dscp{YType::uint8, "dscp"}
        ,
    mode(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>())
    , refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>())
    , send(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>())
{
    mode->parent = this;
    refresh->parent = this;
    send->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::~GracefulRestart()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "refresh" || name == "send" || name == "dscp")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::Mode()
    :
    full{YType::empty, "full"},
    help_neighbor{YType::empty, "help-neighbor"}
{

    yang_name = "mode"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::~Mode()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_data() const
{
    if (is_presence_container) return true;
    return full.is_set
	|| help_neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full.yfilter)
	|| ydk::is_set(help_neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full.is_set || is_set(full.yfilter)) leaf_name_data.push_back(full.get_name_leafdata());
    if (help_neighbor.is_set || is_set(help_neighbor.yfilter)) leaf_name_data.push_back(help_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full")
    {
        full = value;
        full.value_namespace = name_space;
        full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor = value;
        help_neighbor.value_namespace = name_space;
        help_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full")
    {
        full.yfilter = yfilter;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full" || name == "help-neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::Send()
    :
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "send"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::~Send()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_data() const
{
    if (is_presence_container) return true;
    return recovery_time.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::Patherr()
    :
    state_removal(nullptr) // presence node
{

    yang_name = "patherr"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Patherr::~Patherr()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_data() const
{
    if (is_presence_container) return true;
    return (state_removal !=  nullptr && state_removal->has_data());
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_operation() const
{
    return is_set(yfilter)
	|| (state_removal !=  nullptr && state_removal->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "patherr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Patherr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-removal")
    {
        if(state_removal == nullptr)
        {
            state_removal = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr::StateRemoval>();
        }
        return state_removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Patherr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_removal != nullptr)
    {
        _children["state-removal"] = state_removal;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Patherr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Signalling::Patherr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-removal")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::StateRemoval()
    :
    neighbor{YType::uint8, "neighbor"}
{

    yang_name = "state-removal"; yang_parent_name = "patherr"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::~StateRemoval()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/patherr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::RateLimit::RateLimit()
    :
    burst{YType::uint16, "burst"},
    limit{YType::uint16, "limit"},
    maxsize{YType::uint16, "maxsize"},
    period{YType::uint16, "period"}
{

    yang_name = "rate-limit"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::RateLimit::~RateLimit()
{
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    return burst.is_set
	|| limit.is_set
	|| maxsize.is_set
	|| period.is_set;
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxsize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "maxsize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "limit" || name == "maxsize" || name == "period")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Refresh()
    :
    interval{YType::uint32, "interval"},
    misses{YType::uint8, "misses"}
        ,
    reduction(nullptr) // presence node
{

    yang_name = "refresh"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set
	|| (reduction !=  nullptr && reduction->has_data());
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| (reduction !=  nullptr && reduction->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reduction")
    {
        if(reduction == nullptr)
        {
            reduction = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh::Reduction>();
        }
        return reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reduction != nullptr)
    {
        _children["reduction"] = reduction;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reduction" || name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::Reduction()
    :
    ack_delay{YType::uint16, "ack-delay"}
{

    yang_name = "reduction"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::~Reduction()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_data() const
{
    if (is_presence_container) return true;
    return ack_delay.is_set;
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_delay.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_delay.is_set || is_set(ack_delay.yfilter)) leaf_name_data.push_back(ack_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-delay")
    {
        ack_delay = value;
        ack_delay.value_namespace = name_space;
        ack_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-delay")
    {
        ack_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-delay")
        return true;
    return false;
}

Native::Ip::Http::Http()
    :
    access_class{YType::uint8, "access-class"},
    server{YType::boolean, "server"},
    secure_server{YType::boolean, "secure-server"},
    secure_trustpoint{YType::str, "secure-trustpoint"},
    port{YType::uint16, "port"},
    max_connections{YType::uint16, "max-connections"},
    active_session_modules{YType::str, "active-session-modules"},
    secure_active_session_modules{YType::str, "secure-active-session-modules"},
    secure_client_auth{YType::empty, "secure-client-auth"}
        ,
    authentication(std::make_shared<Native::Ip::Http::Authentication>())
    , timeout_policy(std::make_shared<Native::Ip::Http::TimeoutPolicy>())
    , client(std::make_shared<Native::Ip::Http::Client>())
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
    if (is_presence_container) return true;
    return access_class.is_set
	|| server.is_set
	|| secure_server.is_set
	|| secure_trustpoint.is_set
	|| port.is_set
	|| max_connections.is_set
	|| active_session_modules.is_set
	|| secure_active_session_modules.is_set
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
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(max_connections.yfilter)
	|| ydk::is_set(active_session_modules.yfilter)
	|| ydk::is_set(secure_active_session_modules.yfilter)
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
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (max_connections.is_set || is_set(max_connections.yfilter)) leaf_name_data.push_back(max_connections.get_name_leafdata());
    if (active_session_modules.is_set || is_set(active_session_modules.yfilter)) leaf_name_data.push_back(active_session_modules.get_name_leafdata());
    if (secure_active_session_modules.is_set || is_set(secure_active_session_modules.yfilter)) leaf_name_data.push_back(secure_active_session_modules.get_name_leafdata());
    if (secure_client_auth.is_set || is_set(secure_client_auth.yfilter)) leaf_name_data.push_back(secure_client_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(timeout_policy != nullptr)
    {
        _children["timeout-policy"] = timeout_policy;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    return _children;
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
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-connections")
    {
        max_connections = value;
        max_connections.value_namespace = name_space;
        max_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules = value;
        active_session_modules.value_namespace = name_space;
        active_session_modules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules = value;
        secure_active_session_modules.value_namespace = name_space;
        secure_active_session_modules.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "max-connections")
    {
        max_connections.yfilter = yfilter;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth.yfilter = yfilter;
    }
}

bool Native::Ip::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "timeout-policy" || name == "client" || name == "access-class" || name == "server" || name == "secure-server" || name == "secure-trustpoint" || name == "port" || name == "max-connections" || name == "active-session-modules" || name == "secure-active-session-modules" || name == "secure-client-auth")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Ip::Http::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Ip::Http::TimeoutPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::TimeoutPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Ip::Http::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proxy_server != nullptr)
    {
        _children["proxy-server"] = proxy_server;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Ip::Http::Client::ProxyServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::Client::ProxyServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::Ip::Nat::Nat()
    :
    pool(this, {"id"})
    , inside(std::make_shared<Native::Ip::Nat::Inside>())
    , outside(std::make_shared<Native::Ip::Nat::Outside>())
    , translation(std::make_shared<Native::Ip::Nat::Translation>())
{
    inside->parent = this;
    outside->parent = this;
    translation->parent = this;

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data())
	|| (translation !=  nullptr && translation->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation())
	|| (translation !=  nullptr && translation->has_operation());
}

std::string Native::Ip::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    if(child_yang_name == "translation")
    {
        if(translation == nullptr)
        {
            translation = std::make_shared<Native::Ip::Nat::Translation>();
        }
        return translation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inside != nullptr)
    {
        _children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        _children["outside"] = outside;
    }

    if(translation != nullptr)
    {
        _children["translation"] = translation;
    }

    return _children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "inside" || name == "outside" || name == "translation")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    accounting{YType::str, "accounting"},
    arp_ping{YType::empty, "arp-ping"},
    type{YType::enumeration, "type"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "pool"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| start_address.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| accounting.is_set
	|| arp_ping.is_set
	|| type.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start-address" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "accounting" || name == "arp-ping" || name == "type" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    source(std::make_shared<Native::Ip::Nat::Inside::Source>())
    , destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
{
    source->parent = this;
    destination->parent = this;

    yang_name = "inside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Nat::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    list(this, {"id"})
    , route_map(this, {"route_map_name"})
    , static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"}
        ,
    pool(this, {"name"})
    , pool_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf>())
    , interface(this, {"name"})
    , interface_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf>())
{
    pool_with_vrf->parent = this;
    interface_with_vrf->parent = this;

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return id.is_set
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_data())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_operation())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool-with-vrf")
    {
        if(pool_with_vrf == nullptr)
        {
            pool_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf>();
        }
        return pool_with_vrf;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface-with-vrf")
    {
        if(interface_with_vrf == nullptr)
        {
            interface_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf>();
        }
        return interface_with_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pool_with_vrf != nullptr)
    {
        _children["pool-with-vrf"] = pool_with_vrf;
    }

    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(interface_with_vrf != nullptr)
    {
        _children["interface-with-vrf"] = interface_with_vrf;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "pool-with-vrf" || name == "interface" || name == "interface-with-vrf" || name == "id")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Pool()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
        ,
    redundancy(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::PoolWithVrf()
    :
    pool(this, {"name"})
{

    yang_name = "pool-with-vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::~PoolWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Pool()
    :
    name{YType::str, "name"}
        ,
    redundancy(this, {"name"})
    , vrf(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "pool-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "mapping-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "interface"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::InterfaceWithVrf()
    :
    interface(this, {"name"})
{

    yang_name = "interface-with-vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::~InterfaceWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "interface"; yang_parent_name = "interface-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::Vrf()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    pool(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>())
    , pool_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf>())
    , interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
    , interface_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf>())
{
    pool->parent = this;
    pool_with_vrf->parent = this;
    interface->parent = this;
    interface_with_vrf->parent = this;

    yang_name = "route-map"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (pool !=  nullptr && pool->has_data())
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (pool !=  nullptr && pool->has_operation())
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(route_map_name, "route-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "pool-with-vrf")
    {
        if(pool_with_vrf == nullptr)
        {
            pool_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf>();
        }
        return pool_with_vrf;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "interface-with-vrf")
    {
        if(interface_with_vrf == nullptr)
        {
            interface_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf>();
        }
        return interface_with_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    if(pool_with_vrf != nullptr)
    {
        _children["pool-with-vrf"] = pool_with_vrf;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(interface_with_vrf != nullptr)
    {
        _children["interface-with-vrf"] = interface_with_vrf;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "pool-with-vrf" || name == "interface" || name == "interface-with-vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"},
    reversible{YType::empty, "reversible"}
        ,
    redundancy(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    return pool_name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set
	|| reversible.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| ydk::is_set(reversible.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "pool-name" || name == "overload" || name == "extended" || name == "oer" || name == "reversible")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Msdp::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::all {1, "all"};

const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::all {1, "all"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};


}
}

