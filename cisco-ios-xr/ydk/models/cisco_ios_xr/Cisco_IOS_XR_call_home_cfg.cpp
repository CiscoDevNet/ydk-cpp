
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_call_home_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_call_home_cfg {

CallHome::CallHome()
    :
    customer_id{YType::str, "customer-id"},
    phone_number{YType::str, "phone-number"},
    contact_smart_licensing{YType::boolean, "contact-smart-licensing"},
    contact_email_address{YType::str, "contact-email-address"},
    rate_limit{YType::uint32, "rate-limit"},
    site_id{YType::str, "site-id"},
    vrf{YType::str, "vrf"},
    street_address{YType::str, "street-address"},
    source_interface{YType::str, "source-interface"},
    contract_id{YType::str, "contract-id"},
    reply_to{YType::str, "reply-to"},
    from{YType::str, "from"},
    active{YType::empty, "active"}
        ,
    mail_servers(std::make_shared<CallHome::MailServers>())
    , syslog_throttling(std::make_shared<CallHome::SyslogThrottling>())
    , http_proxy(std::make_shared<CallHome::HttpProxy>())
    , profiles(std::make_shared<CallHome::Profiles>())
    , alert_groups(std::make_shared<CallHome::AlertGroups>())
    , data_privacies(std::make_shared<CallHome::DataPrivacies>())
    , alert_group_config(std::make_shared<CallHome::AlertGroupConfig>())
    , authorization(std::make_shared<CallHome::Authorization>())
{
    mail_servers->parent = this;
    syslog_throttling->parent = this;
    http_proxy->parent = this;
    profiles->parent = this;
    alert_groups->parent = this;
    data_privacies->parent = this;
    alert_group_config->parent = this;
    authorization->parent = this;

    yang_name = "call-home"; yang_parent_name = "Cisco-IOS-XR-call-home-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

CallHome::~CallHome()
{
}

bool CallHome::has_data() const
{
    if (is_presence_container) return true;
    return customer_id.is_set
	|| phone_number.is_set
	|| contact_smart_licensing.is_set
	|| contact_email_address.is_set
	|| rate_limit.is_set
	|| site_id.is_set
	|| vrf.is_set
	|| street_address.is_set
	|| source_interface.is_set
	|| contract_id.is_set
	|| reply_to.is_set
	|| from.is_set
	|| active.is_set
	|| (mail_servers !=  nullptr && mail_servers->has_data())
	|| (syslog_throttling !=  nullptr && syslog_throttling->has_data())
	|| (http_proxy !=  nullptr && http_proxy->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (alert_groups !=  nullptr && alert_groups->has_data())
	|| (data_privacies !=  nullptr && data_privacies->has_data())
	|| (alert_group_config !=  nullptr && alert_group_config->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool CallHome::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(customer_id.yfilter)
	|| ydk::is_set(phone_number.yfilter)
	|| ydk::is_set(contact_smart_licensing.yfilter)
	|| ydk::is_set(contact_email_address.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(street_address.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(contract_id.yfilter)
	|| ydk::is_set(reply_to.yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(active.yfilter)
	|| (mail_servers !=  nullptr && mail_servers->has_operation())
	|| (syslog_throttling !=  nullptr && syslog_throttling->has_operation())
	|| (http_proxy !=  nullptr && http_proxy->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (alert_groups !=  nullptr && alert_groups->has_operation())
	|| (data_privacies !=  nullptr && data_privacies->has_operation())
	|| (alert_group_config !=  nullptr && alert_group_config->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_id.is_set || is_set(customer_id.yfilter)) leaf_name_data.push_back(customer_id.get_name_leafdata());
    if (phone_number.is_set || is_set(phone_number.yfilter)) leaf_name_data.push_back(phone_number.get_name_leafdata());
    if (contact_smart_licensing.is_set || is_set(contact_smart_licensing.yfilter)) leaf_name_data.push_back(contact_smart_licensing.get_name_leafdata());
    if (contact_email_address.is_set || is_set(contact_email_address.yfilter)) leaf_name_data.push_back(contact_email_address.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (street_address.is_set || is_set(street_address.yfilter)) leaf_name_data.push_back(street_address.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (contract_id.is_set || is_set(contract_id.yfilter)) leaf_name_data.push_back(contract_id.get_name_leafdata());
    if (reply_to.is_set || is_set(reply_to.yfilter)) leaf_name_data.push_back(reply_to.get_name_leafdata());
    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mail-servers")
    {
        if(mail_servers == nullptr)
        {
            mail_servers = std::make_shared<CallHome::MailServers>();
        }
        return mail_servers;
    }

    if(child_yang_name == "syslog-throttling")
    {
        if(syslog_throttling == nullptr)
        {
            syslog_throttling = std::make_shared<CallHome::SyslogThrottling>();
        }
        return syslog_throttling;
    }

    if(child_yang_name == "http-proxy")
    {
        if(http_proxy == nullptr)
        {
            http_proxy = std::make_shared<CallHome::HttpProxy>();
        }
        return http_proxy;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<CallHome::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "alert-groups")
    {
        if(alert_groups == nullptr)
        {
            alert_groups = std::make_shared<CallHome::AlertGroups>();
        }
        return alert_groups;
    }

    if(child_yang_name == "data-privacies")
    {
        if(data_privacies == nullptr)
        {
            data_privacies = std::make_shared<CallHome::DataPrivacies>();
        }
        return data_privacies;
    }

    if(child_yang_name == "alert-group-config")
    {
        if(alert_group_config == nullptr)
        {
            alert_group_config = std::make_shared<CallHome::AlertGroupConfig>();
        }
        return alert_group_config;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<CallHome::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mail_servers != nullptr)
    {
        children["mail-servers"] = mail_servers;
    }

    if(syslog_throttling != nullptr)
    {
        children["syslog-throttling"] = syslog_throttling;
    }

    if(http_proxy != nullptr)
    {
        children["http-proxy"] = http_proxy;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(alert_groups != nullptr)
    {
        children["alert-groups"] = alert_groups;
    }

    if(data_privacies != nullptr)
    {
        children["data-privacies"] = data_privacies;
    }

    if(alert_group_config != nullptr)
    {
        children["alert-group-config"] = alert_group_config;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "customer-id")
    {
        customer_id = value;
        customer_id.value_namespace = name_space;
        customer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phone-number")
    {
        phone_number = value;
        phone_number.value_namespace = name_space;
        phone_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact-smart-licensing")
    {
        contact_smart_licensing = value;
        contact_smart_licensing.value_namespace = name_space;
        contact_smart_licensing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact-email-address")
    {
        contact_email_address = value;
        contact_email_address.value_namespace = name_space;
        contact_email_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "street-address")
    {
        street_address = value;
        street_address.value_namespace = name_space;
        street_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contract-id")
    {
        contract_id = value;
        contract_id.value_namespace = name_space;
        contract_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-to")
    {
        reply_to = value;
        reply_to.value_namespace = name_space;
        reply_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "customer-id")
    {
        customer_id.yfilter = yfilter;
    }
    if(value_path == "phone-number")
    {
        phone_number.yfilter = yfilter;
    }
    if(value_path == "contact-smart-licensing")
    {
        contact_smart_licensing.yfilter = yfilter;
    }
    if(value_path == "contact-email-address")
    {
        contact_email_address.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "street-address")
    {
        street_address.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "contract-id")
    {
        contract_id.yfilter = yfilter;
    }
    if(value_path == "reply-to")
    {
        reply_to.yfilter = yfilter;
    }
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> CallHome::clone_ptr() const
{
    return std::make_shared<CallHome>();
}

std::string CallHome::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CallHome::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CallHome::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CallHome::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mail-servers" || name == "syslog-throttling" || name == "http-proxy" || name == "profiles" || name == "alert-groups" || name == "data-privacies" || name == "alert-group-config" || name == "authorization" || name == "customer-id" || name == "phone-number" || name == "contact-smart-licensing" || name == "contact-email-address" || name == "rate-limit" || name == "site-id" || name == "vrf" || name == "street-address" || name == "source-interface" || name == "contract-id" || name == "reply-to" || name == "from" || name == "active")
        return true;
    return false;
}

CallHome::MailServers::MailServers()
    :
    mail_server(this, {"mail_serv_address"})
{

    yang_name = "mail-servers"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::MailServers::~MailServers()
{
}

bool CallHome::MailServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mail_server.len(); index++)
    {
        if(mail_server[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::MailServers::has_operation() const
{
    for (std::size_t index=0; index<mail_server.len(); index++)
    {
        if(mail_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::MailServers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::MailServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mail-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::MailServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::MailServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mail-server")
    {
        auto c = std::make_shared<CallHome::MailServers::MailServer>();
        c->parent = this;
        mail_server.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::MailServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mail_server.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::MailServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::MailServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::MailServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mail-server")
        return true;
    return false;
}

CallHome::MailServers::MailServer::MailServer()
    :
    mail_serv_address{YType::str, "mail-serv-address"},
    priority{YType::uint32, "priority"}
{

    yang_name = "mail-server"; yang_parent_name = "mail-servers"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::MailServers::MailServer::~MailServer()
{
}

bool CallHome::MailServers::MailServer::has_data() const
{
    if (is_presence_container) return true;
    return mail_serv_address.is_set
	|| priority.is_set;
}

bool CallHome::MailServers::MailServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mail_serv_address.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string CallHome::MailServers::MailServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/mail-servers/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::MailServers::MailServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mail-server";
    ADD_KEY_TOKEN(mail_serv_address, "mail-serv-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::MailServers::MailServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mail_serv_address.is_set || is_set(mail_serv_address.yfilter)) leaf_name_data.push_back(mail_serv_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::MailServers::MailServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::MailServers::MailServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::MailServers::MailServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mail-serv-address")
    {
        mail_serv_address = value;
        mail_serv_address.value_namespace = name_space;
        mail_serv_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::MailServers::MailServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mail-serv-address")
    {
        mail_serv_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool CallHome::MailServers::MailServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mail-serv-address" || name == "priority")
        return true;
    return false;
}

CallHome::SyslogThrottling::SyslogThrottling()
    :
    active{YType::boolean, "active"}
{

    yang_name = "syslog-throttling"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::SyslogThrottling::~SyslogThrottling()
{
}

bool CallHome::SyslogThrottling::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set;
}

bool CallHome::SyslogThrottling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string CallHome::SyslogThrottling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::SyslogThrottling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog-throttling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::SyslogThrottling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::SyslogThrottling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::SyslogThrottling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::SyslogThrottling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::SyslogThrottling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool CallHome::SyslogThrottling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active")
        return true;
    return false;
}

CallHome::HttpProxy::HttpProxy()
    :
    server_address{YType::str, "server-address"},
    port{YType::uint16, "port"}
{

    yang_name = "http-proxy"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::HttpProxy::~HttpProxy()
{
}

bool CallHome::HttpProxy::has_data() const
{
    if (is_presence_container) return true;
    return server_address.is_set
	|| port.is_set;
}

bool CallHome::HttpProxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string CallHome::HttpProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::HttpProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::HttpProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::HttpProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::HttpProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::HttpProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::HttpProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool CallHome::HttpProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-address" || name == "port")
        return true;
    return false;
}

CallHome::Profiles::Profiles()
    :
    profile(this, {"profile_name"})
{

    yang_name = "profiles"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::Profiles::~Profiles()
{
}

bool CallHome::Profiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::Profiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto c = std::make_shared<CallHome::Profiles::Profile>();
        c->parent = this;
        profile.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : profile.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

CallHome::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    create{YType::empty, "create"},
    message_format{YType::str, "message-format"},
    anonymous{YType::boolean, "anonymous"},
    message_size_limit{YType::uint32, "message-size-limit"},
    active{YType::empty, "active"}
        ,
    report_type(std::make_shared<CallHome::Profiles::Profile::ReportType>())
    , methods(std::make_shared<CallHome::Profiles::Profile::Methods>())
    , addresses(std::make_shared<CallHome::Profiles::Profile::Addresses>())
    , subscribe_alert_group(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup>())
{
    report_type->parent = this;
    methods->parent = this;
    addresses->parent = this;
    subscribe_alert_group->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::Profiles::Profile::~Profile()
{
}

bool CallHome::Profiles::Profile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| create.is_set
	|| message_format.is_set
	|| anonymous.is_set
	|| message_size_limit.is_set
	|| active.is_set
	|| (report_type !=  nullptr && report_type->has_data())
	|| (methods !=  nullptr && methods->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (subscribe_alert_group !=  nullptr && subscribe_alert_group->has_data());
}

bool CallHome::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(message_format.yfilter)
	|| ydk::is_set(anonymous.yfilter)
	|| ydk::is_set(message_size_limit.yfilter)
	|| ydk::is_set(active.yfilter)
	|| (report_type !=  nullptr && report_type->has_operation())
	|| (methods !=  nullptr && methods->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (subscribe_alert_group !=  nullptr && subscribe_alert_group->has_operation());
}

std::string CallHome::Profiles::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/profiles/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (message_format.is_set || is_set(message_format.yfilter)) leaf_name_data.push_back(message_format.get_name_leafdata());
    if (anonymous.is_set || is_set(anonymous.yfilter)) leaf_name_data.push_back(anonymous.get_name_leafdata());
    if (message_size_limit.is_set || is_set(message_size_limit.yfilter)) leaf_name_data.push_back(message_size_limit.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "report-type")
    {
        if(report_type == nullptr)
        {
            report_type = std::make_shared<CallHome::Profiles::Profile::ReportType>();
        }
        return report_type;
    }

    if(child_yang_name == "methods")
    {
        if(methods == nullptr)
        {
            methods = std::make_shared<CallHome::Profiles::Profile::Methods>();
        }
        return methods;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<CallHome::Profiles::Profile::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "subscribe-alert-group")
    {
        if(subscribe_alert_group == nullptr)
        {
            subscribe_alert_group = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup>();
        }
        return subscribe_alert_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(report_type != nullptr)
    {
        children["report-type"] = report_type;
    }

    if(methods != nullptr)
    {
        children["methods"] = methods;
    }

    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(subscribe_alert_group != nullptr)
    {
        children["subscribe-alert-group"] = subscribe_alert_group;
    }

    return children;
}

void CallHome::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-format")
    {
        message_format = value;
        message_format.value_namespace = name_space;
        message_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anonymous")
    {
        anonymous = value;
        anonymous.value_namespace = name_space;
        anonymous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-size-limit")
    {
        message_size_limit = value;
        message_size_limit.value_namespace = name_space;
        message_size_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "message-format")
    {
        message_format.yfilter = yfilter;
    }
    if(value_path == "anonymous")
    {
        anonymous.yfilter = yfilter;
    }
    if(value_path == "message-size-limit")
    {
        message_size_limit.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "report-type" || name == "methods" || name == "addresses" || name == "subscribe-alert-group" || name == "profile-name" || name == "create" || name == "message-format" || name == "anonymous" || name == "message-size-limit" || name == "active")
        return true;
    return false;
}

CallHome::Profiles::Profile::ReportType::ReportType()
    :
    reporting_callhome_data(std::make_shared<CallHome::Profiles::Profile::ReportType::ReportingCallhomeData>())
    , reporting_licensing_data(std::make_shared<CallHome::Profiles::Profile::ReportType::ReportingLicensingData>())
{
    reporting_callhome_data->parent = this;
    reporting_licensing_data->parent = this;

    yang_name = "report-type"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::ReportType::~ReportType()
{
}

bool CallHome::Profiles::Profile::ReportType::has_data() const
{
    if (is_presence_container) return true;
    return (reporting_callhome_data !=  nullptr && reporting_callhome_data->has_data())
	|| (reporting_licensing_data !=  nullptr && reporting_licensing_data->has_data());
}

bool CallHome::Profiles::Profile::ReportType::has_operation() const
{
    return is_set(yfilter)
	|| (reporting_callhome_data !=  nullptr && reporting_callhome_data->has_operation())
	|| (reporting_licensing_data !=  nullptr && reporting_licensing_data->has_operation());
}

std::string CallHome::Profiles::Profile::ReportType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::ReportType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::ReportType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reporting-callhome-data")
    {
        if(reporting_callhome_data == nullptr)
        {
            reporting_callhome_data = std::make_shared<CallHome::Profiles::Profile::ReportType::ReportingCallhomeData>();
        }
        return reporting_callhome_data;
    }

    if(child_yang_name == "reporting-licensing-data")
    {
        if(reporting_licensing_data == nullptr)
        {
            reporting_licensing_data = std::make_shared<CallHome::Profiles::Profile::ReportType::ReportingLicensingData>();
        }
        return reporting_licensing_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::ReportType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reporting_callhome_data != nullptr)
    {
        children["reporting-callhome-data"] = reporting_callhome_data;
    }

    if(reporting_licensing_data != nullptr)
    {
        children["reporting-licensing-data"] = reporting_licensing_data;
    }

    return children;
}

void CallHome::Profiles::Profile::ReportType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::ReportType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::ReportType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-callhome-data" || name == "reporting-licensing-data")
        return true;
    return false;
}

CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::ReportingCallhomeData()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "reporting-callhome-data"; yang_parent_name = "report-type"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::~ReportingCallhomeData()
{
}

bool CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reporting-callhome-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::ReportType::ReportingCallhomeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

CallHome::Profiles::Profile::ReportType::ReportingLicensingData::ReportingLicensingData()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "reporting-licensing-data"; yang_parent_name = "report-type"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::ReportType::ReportingLicensingData::~ReportingLicensingData()
{
}

bool CallHome::Profiles::Profile::ReportType::ReportingLicensingData::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool CallHome::Profiles::Profile::ReportType::ReportingLicensingData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string CallHome::Profiles::Profile::ReportType::ReportingLicensingData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reporting-licensing-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::ReportType::ReportingLicensingData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::ReportType::ReportingLicensingData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::ReportType::ReportingLicensingData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::ReportType::ReportingLicensingData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::ReportType::ReportingLicensingData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::ReportType::ReportingLicensingData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

CallHome::Profiles::Profile::Methods::Methods()
    :
    method(this, {"method"})
{

    yang_name = "methods"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::Methods::~Methods()
{
}

bool CallHome::Profiles::Profile::Methods::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<method.len(); index++)
    {
        if(method[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::Profiles::Profile::Methods::has_operation() const
{
    for (std::size_t index=0; index<method.len(); index++)
    {
        if(method[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::Profiles::Profile::Methods::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "methods";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::Methods::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::Methods::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        auto c = std::make_shared<CallHome::Profiles::Profile::Methods::Method>();
        c->parent = this;
        method.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::Methods::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : method.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::Profiles::Profile::Methods::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::Methods::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::Methods::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

CallHome::Profiles::Profile::Methods::Method::Method()
    :
    method{YType::enumeration, "method"},
    enable{YType::boolean, "enable"}
{

    yang_name = "method"; yang_parent_name = "methods"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::Methods::Method::~Method()
{
}

bool CallHome::Profiles::Profile::Methods::Method::has_data() const
{
    if (is_presence_container) return true;
    return method.is_set
	|| enable.is_set;
}

bool CallHome::Profiles::Profile::Methods::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string CallHome::Profiles::Profile::Methods::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    ADD_KEY_TOKEN(method, "method");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::Methods::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::Methods::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::Methods::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::Methods::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::Methods::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::Methods::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "enable")
        return true;
    return false;
}

CallHome::Profiles::Profile::Addresses::Addresses()
    :
    address(this, {"method", "destination_addr"})
{

    yang_name = "addresses"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::Addresses::~Addresses()
{
}

bool CallHome::Profiles::Profile::Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::Profiles::Profile::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::Profiles::Profile::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<CallHome::Profiles::Profile::Addresses::Address>();
        c->parent = this;
        address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::Profiles::Profile::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

CallHome::Profiles::Profile::Addresses::Address::Address()
    :
    method{YType::enumeration, "method"},
    destination_addr{YType::str, "destination-addr"},
    enable{YType::boolean, "enable"}
{

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::Addresses::Address::~Address()
{
}

bool CallHome::Profiles::Profile::Addresses::Address::has_data() const
{
    if (is_presence_container) return true;
    return method.is_set
	|| destination_addr.is_set
	|| enable.is_set;
}

bool CallHome::Profiles::Profile::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(destination_addr.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string CallHome::Profiles::Profile::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(method, "method");
    ADD_KEY_TOKEN(destination_addr, "destination-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.yfilter)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-addr")
    {
        destination_addr = value;
        destination_addr.value_namespace = name_space;
        destination_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "destination-addr")
    {
        destination_addr.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "destination-addr" || name == "enable")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::SubscribeAlertGroup()
    :
    environment(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Environment>())
    , configuration(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration>())
    , snapshot(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot>())
    , inventory(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory>())
    , crash(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Crash>())
    , syslogs(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs>())
{
    environment->parent = this;
    configuration->parent = this;
    snapshot->parent = this;
    inventory->parent = this;
    crash->parent = this;
    syslogs->parent = this;

    yang_name = "subscribe-alert-group"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::~SubscribeAlertGroup()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::has_data() const
{
    if (is_presence_container) return true;
    return (environment !=  nullptr && environment->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (snapshot !=  nullptr && snapshot->has_data())
	|| (inventory !=  nullptr && inventory->has_data())
	|| (crash !=  nullptr && crash->has_data())
	|| (syslogs !=  nullptr && syslogs->has_data());
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::has_operation() const
{
    return is_set(yfilter)
	|| (environment !=  nullptr && environment->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (snapshot !=  nullptr && snapshot->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (crash !=  nullptr && crash->has_operation())
	|| (syslogs !=  nullptr && syslogs->has_operation());
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscribe-alert-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "snapshot")
    {
        if(snapshot == nullptr)
        {
            snapshot = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot>();
        }
        return snapshot;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "crash")
    {
        if(crash == nullptr)
        {
            crash = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Crash>();
        }
        return crash;
    }

    if(child_yang_name == "syslogs")
    {
        if(syslogs == nullptr)
        {
            syslogs = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs>();
        }
        return syslogs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(environment != nullptr)
    {
        children["environment"] = environment;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(snapshot != nullptr)
    {
        children["snapshot"] = snapshot;
    }

    if(inventory != nullptr)
    {
        children["inventory"] = inventory;
    }

    if(crash != nullptr)
    {
        children["crash"] = crash;
    }

    if(syslogs != nullptr)
    {
        children["syslogs"] = syslogs;
    }

    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "environment" || name == "configuration" || name == "snapshot" || name == "inventory" || name == "crash" || name == "syslogs")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::Environment()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "environment"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::~Environment()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Configuration()
    :
    subscribe{YType::empty, "subscribe"}
        ,
    periodic(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic>())
{
    periodic->parent = this;

    yang_name = "configuration"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::~Configuration()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return subscribe.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscribe.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscribe.is_set || is_set(subscribe.yfilter)) leaf_name_data.push_back(subscribe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscribe")
    {
        subscribe = value;
        subscribe.value_namespace = name_space;
        subscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscribe")
    {
        subscribe.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "subscribe")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::Periodic()
    :
    interval{YType::enumeration, "interval"},
    day{YType::uint32, "day"},
    weekday{YType::enumeration, "weekday"},
    hour{YType::uint32, "hour"},
    minute{YType::uint32, "minute"}
{

    yang_name = "periodic"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::~Periodic()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| day.is_set
	|| weekday.is_set
	|| hour.is_set
	|| minute.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(weekday.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (weekday.is_set || is_set(weekday.yfilter)) leaf_name_data.push_back(weekday.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekday")
    {
        weekday = value;
        weekday.value_namespace = name_space;
        weekday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "weekday")
    {
        weekday.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Configuration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "day" || name == "weekday" || name == "hour" || name == "minute")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Snapshot()
    :
    periodic(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic>())
{
    periodic->parent = this;

    yang_name = "snapshot"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::~Snapshot()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::has_data() const
{
    if (is_presence_container) return true;
    return (periodic !=  nullptr && periodic->has_data());
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snapshot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::Periodic()
    :
    interval{YType::enumeration, "interval"},
    day{YType::uint32, "day"},
    weekday{YType::enumeration, "weekday"},
    hour{YType::uint32, "hour"},
    minute{YType::uint32, "minute"}
{

    yang_name = "periodic"; yang_parent_name = "snapshot"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::~Periodic()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| day.is_set
	|| weekday.is_set
	|| hour.is_set
	|| minute.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(weekday.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (weekday.is_set || is_set(weekday.yfilter)) leaf_name_data.push_back(weekday.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekday")
    {
        weekday = value;
        weekday.value_namespace = name_space;
        weekday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "weekday")
    {
        weekday.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Snapshot::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "day" || name == "weekday" || name == "hour" || name == "minute")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Inventory()
    :
    subscribe{YType::empty, "subscribe"}
        ,
    periodic(std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic>())
{
    periodic->parent = this;

    yang_name = "inventory"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::~Inventory()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::has_data() const
{
    if (is_presence_container) return true;
    return subscribe.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscribe.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscribe.is_set || is_set(subscribe.yfilter)) leaf_name_data.push_back(subscribe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscribe")
    {
        subscribe = value;
        subscribe.value_namespace = name_space;
        subscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscribe")
    {
        subscribe.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "subscribe")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::Periodic()
    :
    interval{YType::enumeration, "interval"},
    day{YType::uint32, "day"},
    weekday{YType::enumeration, "weekday"},
    hour{YType::uint32, "hour"},
    minute{YType::uint32, "minute"}
{

    yang_name = "periodic"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::~Periodic()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| day.is_set
	|| weekday.is_set
	|| hour.is_set
	|| minute.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(weekday.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (weekday.is_set || is_set(weekday.yfilter)) leaf_name_data.push_back(weekday.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekday")
    {
        weekday = value;
        weekday.value_namespace = name_space;
        weekday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "weekday")
    {
        weekday.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Inventory::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "day" || name == "weekday" || name == "hour" || name == "minute")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::Crash()
    :
    subscribe{YType::empty, "subscribe"}
{

    yang_name = "crash"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::~Crash()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::has_data() const
{
    if (is_presence_container) return true;
    return subscribe.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscribe.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscribe.is_set || is_set(subscribe.yfilter)) leaf_name_data.push_back(subscribe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscribe")
    {
        subscribe = value;
        subscribe.value_namespace = name_space;
        subscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscribe")
    {
        subscribe.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Crash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscribe")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslogs()
    :
    syslog(this, {"syslog_pattern"})
{

    yang_name = "syslogs"; yang_parent_name = "subscribe-alert-group"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::~Syslogs()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<syslog.len(); index++)
    {
        if(syslog[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::has_operation() const
{
    for (std::size_t index=0; index<syslog.len(); index++)
    {
        if(syslog[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslogs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslog")
    {
        auto c = std::make_shared<CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog>();
        c->parent = this;
        syslog.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : syslog.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog")
        return true;
    return false;
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::Syslog()
    :
    syslog_pattern{YType::str, "syslog-pattern"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "syslog"; yang_parent_name = "syslogs"; is_top_level_class = false; has_list_ancestor = true; 
}

CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::~Syslog()
{
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return syslog_pattern.is_set
	|| severity.is_set;
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslog_pattern.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    ADD_KEY_TOKEN(syslog_pattern, "syslog-pattern");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog_pattern.is_set || is_set(syslog_pattern.yfilter)) leaf_name_data.push_back(syslog_pattern.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog-pattern")
    {
        syslog_pattern = value;
        syslog_pattern.value_namespace = name_space;
        syslog_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog-pattern")
    {
        syslog_pattern.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool CallHome::Profiles::Profile::SubscribeAlertGroup::Syslogs::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog-pattern" || name == "severity")
        return true;
    return false;
}

CallHome::AlertGroups::AlertGroups()
    :
    alert_group(this, {"alert_group_name"})
{

    yang_name = "alert-groups"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::AlertGroups::~AlertGroups()
{
}

bool CallHome::AlertGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alert_group.len(); index++)
    {
        if(alert_group[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::AlertGroups::has_operation() const
{
    for (std::size_t index=0; index<alert_group.len(); index++)
    {
        if(alert_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::AlertGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::AlertGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::AlertGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::AlertGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert-group")
    {
        auto c = std::make_shared<CallHome::AlertGroups::AlertGroup>();
        c->parent = this;
        alert_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::AlertGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alert_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::AlertGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::AlertGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::AlertGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert-group")
        return true;
    return false;
}

CallHome::AlertGroups::AlertGroup::AlertGroup()
    :
    alert_group_name{YType::str, "alert-group-name"},
    enable{YType::boolean, "enable"},
    disable{YType::boolean, "disable"}
{

    yang_name = "alert-group"; yang_parent_name = "alert-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::AlertGroups::AlertGroup::~AlertGroup()
{
}

bool CallHome::AlertGroups::AlertGroup::has_data() const
{
    if (is_presence_container) return true;
    return alert_group_name.is_set
	|| enable.is_set
	|| disable.is_set;
}

bool CallHome::AlertGroups::AlertGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alert_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string CallHome::AlertGroups::AlertGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/alert-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::AlertGroups::AlertGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert-group";
    ADD_KEY_TOKEN(alert_group_name, "alert-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::AlertGroups::AlertGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alert_group_name.is_set || is_set(alert_group_name.yfilter)) leaf_name_data.push_back(alert_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::AlertGroups::AlertGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::AlertGroups::AlertGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::AlertGroups::AlertGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alert-group-name")
    {
        alert_group_name = value;
        alert_group_name.value_namespace = name_space;
        alert_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::AlertGroups::AlertGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alert-group-name")
    {
        alert_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool CallHome::AlertGroups::AlertGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert-group-name" || name == "enable" || name == "disable")
        return true;
    return false;
}

CallHome::DataPrivacies::DataPrivacies()
    :
    data_privacy(this, {"host_name"})
{

    yang_name = "data-privacies"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::DataPrivacies::~DataPrivacies()
{
}

bool CallHome::DataPrivacies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_privacy.len(); index++)
    {
        if(data_privacy[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::DataPrivacies::has_operation() const
{
    for (std::size_t index=0; index<data_privacy.len(); index++)
    {
        if(data_privacy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::DataPrivacies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::DataPrivacies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-privacies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::DataPrivacies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::DataPrivacies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-privacy")
    {
        auto c = std::make_shared<CallHome::DataPrivacies::DataPrivacy>();
        c->parent = this;
        data_privacy.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::DataPrivacies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_privacy.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::DataPrivacies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::DataPrivacies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::DataPrivacies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-privacy")
        return true;
    return false;
}

CallHome::DataPrivacies::DataPrivacy::DataPrivacy()
    :
    host_name{YType::str, "host-name"},
    level{YType::enumeration, "level"}
{

    yang_name = "data-privacy"; yang_parent_name = "data-privacies"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::DataPrivacies::DataPrivacy::~DataPrivacy()
{
}

bool CallHome::DataPrivacies::DataPrivacy::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| level.is_set;
}

bool CallHome::DataPrivacies::DataPrivacy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string CallHome::DataPrivacies::DataPrivacy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/data-privacies/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::DataPrivacies::DataPrivacy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-privacy";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::DataPrivacies::DataPrivacy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::DataPrivacies::DataPrivacy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::DataPrivacies::DataPrivacy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::DataPrivacies::DataPrivacy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::DataPrivacies::DataPrivacy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool CallHome::DataPrivacies::DataPrivacy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "level")
        return true;
    return false;
}

CallHome::AlertGroupConfig::AlertGroupConfig()
    :
    snapshot_commands(std::make_shared<CallHome::AlertGroupConfig::SnapshotCommands>())
{
    snapshot_commands->parent = this;

    yang_name = "alert-group-config"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::AlertGroupConfig::~AlertGroupConfig()
{
}

bool CallHome::AlertGroupConfig::has_data() const
{
    if (is_presence_container) return true;
    return (snapshot_commands !=  nullptr && snapshot_commands->has_data());
}

bool CallHome::AlertGroupConfig::has_operation() const
{
    return is_set(yfilter)
	|| (snapshot_commands !=  nullptr && snapshot_commands->has_operation());
}

std::string CallHome::AlertGroupConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::AlertGroupConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert-group-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::AlertGroupConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::AlertGroupConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snapshot-commands")
    {
        if(snapshot_commands == nullptr)
        {
            snapshot_commands = std::make_shared<CallHome::AlertGroupConfig::SnapshotCommands>();
        }
        return snapshot_commands;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::AlertGroupConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snapshot_commands != nullptr)
    {
        children["snapshot-commands"] = snapshot_commands;
    }

    return children;
}

void CallHome::AlertGroupConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::AlertGroupConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::AlertGroupConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snapshot-commands")
        return true;
    return false;
}

CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommands()
    :
    snapshot_command(this, {"command"})
{

    yang_name = "snapshot-commands"; yang_parent_name = "alert-group-config"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::AlertGroupConfig::SnapshotCommands::~SnapshotCommands()
{
}

bool CallHome::AlertGroupConfig::SnapshotCommands::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snapshot_command.len(); index++)
    {
        if(snapshot_command[index]->has_data())
            return true;
    }
    return false;
}

bool CallHome::AlertGroupConfig::SnapshotCommands::has_operation() const
{
    for (std::size_t index=0; index<snapshot_command.len(); index++)
    {
        if(snapshot_command[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CallHome::AlertGroupConfig::SnapshotCommands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/alert-group-config/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::AlertGroupConfig::SnapshotCommands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snapshot-commands";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::AlertGroupConfig::SnapshotCommands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::AlertGroupConfig::SnapshotCommands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snapshot-command")
    {
        auto c = std::make_shared<CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand>();
        c->parent = this;
        snapshot_command.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::AlertGroupConfig::SnapshotCommands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : snapshot_command.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CallHome::AlertGroupConfig::SnapshotCommands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CallHome::AlertGroupConfig::SnapshotCommands::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CallHome::AlertGroupConfig::SnapshotCommands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snapshot-command")
        return true;
    return false;
}

CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::SnapshotCommand()
    :
    command{YType::str, "command"},
    active{YType::empty, "active"}
{

    yang_name = "snapshot-command"; yang_parent_name = "snapshot-commands"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::~SnapshotCommand()
{
}

bool CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| active.is_set;
}

bool CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/alert-group-config/snapshot-commands/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snapshot-command";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool CallHome::AlertGroupConfig::SnapshotCommands::SnapshotCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "active")
        return true;
    return false;
}

CallHome::Authorization::Authorization()
    :
    username{YType::str, "username"},
    active{YType::empty, "active"}
{

    yang_name = "authorization"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

CallHome::Authorization::~Authorization()
{
}

bool CallHome::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| active.is_set;
}

bool CallHome::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string CallHome::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-call-home-cfg:call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string CallHome::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CallHome::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CallHome::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CallHome::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CallHome::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void CallHome::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool CallHome::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "active")
        return true;
    return false;
}

const Enum::YLeaf CallHomeDayOfWeek::sunday {0, "sunday"};
const Enum::YLeaf CallHomeDayOfWeek::monday {1, "monday"};
const Enum::YLeaf CallHomeDayOfWeek::tuesday {2, "tuesday"};
const Enum::YLeaf CallHomeDayOfWeek::wednesday {3, "wednesday"};
const Enum::YLeaf CallHomeDayOfWeek::thursday {4, "thursday"};
const Enum::YLeaf CallHomeDayOfWeek::friday {5, "friday"};
const Enum::YLeaf CallHomeDayOfWeek::saturday {6, "saturday"};

const Enum::YLeaf DataPrivacyLevel::normal {0, "normal"};
const Enum::YLeaf DataPrivacyLevel::high {1, "high"};
const Enum::YLeaf DataPrivacyLevel::host_name {2, "host-name"};

const Enum::YLeaf CallHomeMailSendInterval::daily {0, "daily"};
const Enum::YLeaf CallHomeMailSendInterval::weekly {1, "weekly"};
const Enum::YLeaf CallHomeMailSendInterval::monthly {2, "monthly"};

const Enum::YLeaf CallHomeEventSeverity::debugging {0, "debugging"};
const Enum::YLeaf CallHomeEventSeverity::normal {1, "normal"};
const Enum::YLeaf CallHomeEventSeverity::notification {2, "notification"};
const Enum::YLeaf CallHomeEventSeverity::warning {3, "warning"};
const Enum::YLeaf CallHomeEventSeverity::minor {4, "minor"};
const Enum::YLeaf CallHomeEventSeverity::major_ {5, "major"};
const Enum::YLeaf CallHomeEventSeverity::critical {6, "critical"};
const Enum::YLeaf CallHomeEventSeverity::fatal {7, "fatal"};
const Enum::YLeaf CallHomeEventSeverity::disaster {8, "disaster"};
const Enum::YLeaf CallHomeEventSeverity::catastrophic {9, "catastrophic"};

const Enum::YLeaf SnapshotInterval::daily {0, "daily"};
const Enum::YLeaf SnapshotInterval::weekly {1, "weekly"};
const Enum::YLeaf SnapshotInterval::monthly {2, "monthly"};

const Enum::YLeaf CallHomeTransMethod::email {1, "email"};
const Enum::YLeaf CallHomeTransMethod::http {2, "http"};


}
}

