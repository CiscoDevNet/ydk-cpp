
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_tacacs_tacacs_server.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_tacacs_tacacs_server {

TacacsServer::TacacsServer()
    :
    timeout{YType::uint32, "timeout"},
    key{YType::str, "key"}
        ,
    host(this, {"ip", "port"})
    , requests(std::make_shared<TacacsServer::Requests>())
    , test_authentication(nullptr) // presence node
    , test_authorization(nullptr) // presence node
    , test_accounting(nullptr) // presence node
{
    requests->parent = this;

    yang_name = "tacacs-server"; yang_parent_name = "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server"; is_top_level_class = true; has_list_ancestor = false; 
}

TacacsServer::~TacacsServer()
{
}

bool TacacsServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return timeout.is_set
	|| key.is_set
	|| (requests !=  nullptr && requests->has_data())
	|| (test_authentication !=  nullptr && test_authentication->has_data())
	|| (test_authorization !=  nullptr && test_authorization->has_data())
	|| (test_accounting !=  nullptr && test_accounting->has_data());
}

bool TacacsServer::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (requests !=  nullptr && requests->has_operation())
	|| (test_authentication !=  nullptr && test_authentication->has_operation())
	|| (test_authorization !=  nullptr && test_authorization->has_operation())
	|| (test_accounting !=  nullptr && test_accounting->has_operation());
}

std::string TacacsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<TacacsServer::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-tacacs-show-tacacs:requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<TacacsServer::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authentication")
    {
        if(test_authentication == nullptr)
        {
            test_authentication = std::make_shared<TacacsServer::TestAuthentication>();
        }
        return test_authentication;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authorization")
    {
        if(test_authorization == nullptr)
        {
            test_authorization = std::make_shared<TacacsServer::TestAuthorization>();
        }
        return test_authorization;
    }

    if(child_yang_name == "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-accounting")
    {
        if(test_accounting == nullptr)
        {
            test_accounting = std::make_shared<TacacsServer::TestAccounting>();
        }
        return test_accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(requests != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-tacacs-show-tacacs:requests"] = requests;
    }

    if(test_authentication != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authentication"] = test_authentication;
    }

    if(test_authorization != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authorization"] = test_authorization;
    }

    if(test_accounting != nullptr)
    {
        _children["Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-accounting"] = test_accounting;
    }

    return _children;
}

void TacacsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> TacacsServer::clone_ptr() const
{
    return std::make_shared<TacacsServer>();
}

std::string TacacsServer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TacacsServer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TacacsServer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TacacsServer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TacacsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "requests" || name == "test-authentication" || name == "test-authorization" || name == "test-accounting" || name == "timeout" || name == "key")
        return true;
    return false;
}

TacacsServer::Host::Host()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"},
    timeout{YType::uint32, "timeout"},
    key{YType::str, "key"}
{

    yang_name = "host"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; 
}

TacacsServer::Host::~Host()
{
}

bool TacacsServer::Host::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set
	|| timeout.is_set
	|| key.is_set;
}

bool TacacsServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string TacacsServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TacacsServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool TacacsServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port" || name == "timeout" || name == "key")
        return true;
    return false;
}

TacacsServer::Requests::Requests()
    :
    ipv4(this, {"addr", "port"})
{

    yang_name = "requests"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; 
}

TacacsServer::Requests::~Requests()
{
}

bool TacacsServer::Requests::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool TacacsServer::Requests::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TacacsServer::Requests::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-show-tacacs:requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<TacacsServer::Requests::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::Requests::get_children() const
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

void TacacsServer::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TacacsServer::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TacacsServer::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

TacacsServer::Requests::Ipv4::Ipv4()
    :
    addr{YType::str, "addr"},
    port{YType::uint16, "port"},
    opens{YType::uint32, "opens"},
    closes{YType::uint32, "closes"},
    aborts{YType::uint32, "aborts"},
    errors{YType::uint32, "errors"},
    packets_in{YType::uint32, "packets_in"},
    packets_out{YType::uint32, "packets_out"}
{

    yang_name = "ipv4"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = false; 
}

