
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_92.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroups()
{
    yang_name = "attribute-filter-groups"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilterGroups' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-group")
    {
        for(auto const & c : attribute_filter_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup>();
        c->parent = this;
        attribute_filter_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    group_name{YType::str, "group-name"},
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    attribute_filter_total_group_count{YType::uint32, "attribute-filter-total-group-count"}
{
    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups";
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_entry.size(); index++)
    {
        if(attribute_filter_entry[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| attribute_filter_group_name.is_set
	|| attribute_filter_total_group_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_entry.size(); index++)
    {
        if(attribute_filter_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(attribute_filter_total_group_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group" <<"[group-name='" <<group_name <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilterGroup' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (attribute_filter_total_group_count.is_set || is_set(attribute_filter_total_group_count.yfilter)) leaf_name_data.push_back(attribute_filter_total_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-entry")
    {
        for(auto const & c : attribute_filter_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry>();
        c->parent = this;
        attribute_filter_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count = value;
        attribute_filter_total_group_count.value_namespace = name_space;
        attribute_filter_total_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry" || name == "group-name" || name == "attribute-filter-group-name" || name == "attribute-filter-total-group-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::AttributeFilterEntry()
    :
    attribute_filter_entry_range_end{YType::uint32, "attribute-filter-entry-range-end"},
    attribute_filter_entry_range_start{YType::uint32, "attribute-filter-entry-range-start"},
    attribute_filter_entry_requested_action{YType::enumeration, "attribute-filter-entry-requested-action"}
{
    yang_name = "attribute-filter-entry"; yang_parent_name = "attribute-filter-group";
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::~AttributeFilterEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_data() const
{
    return attribute_filter_entry_range_end.is_set
	|| attribute_filter_entry_range_start.is_set
	|| attribute_filter_entry_requested_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_entry_range_end.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_start.yfilter)
	|| ydk::is_set(attribute_filter_entry_requested_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-entry";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeFilterEntry' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_entry_range_end.is_set || is_set(attribute_filter_entry_range_end.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_end.get_name_leafdata());
    if (attribute_filter_entry_range_start.is_set || is_set(attribute_filter_entry_range_start.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_start.get_name_leafdata());
    if (attribute_filter_entry_requested_action.is_set || is_set(attribute_filter_entry_requested_action.yfilter)) leaf_name_data.push_back(attribute_filter_entry_requested_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end = value;
        attribute_filter_entry_range_end.value_namespace = name_space;
        attribute_filter_entry_range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start = value;
        attribute_filter_entry_range_start.value_namespace = name_space;
        attribute_filter_entry_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action = value;
        attribute_filter_entry_requested_action.value_namespace = name_space;
        attribute_filter_entry_requested_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry-range-end" || name == "attribute-filter-entry-range-start" || name == "attribute-filter-entry-requested-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServerList()
{
    yang_name = "rpki-server-list"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::~RpkiServerList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_data() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server-list";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiServerList' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-server")
    {
        for(auto const & c : rpki_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer>();
        c->parent = this;
        rpki_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::RpkiServer()
    :
    close_reason{YType::enumeration, "close-reason"},
    close_time{YType::uint32, "close-time"},
    close_time_real{YType::uint32, "close-time-real"},
    ipv4roa{YType::uint32, "ipv4roa"},
    ipv4roa_announce{YType::uint32, "ipv4roa-announce"},
    ipv4roa_withdraw{YType::uint32, "ipv4roa-withdraw"},
    ipv6roa{YType::uint32, "ipv6roa"},
    ipv6roa_announce{YType::uint32, "ipv6roa-announce"},
    ipv6roa_withdraw{YType::uint32, "ipv6roa-withdraw"},
    name{YType::str, "name"},
    nonce{YType::uint32, "nonce"},
    password{YType::str, "password"},
    port{YType::uint32, "port"},
    preference{YType::uint32, "preference"},
    proto_error{YType::enumeration, "proto-error"},
    proto_state{YType::enumeration, "proto-state"},
    proto_state_time{YType::uint32, "proto-state-time"},
    purge_time{YType::int32, "purge-time"},
    read_bytes{YType::uint32, "read-bytes"},
    refresh_time{YType::int32, "refresh-time"},
    response_time{YType::int32, "response-time"},
    retries{YType::uint32, "retries"},
    serial{YType::uint32, "serial"},
    shutdown{YType::boolean, "shutdown"},
    sshpid{YType::uint32, "sshpid"},
    state{YType::enumeration, "state"},
    state_time{YType::uint32, "state-time"},
    transport{YType::uint32, "transport"},
    username{YType::str, "username"},
    write_bytes{YType::uint32, "write-bytes"}
{
    yang_name = "rpki-server"; yang_parent_name = "rpki-server-list";
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_data() const
{
    return close_reason.is_set
	|| close_time.is_set
	|| close_time_real.is_set
	|| ipv4roa.is_set
	|| ipv4roa_announce.is_set
	|| ipv4roa_withdraw.is_set
	|| ipv6roa.is_set
	|| ipv6roa_announce.is_set
	|| ipv6roa_withdraw.is_set
	|| name.is_set
	|| nonce.is_set
	|| password.is_set
	|| port.is_set
	|| preference.is_set
	|| proto_error.is_set
	|| proto_state.is_set
	|| proto_state_time.is_set
	|| purge_time.is_set
	|| read_bytes.is_set
	|| refresh_time.is_set
	|| response_time.is_set
	|| retries.is_set
	|| serial.is_set
	|| shutdown.is_set
	|| sshpid.is_set
	|| state.is_set
	|| state_time.is_set
	|| transport.is_set
	|| username.is_set
	|| write_bytes.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close_reason.yfilter)
	|| ydk::is_set(close_time.yfilter)
	|| ydk::is_set(close_time_real.yfilter)
	|| ydk::is_set(ipv4roa.yfilter)
	|| ydk::is_set(ipv4roa_announce.yfilter)
	|| ydk::is_set(ipv4roa_withdraw.yfilter)
	|| ydk::is_set(ipv6roa.yfilter)
	|| ydk::is_set(ipv6roa_announce.yfilter)
	|| ydk::is_set(ipv6roa_withdraw.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(proto_error.yfilter)
	|| ydk::is_set(proto_state.yfilter)
	|| ydk::is_set(proto_state_time.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(read_bytes.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(sshpid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_time.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(write_bytes.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiServer' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close_reason.is_set || is_set(close_reason.yfilter)) leaf_name_data.push_back(close_reason.get_name_leafdata());
    if (close_time.is_set || is_set(close_time.yfilter)) leaf_name_data.push_back(close_time.get_name_leafdata());
    if (close_time_real.is_set || is_set(close_time_real.yfilter)) leaf_name_data.push_back(close_time_real.get_name_leafdata());
    if (ipv4roa.is_set || is_set(ipv4roa.yfilter)) leaf_name_data.push_back(ipv4roa.get_name_leafdata());
    if (ipv4roa_announce.is_set || is_set(ipv4roa_announce.yfilter)) leaf_name_data.push_back(ipv4roa_announce.get_name_leafdata());
    if (ipv4roa_withdraw.is_set || is_set(ipv4roa_withdraw.yfilter)) leaf_name_data.push_back(ipv4roa_withdraw.get_name_leafdata());
    if (ipv6roa.is_set || is_set(ipv6roa.yfilter)) leaf_name_data.push_back(ipv6roa.get_name_leafdata());
    if (ipv6roa_announce.is_set || is_set(ipv6roa_announce.yfilter)) leaf_name_data.push_back(ipv6roa_announce.get_name_leafdata());
    if (ipv6roa_withdraw.is_set || is_set(ipv6roa_withdraw.yfilter)) leaf_name_data.push_back(ipv6roa_withdraw.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (proto_error.is_set || is_set(proto_error.yfilter)) leaf_name_data.push_back(proto_error.get_name_leafdata());
    if (proto_state.is_set || is_set(proto_state.yfilter)) leaf_name_data.push_back(proto_state.get_name_leafdata());
    if (proto_state_time.is_set || is_set(proto_state_time.yfilter)) leaf_name_data.push_back(proto_state_time.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (read_bytes.is_set || is_set(read_bytes.yfilter)) leaf_name_data.push_back(read_bytes.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sshpid.is_set || is_set(sshpid.yfilter)) leaf_name_data.push_back(sshpid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_time.is_set || is_set(state_time.yfilter)) leaf_name_data.push_back(state_time.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (write_bytes.is_set || is_set(write_bytes.yfilter)) leaf_name_data.push_back(write_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close-reason")
    {
        close_reason = value;
        close_reason.value_namespace = name_space;
        close_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time")
    {
        close_time = value;
        close_time.value_namespace = name_space;
        close_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time-real")
    {
        close_time_real = value;
        close_time_real.value_namespace = name_space;
        close_time_real.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa = value;
        ipv4roa.value_namespace = name_space;
        ipv4roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce = value;
        ipv4roa_announce.value_namespace = name_space;
        ipv4roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw = value;
        ipv4roa_withdraw.value_namespace = name_space;
        ipv4roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa = value;
        ipv6roa.value_namespace = name_space;
        ipv6roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce = value;
        ipv6roa_announce.value_namespace = name_space;
        ipv6roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw = value;
        ipv6roa_withdraw.value_namespace = name_space;
        ipv6roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-error")
    {
        proto_error = value;
        proto_error.value_namespace = name_space;
        proto_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state")
    {
        proto_state = value;
        proto_state.value_namespace = name_space;
        proto_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time = value;
        proto_state_time.value_namespace = name_space;
        proto_state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-bytes")
    {
        read_bytes = value;
        read_bytes.value_namespace = name_space;
        read_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshpid")
    {
        sshpid = value;
        sshpid.value_namespace = name_space;
        sshpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-time")
    {
        state_time = value;
        state_time.value_namespace = name_space;
        state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-bytes")
    {
        write_bytes = value;
        write_bytes.value_namespace = name_space;
        write_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close-reason")
    {
        close_reason.yfilter = yfilter;
    }
    if(value_path == "close-time")
    {
        close_time.yfilter = yfilter;
    }
    if(value_path == "close-time-real")
    {
        close_time_real.yfilter = yfilter;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "proto-error")
    {
        proto_error.yfilter = yfilter;
    }
    if(value_path == "proto-state")
    {
        proto_state.yfilter = yfilter;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "read-bytes")
    {
        read_bytes.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "sshpid")
    {
        sshpid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-time")
    {
        state_time.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "write-bytes")
    {
        write_bytes.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close-reason" || name == "close-time" || name == "close-time-real" || name == "ipv4roa" || name == "ipv4roa-announce" || name == "ipv4roa-withdraw" || name == "ipv6roa" || name == "ipv6roa-announce" || name == "ipv6roa-withdraw" || name == "name" || name == "nonce" || name == "password" || name == "port" || name == "preference" || name == "proto-error" || name == "proto-state" || name == "proto-state-time" || name == "purge-time" || name == "read-bytes" || name == "refresh-time" || name == "response-time" || name == "retries" || name == "serial" || name == "shutdown" || name == "sshpid" || name == "state" || name == "state-time" || name == "transport" || name == "username" || name == "write-bytes")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoutes()
{
    yang_name = "rpki-routes"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::~RpkiRoutes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_data() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-routes";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiRoutes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        for(auto const & c : rpki_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute>();
        c->parent = this;
        rpki_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute()
    :
    address{YType::str, "address"},
    af_name{YType::enumeration, "af-name"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"}
{
    yang_name = "rpki-route"; yang_parent_name = "rpki-routes";
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::~RpkiRoute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_data() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return address.is_set
	|| af_name.is_set
	|| maximum.is_set
	|| minimum.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiRoute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        for(auto const & c : rpki_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_>();
        c->parent = this;
        rpki_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route" || name == "address" || name == "af-name" || name == "maximum" || name == "minimum")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::RpkiRoute_()
    :
    address{YType::str, "address"},
    af_name{YType::enumeration, "af-name"},
    as{YType::uint32, "as"},
    max_prefix_len{YType::uint8, "max-prefix-len"},
    min_prefix_len{YType::uint8, "min-prefix-len"},
    refcount{YType::uint16, "refcount"},
    server{YType::str, "server"},
    stale{YType::boolean, "stale"}
{
    yang_name = "rpki-route"; yang_parent_name = "rpki-route";
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::~RpkiRoute_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_data() const
{
    return address.is_set
	|| af_name.is_set
	|| as.is_set
	|| max_prefix_len.is_set
	|| min_prefix_len.is_set
	|| refcount.is_set
	|| server.is_set
	|| stale.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(max_prefix_len.yfilter)
	|| ydk::is_set(min_prefix_len.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(stale.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiRoute_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (max_prefix_len.is_set || is_set(max_prefix_len.yfilter)) leaf_name_data.push_back(max_prefix_len.get_name_leafdata());
    if (min_prefix_len.is_set || is_set(min_prefix_len.yfilter)) leaf_name_data.push_back(min_prefix_len.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len = value;
        max_prefix_len.value_namespace = name_space;
        max_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len = value;
        min_prefix_len.value_namespace = name_space;
        min_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len.yfilter = yfilter;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len.yfilter = yfilter;
    }
    if(value_path == "refcount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "af-name" || name == "as" || name == "max-prefix-len" || name == "min-prefix-len" || name == "refcount" || name == "server" || name == "stale")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::UpdateInboundErrorProcess()
    :
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_error_handling_basic_ebgp{YType::boolean, "update-error-handling-basic-ebgp"},
    update_error_handling_basic_ibgp{YType::boolean, "update-error-handling-basic-ibgp"},
    update_error_handling_extended_ebgp{YType::boolean, "update-error-handling-extended-ebgp"},
    update_error_handling_extended_ibgp{YType::boolean, "update-error-handling-extended-ibgp"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"}
    	,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-process"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::~UpdateInboundErrorProcess()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_data() const
{
    return last_update_malformed_age.is_set
	|| update_error_handling_basic_ebgp.is_set
	|| update_error_handling_basic_ibgp.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(update_error_handling_basic_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_basic_ibgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ibgp.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-process";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorProcess' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_error_handling_basic_ebgp.is_set || is_set(update_error_handling_basic_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ebgp.get_name_leafdata());
    if (update_error_handling_basic_ibgp.is_set || is_set(update_error_handling_basic_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ibgp.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp = value;
        update_error_handling_basic_ebgp.value_namespace = name_space;
        update_error_handling_basic_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp = value;
        update_error_handling_basic_ibgp.value_namespace = name_space;
        update_error_handling_basic_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
        update_error_handling_extended_ebgp.value_namespace = name_space;
        update_error_handling_extended_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
        update_error_handling_extended_ibgp.value_namespace = name_space;
        update_error_handling_extended_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "last-update-malformed-age" || name == "update-error-handling-basic-ebgp" || name == "update-error-handling-basic-ibgp" || name == "update-error-handling-extended-ebgp" || name == "update-error-handling-extended-ibgp" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-process";
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::RpkiSummary()
    :
    ipv4roa_nets{YType::uint32, "ipv4roa-nets"},
    ipv4roa_paths{YType::uint32, "ipv4roa-paths"},
    ipv6roa_nets{YType::uint32, "ipv6roa-nets"},
    ipv6roa_paths{YType::uint32, "ipv6roa-paths"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disabled{YType::boolean, "rpki-disabled"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    servers{YType::uint32, "servers"}
{
    yang_name = "rpki-summary"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::~RpkiSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_data() const
{
    return ipv4roa_nets.is_set
	|| ipv4roa_paths.is_set
	|| ipv6roa_nets.is_set
	|| ipv6roa_paths.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disabled.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| servers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4roa_nets.yfilter)
	|| ydk::is_set(ipv4roa_paths.yfilter)
	|| ydk::is_set(ipv6roa_nets.yfilter)
	|| ydk::is_set(ipv6roa_paths.yfilter)
	|| ydk::is_set(rpki_allow_invalid.yfilter)
	|| ydk::is_set(rpki_disabled.yfilter)
	|| ydk::is_set(rpki_signal_ibgp.yfilter)
	|| ydk::is_set(rpki_use_validity.yfilter)
	|| ydk::is_set(servers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-summary";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpkiSummary' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4roa_nets.is_set || is_set(ipv4roa_nets.yfilter)) leaf_name_data.push_back(ipv4roa_nets.get_name_leafdata());
    if (ipv4roa_paths.is_set || is_set(ipv4roa_paths.yfilter)) leaf_name_data.push_back(ipv4roa_paths.get_name_leafdata());
    if (ipv6roa_nets.is_set || is_set(ipv6roa_nets.yfilter)) leaf_name_data.push_back(ipv6roa_nets.get_name_leafdata());
    if (ipv6roa_paths.is_set || is_set(ipv6roa_paths.yfilter)) leaf_name_data.push_back(ipv6roa_paths.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disabled.is_set || is_set(rpki_disabled.yfilter)) leaf_name_data.push_back(rpki_disabled.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.yfilter)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets = value;
        ipv4roa_nets.value_namespace = name_space;
        ipv4roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths = value;
        ipv4roa_paths.value_namespace = name_space;
        ipv4roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets = value;
        ipv6roa_nets.value_namespace = name_space;
        ipv6roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths = value;
        ipv6roa_paths.value_namespace = name_space;
        ipv6roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
        rpki_allow_invalid.value_namespace = name_space;
        rpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-disabled")
    {
        rpki_disabled = value;
        rpki_disabled.value_namespace = name_space;
        rpki_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
        rpki_signal_ibgp.value_namespace = name_space;
        rpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
        rpki_use_validity.value_namespace = name_space;
        rpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths.yfilter = yfilter;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-disabled")
    {
        rpki_disabled.yfilter = yfilter;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4roa-nets" || name == "ipv4roa-paths" || name == "ipv6roa-nets" || name == "ipv6roa-paths" || name == "rpki-allow-invalid" || name == "rpki-disabled" || name == "rpki-signal-ibgp" || name == "rpki-use-validity" || name == "servers")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstancesTable()
    :
    bpm_instances(std::make_shared<Bgp::BpmInstancesTable::BpmInstances>())
{
    bpm_instances->parent = this;

    yang_name = "bpm-instances-table"; yang_parent_name = "bgp";
}

Bgp::BpmInstancesTable::~BpmInstancesTable()
{
}

bool Bgp::BpmInstancesTable::has_data() const
{
    return (bpm_instances !=  nullptr && bpm_instances->has_data());
}

bool Bgp::BpmInstancesTable::has_operation() const
{
    return is_set(yfilter)
	|| (bpm_instances !=  nullptr && bpm_instances->has_operation());
}

std::string Bgp::BpmInstancesTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances-table";

    return path_buffer.str();

}

const EntityPath Bgp::BpmInstancesTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpm-instances")
    {
        if(bpm_instances == nullptr)
        {
            bpm_instances = std::make_shared<Bgp::BpmInstancesTable::BpmInstances>();
        }
        return bpm_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpm_instances != nullptr)
    {
        children["bpm-instances"] = bpm_instances;
    }

    return children;
}

void Bgp::BpmInstancesTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpm-instances")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::BpmInstances()
{
    yang_name = "bpm-instances"; yang_parent_name = "bpm-instances-table";
}

Bgp::BpmInstancesTable::BpmInstances::~BpmInstances()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::BpmInstancesTable::BpmInstances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances";

    return path_buffer.str();

}

const EntityPath Bgp::BpmInstancesTable::BpmInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::BpmInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::Instance()
    :
    as_number{YType::uint32, "as-number"},
    install_diversion_enabled{YType::boolean, "install-diversion-enabled"},
    instance_identifier{YType::uint16, "instance-identifier"},
    instance_name_str{YType::str, "instance-name-str"},
    number_of_vrfs{YType::uint32, "number-of-vrfs"},
    placed_group_id{YType::uint16, "placed-group-id"},
    read_only_enabled{YType::boolean, "read-only-enabled"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"}
{
    yang_name = "instance"; yang_parent_name = "bpm-instances";
}

Bgp::BpmInstancesTable::BpmInstances::Instance::~Instance()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_data() const
{
    for (std::size_t index=0; index<af_array.size(); index++)
    {
        if(af_array[index]->has_data())
            return true;
    }
    return as_number.is_set
	|| install_diversion_enabled.is_set
	|| instance_identifier.is_set
	|| instance_name_str.is_set
	|| number_of_vrfs.is_set
	|| placed_group_id.is_set
	|| read_only_enabled.is_set
	|| srgb_end_configured.is_set
	|| srgb_start_configured.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_operation() const
{
    for (std::size_t index=0; index<af_array.size(); index++)
    {
        if(af_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(install_diversion_enabled.yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| ydk::is_set(instance_name_str.yfilter)
	|| ydk::is_set(number_of_vrfs.yfilter)
	|| ydk::is_set(placed_group_id.yfilter)
	|| ydk::is_set(read_only_enabled.yfilter)
	|| ydk::is_set(srgb_end_configured.yfilter)
	|| ydk::is_set(srgb_start_configured.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath Bgp::BpmInstancesTable::BpmInstances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (install_diversion_enabled.is_set || is_set(install_diversion_enabled.yfilter)) leaf_name_data.push_back(install_diversion_enabled.get_name_leafdata());
    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());
    if (instance_name_str.is_set || is_set(instance_name_str.yfilter)) leaf_name_data.push_back(instance_name_str.get_name_leafdata());
    if (number_of_vrfs.is_set || is_set(number_of_vrfs.yfilter)) leaf_name_data.push_back(number_of_vrfs.get_name_leafdata());
    if (placed_group_id.is_set || is_set(placed_group_id.yfilter)) leaf_name_data.push_back(placed_group_id.get_name_leafdata());
    if (read_only_enabled.is_set || is_set(read_only_enabled.yfilter)) leaf_name_data.push_back(read_only_enabled.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.yfilter)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.yfilter)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-array")
    {
        for(auto const & c : af_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray>();
        c->parent = this;
        af_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled = value;
        install_diversion_enabled.value_namespace = name_space;
        install_diversion_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str = value;
        instance_name_str.value_namespace = name_space;
        instance_name_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs = value;
        number_of_vrfs.value_namespace = name_space;
        number_of_vrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id = value;
        placed_group_id.value_namespace = name_space;
        placed_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled = value;
        read_only_enabled.value_namespace = name_space;
        read_only_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
        srgb_end_configured.value_namespace = name_space;
        srgb_end_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
        srgb_start_configured.value_namespace = name_space;
        srgb_start_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled.yfilter = yfilter;
    }
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str.yfilter = yfilter;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs.yfilter = yfilter;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id.yfilter = yfilter;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled.yfilter = yfilter;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-array" || name == "as-number" || name == "install-diversion-enabled" || name == "instance-identifier" || name == "instance-name-str" || name == "number-of-vrfs" || name == "placed-group-id" || name == "read-only-enabled" || name == "srgb-end-configured" || name == "srgb-start-configured")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::AfArray()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "af-array"; yang_parent_name = "instance";
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::~AfArray()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-array";

    return path_buffer.str();

}

const EntityPath Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/instance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

