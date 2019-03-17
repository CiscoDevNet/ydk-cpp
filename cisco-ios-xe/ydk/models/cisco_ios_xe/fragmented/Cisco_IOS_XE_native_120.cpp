
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_121.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::ClientIpVrf()
    :
    client(this, {"ip", "vrf"})
{

    yang_name = "client-ip-vrf"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::~ClientIpVrf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Client()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"}
        ,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer>())
{
    accounting->parent = this;
    authentication->parent = this;
    calling_station_id->parent = this;
    eap_user->parent = this;
    filter->parent = this;
    key->parent = this;
    message_authenticator->parent = this;
    mode->parent = this;
    pwlan_session->parent = this;
    re_authentication->parent = this;
    session_identifier->parent = this;
    timer->parent = this;

    yang_name = "client"; yang_parent_name = "client-ip-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| vrf.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (calling_station_id !=  nullptr && calling_station_id->has_data())
	|| (eap_user !=  nullptr && eap_user->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (pwlan_session !=  nullptr && pwlan_session->has_data())
	|| (re_authentication !=  nullptr && re_authentication->has_data())
	|| (session_identifier !=  nullptr && session_identifier->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (calling_station_id !=  nullptr && calling_station_id->has_operation())
	|| (eap_user !=  nullptr && eap_user->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (pwlan_session !=  nullptr && pwlan_session->has_operation())
	|| (re_authentication !=  nullptr && re_authentication->has_operation())
	|| (session_identifier !=  nullptr && session_identifier->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(calling_station_id != nullptr)
    {
        _children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        _children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        _children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        _children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        _children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ietf !=  nullptr && ietf->has_data())
	|| (one_byte !=  nullptr && one_byte->has_data())
	|| (three_byte !=  nullptr && three_byte->has_data())
	|| (two_byte !=  nullptr && two_byte->has_data())
	|| (unformatted !=  nullptr && unformatted->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation())
	|| (one_byte !=  nullptr && one_byte->has_operation())
	|| (three_byte !=  nullptr && three_byte->has_operation())
	|| (two_byte !=  nullptr && two_byte->has_operation())
	|| (unformatted !=  nullptr && unformatted->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        _children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        _children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        _children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        _children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        _children["unformatted"] = unformatted;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::ClientIpMaskVrf()
    :
    client(this, {"ip", "mask", "vrf"})
{

    yang_name = "client-ip-mask-vrf"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::~ClientIpMaskVrf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip-mask-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Client()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
        ,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer>())
{
    accounting->parent = this;
    authentication->parent = this;
    calling_station_id->parent = this;
    eap_user->parent = this;
    filter->parent = this;
    key->parent = this;
    message_authenticator->parent = this;
    mode->parent = this;
    pwlan_session->parent = this;
    re_authentication->parent = this;
    session_identifier->parent = this;
    timer->parent = this;

    yang_name = "client"; yang_parent_name = "client-ip-mask-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
	|| vrf.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (calling_station_id !=  nullptr && calling_station_id->has_data())
	|| (eap_user !=  nullptr && eap_user->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (pwlan_session !=  nullptr && pwlan_session->has_data())
	|| (re_authentication !=  nullptr && re_authentication->has_data())
	|| (session_identifier !=  nullptr && session_identifier->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (calling_station_id !=  nullptr && calling_station_id->has_operation())
	|| (eap_user !=  nullptr && eap_user->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (pwlan_session !=  nullptr && pwlan_session->has_operation())
	|| (re_authentication !=  nullptr && re_authentication->has_operation())
	|| (session_identifier !=  nullptr && session_identifier->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip-mask-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(calling_station_id != nullptr)
    {
        _children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        _children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        _children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        _children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        _children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ietf !=  nullptr && ietf->has_data())
	|| (one_byte !=  nullptr && one_byte->has_data())
	|| (three_byte !=  nullptr && three_byte->has_data())
	|| (two_byte !=  nullptr && two_byte->has_data())
	|| (unformatted !=  nullptr && unformatted->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation())
	|| (one_byte !=  nullptr && one_byte->has_operation())
	|| (three_byte !=  nullptr && three_byte->has_operation())
	|| (two_byte !=  nullptr && two_byte->has_operation())
	|| (unformatted !=  nullptr && unformatted->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        _children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        _children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        _children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        _children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        _children["unformatted"] = unformatted;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Send()
    :
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>())
{
    vsa->parent = this;

    yang_name = "send"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Send::~Send()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_data() const
{
    if (is_presence_container) return true;
    return (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_operation() const
{
    return is_set(yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::Vsa()
    :
    rpclient_source_address(nullptr) // presence node
{

    yang_name = "vsa"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return (rpclient_source_address !=  nullptr && rpclient_source_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (rpclient_source_address !=  nullptr && rpclient_source_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpclient-source-address")
    {
        if(rpclient_source_address == nullptr)
        {
            rpclient_source_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress>();
        }
        return rpclient_source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpclient_source_address != nullptr)
    {
        _children["rpclient-source-address"] = rpclient_source_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpclient-source-address")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::RpclientSourceAddress()
    :
    accounting{YType::empty, "accounting"},
    authentication{YType::empty, "authentication"}
{

    yang_name = "rpclient-source-address"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::~RpclientSourceAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| authentication.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpclient-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Sesm()
    :
    port{YType::uint16, "port"}
        ,
    client(this, {"ip"})
    , key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>())
{
    key->parent = this;
    message_authenticator->parent = this;

    yang_name = "sesm"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Sesm::~Sesm()
{
}

bool Native::Aaa::Server::Radius::Sesm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return port.is_set
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "key" || name == "message-authenticator" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Client()
    :
    ip{YType::str, "ip"}
        ,
    vrf(this, {"name"})
    , key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>())
{
    key->parent = this;

    yang_name = "client"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::get_children() const
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

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "key" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>())
{
    key->parent = this;

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::MessageAuthenticator()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "message-authenticator"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Login::Login()
    :
    display{YType::enumeration, "display"},
    success_track_conf_time{YType::uint8, "success-track-conf-time"}
{

    yang_name = "login"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Login::~Login()
{
}

bool Native::Aaa::Login::has_data() const
{
    if (is_presence_container) return true;
    return display.is_set
	|| success_track_conf_time.is_set;
}

bool Native::Aaa::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display.yfilter)
	|| ydk::is_set(success_track_conf_time.yfilter);
}

std::string Native::Aaa::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display.is_set || is_set(display.yfilter)) leaf_name_data.push_back(display.get_name_leafdata());
    if (success_track_conf_time.is_set || is_set(success_track_conf_time.yfilter)) leaf_name_data.push_back(success_track_conf_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display")
    {
        display = value;
        display.value_namespace = name_space;
        display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time = value;
        success_track_conf_time.value_namespace = name_space;
        success_track_conf_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display")
    {
        display.yfilter = yfilter;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display" || name == "success-track-conf-time")
        return true;
    return false;
}

Native::Aaa::Memory::Memory()
    :
    threshold(std::make_shared<Native::Aaa::Memory::Threshold>())
{
    threshold->parent = this;

    yang_name = "memory"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::~Memory()
{
}

bool Native::Aaa::Memory::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Aaa::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Aaa::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Aaa::Memory::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Aaa::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Threshold()
    :
    accounting(std::make_shared<Native::Aaa::Memory::Threshold::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Memory::Threshold::Authentication>())
{
    accounting->parent = this;
    authentication->parent = this;

    yang_name = "threshold"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::~Threshold()
{
}

bool Native::Aaa::Memory::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Memory::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Memory::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Memory::Threshold::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Memory::Threshold::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Aaa::Memory::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Accounting::Accounting()
    :
    disable{YType::uint8, "disable"}
{

    yang_name = "accounting"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::Accounting::~Accounting()
{
}

bool Native::Aaa::Memory::Threshold::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Aaa::Memory::Threshold::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Memory::Threshold::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Authentication::Authentication()
    :
    reject{YType::uint8, "reject"}
{

    yang_name = "authentication"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::Authentication::~Authentication()
{
}

bool Native::Aaa::Memory::Threshold::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return reject.is_set;
}

bool Native::Aaa::Memory::Threshold::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reject.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Memory::Threshold::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reject")
        return true;
    return false;
}

Native::Aaa::Policy::Policy()
    :
    interface_config{YType::enumeration, "interface-config"}
{

    yang_name = "policy"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Policy::~Policy()
{
}

bool Native::Aaa::Policy::has_data() const
{
    if (is_presence_container) return true;
    return interface_config.is_set;
}

bool Native::Aaa::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_config.yfilter);
}

std::string Native::Aaa::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_config.is_set || is_set(interface_config.yfilter)) leaf_name_data.push_back(interface_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-config")
    {
        interface_config = value;
        interface_config.value_namespace = name_space;
        interface_config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-config")
    {
        interface_config.yfilter = yfilter;
    }
}

bool Native::Aaa::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config")
        return true;
    return false;
}

Native::Aaa::Route::Route()
    :
    download(std::make_shared<Native::Aaa::Route::Download>())
{
    download->parent = this;

    yang_name = "route"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Route::~Route()
{
}

bool Native::Aaa::Route::has_data() const
{
    if (is_presence_container) return true;
    return (download !=  nullptr && download->has_data());
}

bool Native::Aaa::Route::has_operation() const
{
    return is_set(yfilter)
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Aaa::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Aaa::Route::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(download != nullptr)
    {
        _children["download"] = download;
    }

    return _children;
}

void Native::Aaa::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download")
        return true;
    return false;
}

Native::Aaa::Route::Download::Download()
    :
    update_period{YType::uint16, "update-period"},
    authorization{YType::str, "authorization"}
{

    yang_name = "download"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Route::Download::~Download()
{
}

bool Native::Aaa::Route::Download::has_data() const
{
    if (is_presence_container) return true;
    return update_period.is_set
	|| authorization.is_set;
}

bool Native::Aaa::Route::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_period.yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string Native::Aaa::Route::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_period.is_set || is_set(update_period.yfilter)) leaf_name_data.push_back(update_period.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Route::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Route::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Route::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-period")
    {
        update_period = value;
        update_period.value_namespace = name_space;
        update_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Route::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-period")
    {
        update_period.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Aaa::Route::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-period" || name == "authorization")
        return true;
    return false;
}

Native::Privilege::Privilege()
    :
    mode(this, {"name"})
{

    yang_name = "privilege"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::has_operation() const
{
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode>();
        ent_->parent = this;
        mode.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mode.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Privilege::Mode::Mode()
    :
    name{YType::enumeration, "name"}
        ,
    all(std::make_shared<Native::Privilege::Mode::All>())
    , level(this, {"privilege"})
    , reset(this, {"command"})
{
    all->parent = this;

    yang_name = "mode"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Privilege::Mode::~Mode()
{
}

bool Native::Privilege::Mode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_data())
            return true;
    }
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::Privilege::Mode::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Privilege::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Privilege::Mode::All>();
        }
        return all;
    }

    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reset")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Reset>();
        ent_->parent = this;
        reset.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "level" || name == "reset" || name == "name")
        return true;
    return false;
}

Native::Privilege::Mode::All::All()
    :
    level(this, {"privilege"})
    , reset(this, {"command"})
{

    yang_name = "all"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::~All()
{
}

bool Native::Privilege::Mode::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Mode::All::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::Mode::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reset")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Reset>();
        ent_->parent = this;
        reset.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::Mode::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::Mode::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "reset")
        return true;
    return false;
}

Native::Privilege::Mode::All::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
        ,
    command_list(this, {"command"})
{

    yang_name = "level"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Level::~Level()
{
}

bool Native::Privilege::Mode::All::Level::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Mode::All::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Mode::All::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(privilege, "privilege");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Level::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::All::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Mode::All::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Mode::All::Level::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::All::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::All::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::All::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::All::Reset::Reset()
    :
    command{YType::str, "command"}
{

    yang_name = "reset"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Reset::~Reset()
{
}

bool Native::Privilege::Mode::All::Reset::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::All::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::All::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::All::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
        ,
    command_list(this, {"command"})
{

    yang_name = "level"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Level::~Level()
{
}

bool Native::Privilege::Mode::Level::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Mode::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Mode::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(privilege, "privilege");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Level::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Mode::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Mode::Level::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::Reset::Reset()
    :
    command{YType::str, "command"}
{

    yang_name = "reset"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Reset::~Reset()
{
}

bool Native::Privilege::Mode::Reset::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
        ,
    on_failure(nullptr) // presence node
    , on_success(nullptr) // presence node
{

    yang_name = "login"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_failure != nullptr)
    {
        _children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        _children["on-success"] = on_success;
    }

    return _children;
}

void Native::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-failure" || name == "on-success" || name == "delay")
        return true;
    return false;
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{

    yang_name = "on-failure"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    if (is_presence_container) return true;
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-failure"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    if (is_presence_container) return true;
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnFailure::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnFailure::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnFailure::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{

    yang_name = "on-success"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    if (is_presence_container) return true;
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-success"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    if (is_presence_container) return true;
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnSuccess::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnSuccess::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnSuccess::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{

    yang_name = "multilink"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ppp:bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ppp:virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "virtual-template")
        return true;
    return false;
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
    , limit(std::make_shared<Native::MacAddressTable::Limit>())
    , learning(std::make_shared<Native::MacAddressTable::Learning>())
{
    evc_xconnect->parent = this;
    limit->parent = this;
    learning->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    if (is_presence_container) return true;
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(yfilter)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::MacAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evc_xconnect != nullptr)
    {
        _children["evc-xconnect"] = evc_xconnect;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    if(learning != nullptr)
    {
        _children["learning"] = learning;
    }

    return _children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc-xconnect" || name == "limit" || name == "learning")
        return true;
    return false;
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{

    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    if (is_presence_container) return true;
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2pt_forward_all.yfilter);
}

std::string Native::MacAddressTable::EvcXconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::EvcXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.yfilter)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
        l2pt_forward_all.value_namespace = name_space;
        l2pt_forward_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::EvcXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::EvcXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2pt-forward-all")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Limit()
    :
    bdomain(this, {"number"})
{

    yang_name = "limit"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdomain.len(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.len(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        auto ent_ = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        ent_->parent = this;
        bdomain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdomain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdomain")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "bdomain"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::Bdomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Limit::Bdomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Limit::Bdomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "action" || name == "maximum")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Learning()
    :
    vlan(this, {"id"})
{

    yang_name = "learning"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Learning::get_children() const
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

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{

    yang_name = "vlan"; yang_parent_name = "learning"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(module.yfilter);
}

std::string Native::MacAddressTable::Learning::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Learning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Learning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "module")
        return true;
    return false;
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
        ,
    main_cpu(nullptr) // presence node
    , policy(std::make_shared<Native::Redundancy::Policy>())
    , timer(std::make_shared<Native::Redundancy::Timer>())
    , interchassis(std::make_shared<Native::Redundancy::Interchassis>())
{
    policy->parent = this;
    timer->parent = this;
    interchassis->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return maintenance_mode.is_set
	|| mode.is_set
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.yfilter)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_cpu != nullptr)
    {
        _children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(interchassis != nullptr)
    {
        _children["interchassis"] = interchassis;
    }

    return _children;
}

void Native::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
        maintenance_mode.value_namespace = name_space;
        maintenance_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-cpu" || name == "policy" || name == "timer" || name == "interchassis" || name == "maintenance-mode" || name == "mode")
        return true;
    return false;
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
    , standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;
    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    if (is_presence_container) return true;
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(yfilter)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_sync != nullptr)
    {
        _children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    return _children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sync" || name == "standby")
        return true;
    return false;
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    running_config{YType::empty, "running-config"},
    config_register{YType::empty, "config-register"},
    bootvar{YType::empty, "bootvar"},
    standard{YType::empty, "standard"}
{

    yang_name = "auto-sync"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    if (is_presence_container) return true;
    return running_config.is_set
	|| config_register.is_set
	|| bootvar.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(bootvar.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::AutoSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (bootvar.is_set || is_set(bootvar.yfilter)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootvar")
    {
        bootvar = value;
        bootvar.value_namespace = name_space;
        bootvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::AutoSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "bootvar")
    {
        bootvar.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::AutoSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-config" || name == "config-register" || name == "bootvar" || name == "standard")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
    , initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;
    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(console != nullptr)
    {
        _children["console"] = console;
    }

    if(initialization != nullptr)
    {
        _children["initialization"] = initialization;
    }

    return _children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console" || name == "initialization")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "console"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    second{YType::uint16, "second"},
    boot_only{YType::empty, "boot-only"}
{

    yang_name = "delay"; yang_parent_name = "initialization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| boot_only.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(boot_only.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (boot_only.is_set || is_set(boot_only.yfilter)) leaf_name_data.push_back(boot_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-only")
    {
        boot_only = value;
        boot_only.value_namespace = name_space;
        boot_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "boot-only")
    {
        boot_only.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "boot-only")
        return true;
    return false;
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_sync != nullptr)
    {
        _children["config-sync"] = config_sync;
    }

    return _children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-sync")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
    , lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;
    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    if (is_presence_container) return true;
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(yfilter)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bulk != nullptr)
    {
        _children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        _children["lbl"] = lbl;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "lbl")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    if (is_presence_container) return true;
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Login::Display::last_failure {0, "last-failure"};
const Enum::YLeaf Native::Aaa::Login::Display::last_success {1, "last-success"};
const Enum::YLeaf Native::Aaa::Login::Display::number_failures {2, "number-failures"};

const Enum::YLeaf Native::Aaa::Policy::InterfaceConfig::allow_subinterface {0, "allow-subinterface"};

const Enum::YLeaf Native::Privilege::Mode::Name::configure {0, "configure"};
const Enum::YLeaf Native::Privilege::Mode::Name::exec {1, "exec"};
const Enum::YLeaf Native::Privilege::Mode::Name::interface {2, "interface"};
const Enum::YLeaf Native::Privilege::Mode::Name::router {3, "router"};

const Enum::YLeaf Native::Multilink::BundleName::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleName::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleName::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleName::rfc {3, "rfc"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Redundancy::Mode::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::Mode::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::Mode::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::Mode::none {3, "none"};


}
}