TacacsServer::Requests::Ipv4::~Ipv4()
{
}

bool TacacsServer::Requests::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| port.is_set
	|| opens.is_set
	|| closes.is_set
	|| aborts.is_set
	|| errors.is_set
	|| packets_in.is_set
	|| packets_out.is_set;
}

bool TacacsServer::Requests::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(opens.yfilter)
	|| ydk::is_set(closes.yfilter)
	|| ydk::is_set(aborts.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(packets_in.yfilter)
	|| ydk::is_set(packets_out.yfilter);
}

std::string TacacsServer::Requests::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/Cisco-IOS-XR-sysadmin-tacacs-show-tacacs:requests/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::Requests::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::Requests::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (opens.is_set || is_set(opens.yfilter)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (closes.is_set || is_set(closes.yfilter)) leaf_name_data.push_back(closes.get_name_leafdata());
    if (aborts.is_set || is_set(aborts.yfilter)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.yfilter)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.yfilter)) leaf_name_data.push_back(packets_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::Requests::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::Requests::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TacacsServer::Requests::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opens")
    {
        opens = value;
        opens.value_namespace = name_space;
        opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "closes")
    {
        closes = value;
        closes.value_namespace = name_space;
        closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aborts")
    {
        aborts = value;
        aborts.value_namespace = name_space;
        aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets_in")
    {
        packets_in = value;
        packets_in.value_namespace = name_space;
        packets_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets_out")
    {
        packets_out = value;
        packets_out.value_namespace = name_space;
        packets_out.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::Requests::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "opens")
    {
        opens.yfilter = yfilter;
    }
    if(value_path == "closes")
    {
        closes.yfilter = yfilter;
    }
    if(value_path == "aborts")
    {
        aborts.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "packets_in")
    {
        packets_in.yfilter = yfilter;
    }
    if(value_path == "packets_out")
    {
        packets_out.yfilter = yfilter;
    }
}

bool TacacsServer::Requests::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "port" || name == "opens" || name == "closes" || name == "aborts" || name == "errors" || name == "packets_in" || name == "packets_out")
        return true;
    return false;
}

TacacsServer::TestAuthentication::TestAuthentication()
    :
    authentication{YType::str, "authentication"}
{

    yang_name = "test-authentication"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

TacacsServer::TestAuthentication::~TestAuthentication()
{
}

bool TacacsServer::TestAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return authentication.is_set;
}

bool TacacsServer::TestAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string TacacsServer::TestAuthentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::TestAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::TestAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::TestAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::TestAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TacacsServer::TestAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::TestAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool TacacsServer::TestAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

TacacsServer::TestAuthorization::TestAuthorization()
    :
    authorization{YType::str, "authorization"}
{

    yang_name = "test-authorization"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

TacacsServer::TestAuthorization::~TestAuthorization()
{
}

bool TacacsServer::TestAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return authorization.is_set;
}

bool TacacsServer::TestAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string TacacsServer::TestAuthorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::TestAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::TestAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::TestAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::TestAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TacacsServer::TestAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::TestAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool TacacsServer::TestAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

TacacsServer::TestAccounting::TestAccounting()
    :
    accounting{YType::str, "accounting"}
{

    yang_name = "test-accounting"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

TacacsServer::TestAccounting::~TestAccounting()
{
}

bool TacacsServer::TestAccounting::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool TacacsServer::TestAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string TacacsServer::TestAccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-tacacs-server:tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string TacacsServer::TestAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-tacacs-test-tacacs:test-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TacacsServer::TestAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TacacsServer::TestAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TacacsServer::TestAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TacacsServer::TestAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void TacacsServer::TestAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool TacacsServer::TestAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}


}
}

