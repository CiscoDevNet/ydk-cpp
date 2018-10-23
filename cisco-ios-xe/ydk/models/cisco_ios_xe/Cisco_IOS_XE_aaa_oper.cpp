
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_aaa_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_aaa_oper {

AaaData::AaaData()
    :
    aaa_radius_stats(this, {"group_name", "radius_server_ip", "auth_port", "acct_port"})
    , aaa_tacacs_stats(this, {"group_name", "tacacs_server_address", "port"})
    , aaa_ldap_counters(this, {"ldap_server_address", "ldap_server_port"})
    , aaa_users(this, {"username"})
{

    yang_name = "aaa-data"; yang_parent_name = "Cisco-IOS-XE-aaa-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

AaaData::~AaaData()
{
}

bool AaaData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aaa_radius_stats.len(); index++)
    {
        if(aaa_radius_stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<aaa_tacacs_stats.len(); index++)
    {
        if(aaa_tacacs_stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<aaa_ldap_counters.len(); index++)
    {
        if(aaa_ldap_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<aaa_users.len(); index++)
    {
        if(aaa_users[index]->has_data())
            return true;
    }
    return false;
}

bool AaaData::has_operation() const
{
    for (std::size_t index=0; index<aaa_radius_stats.len(); index++)
    {
        if(aaa_radius_stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<aaa_tacacs_stats.len(); index++)
    {
        if(aaa_tacacs_stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<aaa_ldap_counters.len(); index++)
    {
        if(aaa_ldap_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<aaa_users.len(); index++)
    {
        if(aaa_users[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-radius-stats")
    {
        auto ent_ = std::make_shared<AaaData::AaaRadiusStats>();
        ent_->parent = this;
        aaa_radius_stats.append(ent_);
        return ent_;
    }

    if(child_yang_name == "aaa-tacacs-stats")
    {
        auto ent_ = std::make_shared<AaaData::AaaTacacsStats>();
        ent_->parent = this;
        aaa_tacacs_stats.append(ent_);
        return ent_;
    }

    if(child_yang_name == "aaa-ldap-counters")
    {
        auto ent_ = std::make_shared<AaaData::AaaLdapCounters>();
        ent_->parent = this;
        aaa_ldap_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "aaa-users")
    {
        auto ent_ = std::make_shared<AaaData::AaaUsers>();
        ent_->parent = this;
        aaa_users.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aaa_radius_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : aaa_tacacs_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : aaa_ldap_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : aaa_users.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AaaData::clone_ptr() const
{
    return std::make_shared<AaaData>();
}

std::string AaaData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AaaData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AaaData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AaaData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AaaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-radius-stats" || name == "aaa-tacacs-stats" || name == "aaa-ldap-counters" || name == "aaa-users")
        return true;
    return false;
}

AaaData::AaaRadiusStats::AaaRadiusStats()
    :
    group_name{YType::str, "group-name"},
    radius_server_ip{YType::str, "radius-server-ip"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"},
    authen_retried_access_requests{YType::uint32, "authen-retried-access-requests"},
    authen_access_accepts{YType::uint32, "authen-access-accepts"},
    authen_access_rejects{YType::uint32, "authen-access-rejects"},
    authen_timeout_access_requests{YType::uint32, "authen-timeout-access-requests"},
    author_retried_access_requests{YType::uint32, "author-retried-access-requests"},
    author_access_accepts{YType::uint32, "author-access-accepts"},
    author_access_rejects{YType::uint32, "author-access-rejects"},
    author_timeout_access_requests{YType::uint32, "author-timeout-access-requests"},
    connection_opens{YType::uint32, "connection-opens"},
    connection_closes{YType::uint32, "connection-closes"},
    connection_aborts{YType::uint32, "connection-aborts"},
    connection_failures{YType::uint32, "connection-failures"},
    connection_timeouts{YType::uint32, "connection-timeouts"},
    authen_messages_sent{YType::uint32, "authen-messages-sent"},
    author_messages_sent{YType::uint32, "author-messages-sent"},
    acct_messages_sent{YType::uint32, "acct-messages-sent"},
    authen_messages_received{YType::uint32, "authen-messages-received"},
    author_messages_received{YType::uint32, "author-messages-received"},
    authen_errors_received{YType::uint32, "authen-errors-received"},
    author_errors_received{YType::uint32, "author-errors-received"},
    acct_errors_received{YType::uint32, "acct-errors-received"},
    stats_time{YType::str, "stats-time"}
{

    yang_name = "aaa-radius-stats"; yang_parent_name = "aaa-data"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaData::AaaRadiusStats::~AaaRadiusStats()
{
}

bool AaaData::AaaRadiusStats::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set
	|| radius_server_ip.is_set
	|| auth_port.is_set
	|| acct_port.is_set
	|| authen_retried_access_requests.is_set
	|| authen_access_accepts.is_set
	|| authen_access_rejects.is_set
	|| authen_timeout_access_requests.is_set
	|| author_retried_access_requests.is_set
	|| author_access_accepts.is_set
	|| author_access_rejects.is_set
	|| author_timeout_access_requests.is_set
	|| connection_opens.is_set
	|| connection_closes.is_set
	|| connection_aborts.is_set
	|| connection_failures.is_set
	|| connection_timeouts.is_set
	|| authen_messages_sent.is_set
	|| author_messages_sent.is_set
	|| acct_messages_sent.is_set
	|| authen_messages_received.is_set
	|| author_messages_received.is_set
	|| authen_errors_received.is_set
	|| author_errors_received.is_set
	|| acct_errors_received.is_set
	|| stats_time.is_set;
}

bool AaaData::AaaRadiusStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(radius_server_ip.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(authen_retried_access_requests.yfilter)
	|| ydk::is_set(authen_access_accepts.yfilter)
	|| ydk::is_set(authen_access_rejects.yfilter)
	|| ydk::is_set(authen_timeout_access_requests.yfilter)
	|| ydk::is_set(author_retried_access_requests.yfilter)
	|| ydk::is_set(author_access_accepts.yfilter)
	|| ydk::is_set(author_access_rejects.yfilter)
	|| ydk::is_set(author_timeout_access_requests.yfilter)
	|| ydk::is_set(connection_opens.yfilter)
	|| ydk::is_set(connection_closes.yfilter)
	|| ydk::is_set(connection_aborts.yfilter)
	|| ydk::is_set(connection_failures.yfilter)
	|| ydk::is_set(connection_timeouts.yfilter)
	|| ydk::is_set(authen_messages_sent.yfilter)
	|| ydk::is_set(author_messages_sent.yfilter)
	|| ydk::is_set(acct_messages_sent.yfilter)
	|| ydk::is_set(authen_messages_received.yfilter)
	|| ydk::is_set(author_messages_received.yfilter)
	|| ydk::is_set(authen_errors_received.yfilter)
	|| ydk::is_set(author_errors_received.yfilter)
	|| ydk::is_set(acct_errors_received.yfilter)
	|| ydk::is_set(stats_time.yfilter);
}

std::string AaaData::AaaRadiusStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaData::AaaRadiusStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-radius-stats";
    ADD_KEY_TOKEN(group_name, "group-name");
    ADD_KEY_TOKEN(radius_server_ip, "radius-server-ip");
    ADD_KEY_TOKEN(auth_port, "auth-port");
    ADD_KEY_TOKEN(acct_port, "acct-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaRadiusStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (radius_server_ip.is_set || is_set(radius_server_ip.yfilter)) leaf_name_data.push_back(radius_server_ip.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (authen_retried_access_requests.is_set || is_set(authen_retried_access_requests.yfilter)) leaf_name_data.push_back(authen_retried_access_requests.get_name_leafdata());
    if (authen_access_accepts.is_set || is_set(authen_access_accepts.yfilter)) leaf_name_data.push_back(authen_access_accepts.get_name_leafdata());
    if (authen_access_rejects.is_set || is_set(authen_access_rejects.yfilter)) leaf_name_data.push_back(authen_access_rejects.get_name_leafdata());
    if (authen_timeout_access_requests.is_set || is_set(authen_timeout_access_requests.yfilter)) leaf_name_data.push_back(authen_timeout_access_requests.get_name_leafdata());
    if (author_retried_access_requests.is_set || is_set(author_retried_access_requests.yfilter)) leaf_name_data.push_back(author_retried_access_requests.get_name_leafdata());
    if (author_access_accepts.is_set || is_set(author_access_accepts.yfilter)) leaf_name_data.push_back(author_access_accepts.get_name_leafdata());
    if (author_access_rejects.is_set || is_set(author_access_rejects.yfilter)) leaf_name_data.push_back(author_access_rejects.get_name_leafdata());
    if (author_timeout_access_requests.is_set || is_set(author_timeout_access_requests.yfilter)) leaf_name_data.push_back(author_timeout_access_requests.get_name_leafdata());
    if (connection_opens.is_set || is_set(connection_opens.yfilter)) leaf_name_data.push_back(connection_opens.get_name_leafdata());
    if (connection_closes.is_set || is_set(connection_closes.yfilter)) leaf_name_data.push_back(connection_closes.get_name_leafdata());
    if (connection_aborts.is_set || is_set(connection_aborts.yfilter)) leaf_name_data.push_back(connection_aborts.get_name_leafdata());
    if (connection_failures.is_set || is_set(connection_failures.yfilter)) leaf_name_data.push_back(connection_failures.get_name_leafdata());
    if (connection_timeouts.is_set || is_set(connection_timeouts.yfilter)) leaf_name_data.push_back(connection_timeouts.get_name_leafdata());
    if (authen_messages_sent.is_set || is_set(authen_messages_sent.yfilter)) leaf_name_data.push_back(authen_messages_sent.get_name_leafdata());
    if (author_messages_sent.is_set || is_set(author_messages_sent.yfilter)) leaf_name_data.push_back(author_messages_sent.get_name_leafdata());
    if (acct_messages_sent.is_set || is_set(acct_messages_sent.yfilter)) leaf_name_data.push_back(acct_messages_sent.get_name_leafdata());
    if (authen_messages_received.is_set || is_set(authen_messages_received.yfilter)) leaf_name_data.push_back(authen_messages_received.get_name_leafdata());
    if (author_messages_received.is_set || is_set(author_messages_received.yfilter)) leaf_name_data.push_back(author_messages_received.get_name_leafdata());
    if (authen_errors_received.is_set || is_set(authen_errors_received.yfilter)) leaf_name_data.push_back(authen_errors_received.get_name_leafdata());
    if (author_errors_received.is_set || is_set(author_errors_received.yfilter)) leaf_name_data.push_back(author_errors_received.get_name_leafdata());
    if (acct_errors_received.is_set || is_set(acct_errors_received.yfilter)) leaf_name_data.push_back(acct_errors_received.get_name_leafdata());
    if (stats_time.is_set || is_set(stats_time.yfilter)) leaf_name_data.push_back(stats_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::AaaRadiusStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::AaaRadiusStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaData::AaaRadiusStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-server-ip")
    {
        radius_server_ip = value;
        radius_server_ip.value_namespace = name_space;
        radius_server_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-retried-access-requests")
    {
        authen_retried_access_requests = value;
        authen_retried_access_requests.value_namespace = name_space;
        authen_retried_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-access-accepts")
    {
        authen_access_accepts = value;
        authen_access_accepts.value_namespace = name_space;
        authen_access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-access-rejects")
    {
        authen_access_rejects = value;
        authen_access_rejects.value_namespace = name_space;
        authen_access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-timeout-access-requests")
    {
        authen_timeout_access_requests = value;
        authen_timeout_access_requests.value_namespace = name_space;
        authen_timeout_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-retried-access-requests")
    {
        author_retried_access_requests = value;
        author_retried_access_requests.value_namespace = name_space;
        author_retried_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-access-accepts")
    {
        author_access_accepts = value;
        author_access_accepts.value_namespace = name_space;
        author_access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-access-rejects")
    {
        author_access_rejects = value;
        author_access_rejects.value_namespace = name_space;
        author_access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-timeout-access-requests")
    {
        author_timeout_access_requests = value;
        author_timeout_access_requests.value_namespace = name_space;
        author_timeout_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-opens")
    {
        connection_opens = value;
        connection_opens.value_namespace = name_space;
        connection_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-closes")
    {
        connection_closes = value;
        connection_closes.value_namespace = name_space;
        connection_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts = value;
        connection_aborts.value_namespace = name_space;
        connection_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-failures")
    {
        connection_failures = value;
        connection_failures.value_namespace = name_space;
        connection_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts = value;
        connection_timeouts.value_namespace = name_space;
        connection_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-messages-sent")
    {
        authen_messages_sent = value;
        authen_messages_sent.value_namespace = name_space;
        authen_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-messages-sent")
    {
        author_messages_sent = value;
        author_messages_sent.value_namespace = name_space;
        author_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-messages-sent")
    {
        acct_messages_sent = value;
        acct_messages_sent.value_namespace = name_space;
        acct_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-messages-received")
    {
        authen_messages_received = value;
        authen_messages_received.value_namespace = name_space;
        authen_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-messages-received")
    {
        author_messages_received = value;
        author_messages_received.value_namespace = name_space;
        author_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-errors-received")
    {
        authen_errors_received = value;
        authen_errors_received.value_namespace = name_space;
        authen_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-errors-received")
    {
        author_errors_received = value;
        author_errors_received.value_namespace = name_space;
        author_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-errors-received")
    {
        acct_errors_received = value;
        acct_errors_received.value_namespace = name_space;
        acct_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-time")
    {
        stats_time = value;
        stats_time.value_namespace = name_space;
        stats_time.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaRadiusStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "radius-server-ip")
    {
        radius_server_ip.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "authen-retried-access-requests")
    {
        authen_retried_access_requests.yfilter = yfilter;
    }
    if(value_path == "authen-access-accepts")
    {
        authen_access_accepts.yfilter = yfilter;
    }
    if(value_path == "authen-access-rejects")
    {
        authen_access_rejects.yfilter = yfilter;
    }
    if(value_path == "authen-timeout-access-requests")
    {
        authen_timeout_access_requests.yfilter = yfilter;
    }
    if(value_path == "author-retried-access-requests")
    {
        author_retried_access_requests.yfilter = yfilter;
    }
    if(value_path == "author-access-accepts")
    {
        author_access_accepts.yfilter = yfilter;
    }
    if(value_path == "author-access-rejects")
    {
        author_access_rejects.yfilter = yfilter;
    }
    if(value_path == "author-timeout-access-requests")
    {
        author_timeout_access_requests.yfilter = yfilter;
    }
    if(value_path == "connection-opens")
    {
        connection_opens.yfilter = yfilter;
    }
    if(value_path == "connection-closes")
    {
        connection_closes.yfilter = yfilter;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts.yfilter = yfilter;
    }
    if(value_path == "connection-failures")
    {
        connection_failures.yfilter = yfilter;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts.yfilter = yfilter;
    }
    if(value_path == "authen-messages-sent")
    {
        authen_messages_sent.yfilter = yfilter;
    }
    if(value_path == "author-messages-sent")
    {
        author_messages_sent.yfilter = yfilter;
    }
    if(value_path == "acct-messages-sent")
    {
        acct_messages_sent.yfilter = yfilter;
    }
    if(value_path == "authen-messages-received")
    {
        authen_messages_received.yfilter = yfilter;
    }
    if(value_path == "author-messages-received")
    {
        author_messages_received.yfilter = yfilter;
    }
    if(value_path == "authen-errors-received")
    {
        authen_errors_received.yfilter = yfilter;
    }
    if(value_path == "author-errors-received")
    {
        author_errors_received.yfilter = yfilter;
    }
    if(value_path == "acct-errors-received")
    {
        acct_errors_received.yfilter = yfilter;
    }
    if(value_path == "stats-time")
    {
        stats_time.yfilter = yfilter;
    }
}

bool AaaData::AaaRadiusStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "radius-server-ip" || name == "auth-port" || name == "acct-port" || name == "authen-retried-access-requests" || name == "authen-access-accepts" || name == "authen-access-rejects" || name == "authen-timeout-access-requests" || name == "author-retried-access-requests" || name == "author-access-accepts" || name == "author-access-rejects" || name == "author-timeout-access-requests" || name == "connection-opens" || name == "connection-closes" || name == "connection-aborts" || name == "connection-failures" || name == "connection-timeouts" || name == "authen-messages-sent" || name == "author-messages-sent" || name == "acct-messages-sent" || name == "authen-messages-received" || name == "author-messages-received" || name == "authen-errors-received" || name == "author-errors-received" || name == "acct-errors-received" || name == "stats-time")
        return true;
    return false;
}

AaaData::AaaTacacsStats::AaaTacacsStats()
    :
    group_name{YType::str, "group-name"},
    tacacs_server_address{YType::str, "tacacs-server-address"},
    port{YType::uint16, "port"},
    connection_opens{YType::uint32, "connection-opens"},
    connection_closes{YType::uint32, "connection-closes"},
    connection_aborts{YType::uint32, "connection-aborts"},
    connection_failures{YType::uint32, "connection-failures"},
    connection_timeouts{YType::uint32, "connection-timeouts"},
    messages_sent{YType::uint32, "messages-sent"},
    messages_received{YType::uint32, "messages-received"},
    errors_received{YType::uint32, "errors-received"},
    stats_start_time{YType::str, "stats-start-time"}
{

    yang_name = "aaa-tacacs-stats"; yang_parent_name = "aaa-data"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaData::AaaTacacsStats::~AaaTacacsStats()
{
}

bool AaaData::AaaTacacsStats::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set
	|| tacacs_server_address.is_set
	|| port.is_set
	|| connection_opens.is_set
	|| connection_closes.is_set
	|| connection_aborts.is_set
	|| connection_failures.is_set
	|| connection_timeouts.is_set
	|| messages_sent.is_set
	|| messages_received.is_set
	|| errors_received.is_set
	|| stats_start_time.is_set;
}

bool AaaData::AaaTacacsStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(tacacs_server_address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(connection_opens.yfilter)
	|| ydk::is_set(connection_closes.yfilter)
	|| ydk::is_set(connection_aborts.yfilter)
	|| ydk::is_set(connection_failures.yfilter)
	|| ydk::is_set(connection_timeouts.yfilter)
	|| ydk::is_set(messages_sent.yfilter)
	|| ydk::is_set(messages_received.yfilter)
	|| ydk::is_set(errors_received.yfilter)
	|| ydk::is_set(stats_start_time.yfilter);
}

std::string AaaData::AaaTacacsStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaData::AaaTacacsStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-tacacs-stats";
    ADD_KEY_TOKEN(group_name, "group-name");
    ADD_KEY_TOKEN(tacacs_server_address, "tacacs-server-address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaTacacsStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (tacacs_server_address.is_set || is_set(tacacs_server_address.yfilter)) leaf_name_data.push_back(tacacs_server_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (connection_opens.is_set || is_set(connection_opens.yfilter)) leaf_name_data.push_back(connection_opens.get_name_leafdata());
    if (connection_closes.is_set || is_set(connection_closes.yfilter)) leaf_name_data.push_back(connection_closes.get_name_leafdata());
    if (connection_aborts.is_set || is_set(connection_aborts.yfilter)) leaf_name_data.push_back(connection_aborts.get_name_leafdata());
    if (connection_failures.is_set || is_set(connection_failures.yfilter)) leaf_name_data.push_back(connection_failures.get_name_leafdata());
    if (connection_timeouts.is_set || is_set(connection_timeouts.yfilter)) leaf_name_data.push_back(connection_timeouts.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.yfilter)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.yfilter)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.yfilter)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (stats_start_time.is_set || is_set(stats_start_time.yfilter)) leaf_name_data.push_back(stats_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::AaaTacacsStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::AaaTacacsStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaData::AaaTacacsStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacacs-server-address")
    {
        tacacs_server_address = value;
        tacacs_server_address.value_namespace = name_space;
        tacacs_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-opens")
    {
        connection_opens = value;
        connection_opens.value_namespace = name_space;
        connection_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-closes")
    {
        connection_closes = value;
        connection_closes.value_namespace = name_space;
        connection_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts = value;
        connection_aborts.value_namespace = name_space;
        connection_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-failures")
    {
        connection_failures = value;
        connection_failures.value_namespace = name_space;
        connection_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts = value;
        connection_timeouts.value_namespace = name_space;
        connection_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
        messages_sent.value_namespace = name_space;
        messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
        messages_received.value_namespace = name_space;
        messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
        errors_received.value_namespace = name_space;
        errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-start-time")
    {
        stats_start_time = value;
        stats_start_time.value_namespace = name_space;
        stats_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaTacacsStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "tacacs-server-address")
    {
        tacacs_server_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "connection-opens")
    {
        connection_opens.yfilter = yfilter;
    }
    if(value_path == "connection-closes")
    {
        connection_closes.yfilter = yfilter;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts.yfilter = yfilter;
    }
    if(value_path == "connection-failures")
    {
        connection_failures.yfilter = yfilter;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts.yfilter = yfilter;
    }
    if(value_path == "messages-sent")
    {
        messages_sent.yfilter = yfilter;
    }
    if(value_path == "messages-received")
    {
        messages_received.yfilter = yfilter;
    }
    if(value_path == "errors-received")
    {
        errors_received.yfilter = yfilter;
    }
    if(value_path == "stats-start-time")
    {
        stats_start_time.yfilter = yfilter;
    }
}

bool AaaData::AaaTacacsStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "tacacs-server-address" || name == "port" || name == "connection-opens" || name == "connection-closes" || name == "connection-aborts" || name == "connection-failures" || name == "connection-timeouts" || name == "messages-sent" || name == "messages-received" || name == "errors-received" || name == "stats-start-time")
        return true;
    return false;
}

AaaData::AaaLdapCounters::AaaLdapCounters()
    :
    ldap_server_address{YType::str, "ldap-server-address"},
    ldap_server_port{YType::uint16, "ldap-server-port"},
    connection_opens{YType::uint32, "connection-opens"},
    messages_sent{YType::uint32, "messages-sent"},
    messages_received{YType::uint32, "messages-received"},
    errors_received{YType::uint32, "errors-received"},
    connection_closes{YType::uint32, "connection-closes"},
    connection_aborts{YType::uint32, "connection-aborts"},
    connection_failures{YType::uint32, "connection-failures"},
    connection_timeouts{YType::uint32, "connection-timeouts"},
    counters_start_time{YType::str, "counters-start-time"}
{

    yang_name = "aaa-ldap-counters"; yang_parent_name = "aaa-data"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaData::AaaLdapCounters::~AaaLdapCounters()
{
}

bool AaaData::AaaLdapCounters::has_data() const
{
    if (is_presence_container) return true;
    return ldap_server_address.is_set
	|| ldap_server_port.is_set
	|| connection_opens.is_set
	|| messages_sent.is_set
	|| messages_received.is_set
	|| errors_received.is_set
	|| connection_closes.is_set
	|| connection_aborts.is_set
	|| connection_failures.is_set
	|| connection_timeouts.is_set
	|| counters_start_time.is_set;
}

bool AaaData::AaaLdapCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldap_server_address.yfilter)
	|| ydk::is_set(ldap_server_port.yfilter)
	|| ydk::is_set(connection_opens.yfilter)
	|| ydk::is_set(messages_sent.yfilter)
	|| ydk::is_set(messages_received.yfilter)
	|| ydk::is_set(errors_received.yfilter)
	|| ydk::is_set(connection_closes.yfilter)
	|| ydk::is_set(connection_aborts.yfilter)
	|| ydk::is_set(connection_failures.yfilter)
	|| ydk::is_set(connection_timeouts.yfilter)
	|| ydk::is_set(counters_start_time.yfilter);
}

std::string AaaData::AaaLdapCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaData::AaaLdapCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-ldap-counters";
    ADD_KEY_TOKEN(ldap_server_address, "ldap-server-address");
    ADD_KEY_TOKEN(ldap_server_port, "ldap-server-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaLdapCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldap_server_address.is_set || is_set(ldap_server_address.yfilter)) leaf_name_data.push_back(ldap_server_address.get_name_leafdata());
    if (ldap_server_port.is_set || is_set(ldap_server_port.yfilter)) leaf_name_data.push_back(ldap_server_port.get_name_leafdata());
    if (connection_opens.is_set || is_set(connection_opens.yfilter)) leaf_name_data.push_back(connection_opens.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.yfilter)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.yfilter)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (errors_received.is_set || is_set(errors_received.yfilter)) leaf_name_data.push_back(errors_received.get_name_leafdata());
    if (connection_closes.is_set || is_set(connection_closes.yfilter)) leaf_name_data.push_back(connection_closes.get_name_leafdata());
    if (connection_aborts.is_set || is_set(connection_aborts.yfilter)) leaf_name_data.push_back(connection_aborts.get_name_leafdata());
    if (connection_failures.is_set || is_set(connection_failures.yfilter)) leaf_name_data.push_back(connection_failures.get_name_leafdata());
    if (connection_timeouts.is_set || is_set(connection_timeouts.yfilter)) leaf_name_data.push_back(connection_timeouts.get_name_leafdata());
    if (counters_start_time.is_set || is_set(counters_start_time.yfilter)) leaf_name_data.push_back(counters_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::AaaLdapCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::AaaLdapCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaData::AaaLdapCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldap-server-address")
    {
        ldap_server_address = value;
        ldap_server_address.value_namespace = name_space;
        ldap_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldap-server-port")
    {
        ldap_server_port = value;
        ldap_server_port.value_namespace = name_space;
        ldap_server_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-opens")
    {
        connection_opens = value;
        connection_opens.value_namespace = name_space;
        connection_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
        messages_sent.value_namespace = name_space;
        messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
        messages_received.value_namespace = name_space;
        messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors-received")
    {
        errors_received = value;
        errors_received.value_namespace = name_space;
        errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-closes")
    {
        connection_closes = value;
        connection_closes.value_namespace = name_space;
        connection_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts = value;
        connection_aborts.value_namespace = name_space;
        connection_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-failures")
    {
        connection_failures = value;
        connection_failures.value_namespace = name_space;
        connection_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts = value;
        connection_timeouts.value_namespace = name_space;
        connection_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counters-start-time")
    {
        counters_start_time = value;
        counters_start_time.value_namespace = name_space;
        counters_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaLdapCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldap-server-address")
    {
        ldap_server_address.yfilter = yfilter;
    }
    if(value_path == "ldap-server-port")
    {
        ldap_server_port.yfilter = yfilter;
    }
    if(value_path == "connection-opens")
    {
        connection_opens.yfilter = yfilter;
    }
    if(value_path == "messages-sent")
    {
        messages_sent.yfilter = yfilter;
    }
    if(value_path == "messages-received")
    {
        messages_received.yfilter = yfilter;
    }
    if(value_path == "errors-received")
    {
        errors_received.yfilter = yfilter;
    }
    if(value_path == "connection-closes")
    {
        connection_closes.yfilter = yfilter;
    }
    if(value_path == "connection-aborts")
    {
        connection_aborts.yfilter = yfilter;
    }
    if(value_path == "connection-failures")
    {
        connection_failures.yfilter = yfilter;
    }
    if(value_path == "connection-timeouts")
    {
        connection_timeouts.yfilter = yfilter;
    }
    if(value_path == "counters-start-time")
    {
        counters_start_time.yfilter = yfilter;
    }
}

bool AaaData::AaaLdapCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldap-server-address" || name == "ldap-server-port" || name == "connection-opens" || name == "messages-sent" || name == "messages-received" || name == "errors-received" || name == "connection-closes" || name == "connection-aborts" || name == "connection-failures" || name == "connection-timeouts" || name == "counters-start-time")
        return true;
    return false;
}

AaaData::AaaUsers::AaaUsers()
    :
    username{YType::str, "username"}
        ,
    aaa_sessions(this, {"aaa_uid"})
{

    yang_name = "aaa-users"; yang_parent_name = "aaa-data"; is_top_level_class = false; has_list_ancestor = false; 
}

AaaData::AaaUsers::~AaaUsers()
{
}

bool AaaData::AaaUsers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aaa_sessions.len(); index++)
    {
        if(aaa_sessions[index]->has_data())
            return true;
    }
    return username.is_set;
}

bool AaaData::AaaUsers::has_operation() const
{
    for (std::size_t index=0; index<aaa_sessions.len(); index++)
    {
        if(aaa_sessions[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string AaaData::AaaUsers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaData::AaaUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-users";
    ADD_KEY_TOKEN(username, "username");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaUsers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::AaaUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-sessions")
    {
        auto ent_ = std::make_shared<AaaData::AaaUsers::AaaSessions>();
        ent_->parent = this;
        aaa_sessions.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::AaaUsers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aaa_sessions.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AaaData::AaaUsers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaUsers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool AaaData::AaaUsers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-sessions" || name == "username")
        return true;
    return false;
}

AaaData::AaaUsers::AaaSessions::AaaSessions()
    :
    aaa_uid{YType::uint32, "aaa-uid"},
    session_id{YType::uint32, "session-id"},
    ip_addr{YType::str, "ip-addr"},
    protocol{YType::enumeration, "protocol"},
    login_time{YType::str, "login-time"}
{

    yang_name = "aaa-sessions"; yang_parent_name = "aaa-users"; is_top_level_class = false; has_list_ancestor = true; 
}

AaaData::AaaUsers::AaaSessions::~AaaSessions()
{
}

bool AaaData::AaaUsers::AaaSessions::has_data() const
{
    if (is_presence_container) return true;
    return aaa_uid.is_set
	|| session_id.is_set
	|| ip_addr.is_set
	|| protocol.is_set
	|| login_time.is_set;
}

bool AaaData::AaaUsers::AaaSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_uid.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(login_time.yfilter);
}

std::string AaaData::AaaUsers::AaaSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-sessions";
    ADD_KEY_TOKEN(aaa_uid, "aaa-uid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaUsers::AaaSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_uid.is_set || is_set(aaa_uid.yfilter)) leaf_name_data.push_back(aaa_uid.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.yfilter)) leaf_name_data.push_back(login_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AaaData::AaaUsers::AaaSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AaaData::AaaUsers::AaaSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AaaData::AaaUsers::AaaSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-uid")
    {
        aaa_uid = value;
        aaa_uid.value_namespace = name_space;
        aaa_uid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login-time")
    {
        login_time = value;
        login_time.value_namespace = name_space;
        login_time.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaUsers::AaaSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-uid")
    {
        aaa_uid.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "login-time")
    {
        login_time.yfilter = yfilter;
    }
}

bool AaaData::AaaUsers::AaaSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-uid" || name == "session-id" || name == "ip-addr" || name == "protocol" || name == "login-time")
        return true;
    return false;
}

const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_none {0, "aaa-sess-proto-type-none"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_invalid {1, "aaa-sess-proto-type-invalid"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lcp {2, "aaa-sess-proto-type-lcp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip {3, "aaa-sess-proto-type-ip"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipsec {4, "aaa-sess-proto-type-ipsec"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipx {5, "aaa-sess-proto-type-ipx"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_atalk {6, "aaa-sess-proto-type-atalk"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_xremote {7, "aaa-sess-proto-type-xremote"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tn3270 {8, "aaa-sess-proto-type-tn3270"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_telnet {9, "aaa-sess-proto-type-telnet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tcp_clear {10, "aaa-sess-proto-type-tcp-clear"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rlogin {11, "aaa-sess-proto-type-rlogin"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lat {12, "aaa-sess-proto-type-lat"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pad {13, "aaa-sess-proto-type-pad"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_osicp {14, "aaa-sess-proto-type-osicp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tagcp {15, "aaa-sess-proto-type-tagcp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bacp {16, "aaa-sess-proto-type-bacp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_decnet {17, "aaa-sess-proto-type-decnet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ccp {18, "aaa-sess-proto-type-ccp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cdp {19, "aaa-sess-proto-type-cdp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bridging {20, "aaa-sess-proto-type-bridging"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_nbf {21, "aaa-sess-proto-type-nbf"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bap {22, "aaa-sess-proto-type-bap"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_multilink {23, "aaa-sess-proto-type-multilink"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_h323 {24, "aaa-sess-proto-type-h323"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_unknown {25, "aaa-sess-proto-type-unknown"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_call_accept {26, "aaa-sess-proto-type-call-accept"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vpdn_session {27, "aaa-sess-proto-type-vpdn-session"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rm_call_status {28, "aaa-sess-proto-type-rm-call-status"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rm_nas_status {29, "aaa-sess-proto-type-rm-nas-status"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dial_in {30, "aaa-sess-proto-type-dial-in"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dial_out {31, "aaa-sess-proto-type-dial-out"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ss7 {32, "aaa-sess-proto-type-ss7"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rms_stop {33, "aaa-sess-proto-type-rms-stop"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rms_start {34, "aaa-sess-proto-type-rms-start"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vpdn {35, "aaa-sess-proto-type-vpdn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_sss {36, "aaa-sess-proto-type-sss"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_subscriber {37, "aaa-sess-proto-type-subscriber"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_atm {38, "aaa-sess-proto-type-atm"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ssh {39, "aaa-sess-proto-type-ssh"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipv6 {40, "aaa-sess-proto-type-ipv6"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_aironet {41, "aaa-sess-proto-type-aironet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pppoe {42, "aaa-sess-proto-type-pppoe"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_entity {43, "aaa-sess-proto-type-entity"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cdma {44, "aaa-sess-proto-type-cdma"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_crb {45, "aaa-sess-proto-type-crb"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_template {46, "aaa-sess-proto-type-template"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_aaa {47, "aaa-sess-proto-type-aaa"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_epd {48, "aaa-sess-proto-type-epd"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_mac {49, "aaa-sess-proto-type-mac"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_leap {50, "aaa-sess-proto-type-leap"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_igmp {51, "aaa-sess-proto-type-igmp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_webvpn {52, "aaa-sess-proto-type-webvpn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cts {53, "aaa-sess-proto-type-cts"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_radius {54, "aaa-sess-proto-type-radius"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_evc {55, "aaa-sess-proto-type-evc"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_elmi {56, "aaa-sess-proto-type-elmi"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dot1x {57, "aaa-sess-proto-type-dot1x"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dtp {58, "aaa-sess-proto-type-dtp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lacp {59, "aaa-sess-proto-type-lacp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pagp {60, "aaa-sess-proto-type-pagp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_stp {61, "aaa-sess-proto-type-stp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vtp {62, "aaa-sess-proto-type-vtp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_mac_tunnel {63, "aaa-sess-proto-type-ethernet-mac-tunnel"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bridge_domain {64, "aaa-sess-proto-type-bridge-domain"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_cfm {65, "aaa-sess-proto-type-ethernet-cfm"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_service_instance {66, "aaa-sess-proto-type-ethernet-service-instance"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_service_group {67, "aaa-sess-proto-type-service-group"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip_dhcp_snooping {68, "aaa-sess-proto-type-ip-dhcp-snooping"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip_source_guard {69, "aaa-sess-proto-type-ip-source-guard"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_error_disable {70, "aaa-sess-proto-type-error-disable"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cmac_bridge_domain {71, "aaa-sess-proto-type-cmac-bridge-domain"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_mac_in_mac_tunnel {72, "aaa-sess-proto-type-mac-in-mac-tunnel"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_l2vpn {73, "aaa-sess-proto-type-l2vpn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_snmp {74, "aaa-sess-proto-type-snmp"};


}
}

