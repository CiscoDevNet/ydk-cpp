
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::~SsmMapDetails()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMapDetails' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-map-detail")
    {
        for(auto const & c : ssm_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(std::move(c));
        children[segment_path] = ssm_map_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::SsmMapDetails::get_children()
{
    for (auto const & c : ssm_map_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMapDetails::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;
    children["map-info"] = map_info;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::has_data() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| expiration_time.is_set
	|| group_address.is_set
	|| query_interval.is_set
	|| response_pending.is_set
	|| ssm_map_type.is_set
	|| (map_info !=  nullptr && map_info->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(elapsed_time.operation)
	|| is_set(expiration_time.operation)
	|| is_set(group_address.operation)
	|| is_set(query_interval.operation)
	|| is_set(response_pending.operation)
	|| is_set(ssm_map_type.operation)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMapDetail' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.operation)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "map-info")
    {
        if(map_info != nullptr)
        {
            children["map-info"] = map_info;
        }
        else
        {
            map_info = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo>();
            map_info->parent = this;
            children["map-info"] = map_info;
        }
        return children.at("map-info");
    }

    if(child_yang_name == "sources")
    {
        for(auto const & c : sources)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(std::move(c));
        children[segment_path] = sources.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_children()
{
    if(children.find("map-info") == children.end())
    {
        if(map_info != nullptr)
        {
            children["map-info"] = map_info;
        }
    }

    for (auto const & c : sources)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sources' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffs' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-off")
    {
        for(auto const & c : interface_state_off)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(std::move(c));
        children[segment_path] = interface_state_off.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::get_children()
{
    for (auto const & c : interface_state_off)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOff' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOns()
{
    yang_name = "interface-old-format-state-ons"; yang_parent_name = "vrf";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::~InterfaceOldFormatStateOns()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-ons";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormatStateOns' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-old-format-state-on")
    {
        for(auto const & c : interface_old_format_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn>();
        c->parent = this;
        interface_old_format_state_on.push_back(std::move(c));
        children[segment_path] = interface_old_format_state_on.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::get_children()
{
    for (auto const & c : interface_old_format_state_on)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormatStateOn' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::Process::Process()
    :
    amt_gatewaies(std::make_shared<Igmp::Standby::Process::AmtGatewaies>())
	,amt_summary(std::make_shared<Igmp::Standby::Process::AmtSummary>())
	,bvi_statistics(std::make_shared<Igmp::Standby::Process::BviStatistics>())
	,nsf(std::make_shared<Igmp::Standby::Process::Nsf>())
	,nsr(std::make_shared<Igmp::Standby::Process::Nsr>())
	,unicast_qos_adjust_stats(std::make_shared<Igmp::Standby::Process::UnicastQosAdjustStats>())
{
    amt_gatewaies->parent = this;
    children["amt-gatewaies"] = amt_gatewaies;

    amt_summary->parent = this;
    children["amt-summary"] = amt_summary;

    bvi_statistics->parent = this;
    children["bvi-statistics"] = bvi_statistics;

    nsf->parent = this;
    children["nsf"] = nsf;

    nsr->parent = this;
    children["nsr"] = nsr;

    unicast_qos_adjust_stats->parent = this;
    children["unicast-qos-adjust-stats"] = unicast_qos_adjust_stats;

    yang_name = "process"; yang_parent_name = "standby";
}

Igmp::Standby::Process::~Process()
{
}

bool Igmp::Standby::Process::has_data() const
{
    return (amt_gatewaies !=  nullptr && amt_gatewaies->has_data())
	|| (amt_summary !=  nullptr && amt_summary->has_data())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_data());
}

bool Igmp::Standby::Process::has_operation() const
{
    return is_set(operation)
	|| (amt_gatewaies !=  nullptr && amt_gatewaies->has_operation())
	|| (amt_summary !=  nullptr && amt_summary->has_operation())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_operation());
}

std::string Igmp::Standby::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "amt-gatewaies")
    {
        if(amt_gatewaies != nullptr)
        {
            children["amt-gatewaies"] = amt_gatewaies;
        }
        else
        {
            amt_gatewaies = std::make_shared<Igmp::Standby::Process::AmtGatewaies>();
            amt_gatewaies->parent = this;
            children["amt-gatewaies"] = amt_gatewaies;
        }
        return children.at("amt-gatewaies");
    }

    if(child_yang_name == "amt-summary")
    {
        if(amt_summary != nullptr)
        {
            children["amt-summary"] = amt_summary;
        }
        else
        {
            amt_summary = std::make_shared<Igmp::Standby::Process::AmtSummary>();
            amt_summary->parent = this;
            children["amt-summary"] = amt_summary;
        }
        return children.at("amt-summary");
    }

    if(child_yang_name == "bvi-statistics")
    {
        if(bvi_statistics != nullptr)
        {
            children["bvi-statistics"] = bvi_statistics;
        }
        else
        {
            bvi_statistics = std::make_shared<Igmp::Standby::Process::BviStatistics>();
            bvi_statistics->parent = this;
            children["bvi-statistics"] = bvi_statistics;
        }
        return children.at("bvi-statistics");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
        else
        {
            nsf = std::make_shared<Igmp::Standby::Process::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf;
        }
        return children.at("nsf");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<Igmp::Standby::Process::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "unicast-qos-adjust-stats")
    {
        if(unicast_qos_adjust_stats != nullptr)
        {
            children["unicast-qos-adjust-stats"] = unicast_qos_adjust_stats;
        }
        else
        {
            unicast_qos_adjust_stats = std::make_shared<Igmp::Standby::Process::UnicastQosAdjustStats>();
            unicast_qos_adjust_stats->parent = this;
            children["unicast-qos-adjust-stats"] = unicast_qos_adjust_stats;
        }
        return children.at("unicast-qos-adjust-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::get_children()
{
    if(children.find("amt-gatewaies") == children.end())
    {
        if(amt_gatewaies != nullptr)
        {
            children["amt-gatewaies"] = amt_gatewaies;
        }
    }

    if(children.find("amt-summary") == children.end())
    {
        if(amt_summary != nullptr)
        {
            children["amt-summary"] = amt_summary;
        }
    }

    if(children.find("bvi-statistics") == children.end())
    {
        if(bvi_statistics != nullptr)
        {
            children["bvi-statistics"] = bvi_statistics;
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("unicast-qos-adjust-stats") == children.end())
    {
        if(unicast_qos_adjust_stats != nullptr)
        {
            children["unicast-qos-adjust-stats"] = unicast_qos_adjust_stats;
        }
    }

    return children;
}

void Igmp::Standby::Process::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Process::AmtSummary::AmtSummary()
    :
    anycast_prefix{YType::str, "anycast-prefix"},
    gateway_count{YType::uint32, "gateway-count"},
    is_acl_configured{YType::boolean, "is-acl-configured"},
    is_gateway_simulation{YType::boolean, "is-gateway-simulation"},
    is_ou_of_resource{YType::boolean, "is-ou-of-resource"},
    max_gateway{YType::uint32, "max-gateway"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    query_interval{YType::uint32, "query-interval"},
    relay_address{YType::str, "relay-address"},
    tos{YType::uint32, "tos"},
    ttl{YType::uint32, "ttl"},
    tunnel_configured_maximum{YType::uint32, "tunnel-configured-maximum"},
    tunnel_count{YType::uint32, "tunnel-count"}
{
    yang_name = "amt-summary"; yang_parent_name = "process";
}

Igmp::Standby::Process::AmtSummary::~AmtSummary()
{
}

bool Igmp::Standby::Process::AmtSummary::has_data() const
{
    return anycast_prefix.is_set
	|| gateway_count.is_set
	|| is_acl_configured.is_set
	|| is_gateway_simulation.is_set
	|| is_ou_of_resource.is_set
	|| max_gateway.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| query_interval.is_set
	|| relay_address.is_set
	|| tos.is_set
	|| ttl.is_set
	|| tunnel_configured_maximum.is_set
	|| tunnel_count.is_set;
}

bool Igmp::Standby::Process::AmtSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_prefix.operation)
	|| is_set(gateway_count.operation)
	|| is_set(is_acl_configured.operation)
	|| is_set(is_gateway_simulation.operation)
	|| is_set(is_ou_of_resource.operation)
	|| is_set(max_gateway.operation)
	|| is_set(mtu.operation)
	|| is_set(prefix_length.operation)
	|| is_set(query_interval.operation)
	|| is_set(relay_address.operation)
	|| is_set(tos.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_configured_maximum.operation)
	|| is_set(tunnel_count.operation);
}

std::string Igmp::Standby::Process::AmtSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-summary";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::AmtSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_prefix.is_set || is_set(anycast_prefix.operation)) leaf_name_data.push_back(anycast_prefix.get_name_leafdata());
    if (gateway_count.is_set || is_set(gateway_count.operation)) leaf_name_data.push_back(gateway_count.get_name_leafdata());
    if (is_acl_configured.is_set || is_set(is_acl_configured.operation)) leaf_name_data.push_back(is_acl_configured.get_name_leafdata());
    if (is_gateway_simulation.is_set || is_set(is_gateway_simulation.operation)) leaf_name_data.push_back(is_gateway_simulation.get_name_leafdata());
    if (is_ou_of_resource.is_set || is_set(is_ou_of_resource.operation)) leaf_name_data.push_back(is_ou_of_resource.get_name_leafdata());
    if (max_gateway.is_set || is_set(max_gateway.operation)) leaf_name_data.push_back(max_gateway.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (relay_address.is_set || is_set(relay_address.operation)) leaf_name_data.push_back(relay_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_configured_maximum.is_set || is_set(tunnel_configured_maximum.operation)) leaf_name_data.push_back(tunnel_configured_maximum.get_name_leafdata());
    if (tunnel_count.is_set || is_set(tunnel_count.operation)) leaf_name_data.push_back(tunnel_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::AmtSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::AmtSummary::get_children()
{
    return children;
}

void Igmp::Standby::Process::AmtSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-prefix")
    {
        anycast_prefix = value;
    }
    if(value_path == "gateway-count")
    {
        gateway_count = value;
    }
    if(value_path == "is-acl-configured")
    {
        is_acl_configured = value;
    }
    if(value_path == "is-gateway-simulation")
    {
        is_gateway_simulation = value;
    }
    if(value_path == "is-ou-of-resource")
    {
        is_ou_of_resource = value;
    }
    if(value_path == "max-gateway")
    {
        max_gateway = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "relay-address")
    {
        relay_address = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-configured-maximum")
    {
        tunnel_configured_maximum = value;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count = value;
    }
}

Igmp::Standby::Process::Nsr::Nsr()
    :
    collab_conv_done{YType::boolean, "collab-conv-done"},
    count_proc_connection_dn{YType::uint32, "count-proc-connection-dn"},
    count_proc_connection_up{YType::uint32, "count-proc-connection-up"},
    count_rmf_not_ready{YType::uint32, "count-rmf-not-ready"},
    count_rmf_ready{YType::uint32, "count-rmf-ready"},
    last_proc{YType::uint64, "last-proc"},
    last_proc_connection_dn{YType::uint64, "last-proc-connection-dn"},
    last_proc_connection_up{YType::uint64, "last-proc-connection-up"},
    last_rmf_not_ready{YType::uint64, "last-rmf-not-ready"},
    last_rmf_ready{YType::uint64, "last-rmf-ready"},
    partner_proc_connected{YType::boolean, "partner-proc-connected"},
    rmf_notification_done{YType::boolean, "rmf-notification-done"},
    state{YType::uint8, "state"}
{
    yang_name = "nsr"; yang_parent_name = "process";
}

Igmp::Standby::Process::Nsr::~Nsr()
{
}

bool Igmp::Standby::Process::Nsr::has_data() const
{
    return collab_conv_done.is_set
	|| count_proc_connection_dn.is_set
	|| count_proc_connection_up.is_set
	|| count_rmf_not_ready.is_set
	|| count_rmf_ready.is_set
	|| last_proc.is_set
	|| last_proc_connection_dn.is_set
	|| last_proc_connection_up.is_set
	|| last_rmf_not_ready.is_set
	|| last_rmf_ready.is_set
	|| partner_proc_connected.is_set
	|| rmf_notification_done.is_set
	|| state.is_set;
}

bool Igmp::Standby::Process::Nsr::has_operation() const
{
    return is_set(operation)
	|| is_set(collab_conv_done.operation)
	|| is_set(count_proc_connection_dn.operation)
	|| is_set(count_proc_connection_up.operation)
	|| is_set(count_rmf_not_ready.operation)
	|| is_set(count_rmf_ready.operation)
	|| is_set(last_proc.operation)
	|| is_set(last_proc_connection_dn.operation)
	|| is_set(last_proc_connection_up.operation)
	|| is_set(last_rmf_not_ready.operation)
	|| is_set(last_rmf_ready.operation)
	|| is_set(partner_proc_connected.operation)
	|| is_set(rmf_notification_done.operation)
	|| is_set(state.operation);
}

std::string Igmp::Standby::Process::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collab_conv_done.is_set || is_set(collab_conv_done.operation)) leaf_name_data.push_back(collab_conv_done.get_name_leafdata());
    if (count_proc_connection_dn.is_set || is_set(count_proc_connection_dn.operation)) leaf_name_data.push_back(count_proc_connection_dn.get_name_leafdata());
    if (count_proc_connection_up.is_set || is_set(count_proc_connection_up.operation)) leaf_name_data.push_back(count_proc_connection_up.get_name_leafdata());
    if (count_rmf_not_ready.is_set || is_set(count_rmf_not_ready.operation)) leaf_name_data.push_back(count_rmf_not_ready.get_name_leafdata());
    if (count_rmf_ready.is_set || is_set(count_rmf_ready.operation)) leaf_name_data.push_back(count_rmf_ready.get_name_leafdata());
    if (last_proc.is_set || is_set(last_proc.operation)) leaf_name_data.push_back(last_proc.get_name_leafdata());
    if (last_proc_connection_dn.is_set || is_set(last_proc_connection_dn.operation)) leaf_name_data.push_back(last_proc_connection_dn.get_name_leafdata());
    if (last_proc_connection_up.is_set || is_set(last_proc_connection_up.operation)) leaf_name_data.push_back(last_proc_connection_up.get_name_leafdata());
    if (last_rmf_not_ready.is_set || is_set(last_rmf_not_ready.operation)) leaf_name_data.push_back(last_rmf_not_ready.get_name_leafdata());
    if (last_rmf_ready.is_set || is_set(last_rmf_ready.operation)) leaf_name_data.push_back(last_rmf_ready.get_name_leafdata());
    if (partner_proc_connected.is_set || is_set(partner_proc_connected.operation)) leaf_name_data.push_back(partner_proc_connected.get_name_leafdata());
    if (rmf_notification_done.is_set || is_set(rmf_notification_done.operation)) leaf_name_data.push_back(rmf_notification_done.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::Nsr::get_children()
{
    return children;
}

void Igmp::Standby::Process::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collab-conv-done")
    {
        collab_conv_done = value;
    }
    if(value_path == "count-proc-connection-dn")
    {
        count_proc_connection_dn = value;
    }
    if(value_path == "count-proc-connection-up")
    {
        count_proc_connection_up = value;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready = value;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready = value;
    }
    if(value_path == "last-proc")
    {
        last_proc = value;
    }
    if(value_path == "last-proc-connection-dn")
    {
        last_proc_connection_dn = value;
    }
    if(value_path == "last-proc-connection-up")
    {
        last_proc_connection_up = value;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready = value;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready = value;
    }
    if(value_path == "partner-proc-connected")
    {
        partner_proc_connected = value;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Igmp::Standby::Process::AmtGatewaies::AmtGatewaies()
{
    yang_name = "amt-gatewaies"; yang_parent_name = "process";
}

Igmp::Standby::Process::AmtGatewaies::~AmtGatewaies()
{
}

bool Igmp::Standby::Process::AmtGatewaies::has_data() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::Process::AmtGatewaies::has_operation() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::Process::AmtGatewaies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gatewaies";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::AmtGatewaies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::AmtGatewaies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "amt-gateway")
    {
        for(auto const & c : amt_gateway)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::Process::AmtGatewaies::AmtGateway>();
        c->parent = this;
        amt_gateway.push_back(std::move(c));
        children[segment_path] = amt_gateway.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::AmtGatewaies::get_children()
{
    for (auto const & c : amt_gateway)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::Process::AmtGatewaies::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::Process::AmtGatewaies::AmtGateway::AmtGateway()
    :
    amt_nonce{YType::uint32, "amt-nonce"},
    amt_port{YType::uint32, "amt-port"},
    amtgw{YType::str, "amtgw"},
    amtnh{YType::uint32, "amtnh"},
    gateway_address{YType::str, "gateway-address"},
    idb{YType::uint64, "idb"},
    key_len{YType::uint32, "key-len"},
    mem_upd_in{YType::uint32, "mem-upd-in"},
    mem_upd_out{YType::uint32, "mem-upd-out"},
    port{YType::int32, "port"}
{
    yang_name = "amt-gateway"; yang_parent_name = "amt-gatewaies";
}

Igmp::Standby::Process::AmtGatewaies::AmtGateway::~AmtGateway()
{
}

bool Igmp::Standby::Process::AmtGatewaies::AmtGateway::has_data() const
{
    return amt_nonce.is_set
	|| amt_port.is_set
	|| amtgw.is_set
	|| amtnh.is_set
	|| gateway_address.is_set
	|| idb.is_set
	|| key_len.is_set
	|| mem_upd_in.is_set
	|| mem_upd_out.is_set
	|| port.is_set;
}

bool Igmp::Standby::Process::AmtGatewaies::AmtGateway::has_operation() const
{
    return is_set(operation)
	|| is_set(amt_nonce.operation)
	|| is_set(amt_port.operation)
	|| is_set(amtgw.operation)
	|| is_set(amtnh.operation)
	|| is_set(gateway_address.operation)
	|| is_set(idb.operation)
	|| is_set(key_len.operation)
	|| is_set(mem_upd_in.operation)
	|| is_set(mem_upd_out.operation)
	|| is_set(port.operation);
}

std::string Igmp::Standby::Process::AmtGatewaies::AmtGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gateway";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::AmtGatewaies::AmtGateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/amt-gatewaies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amt_nonce.is_set || is_set(amt_nonce.operation)) leaf_name_data.push_back(amt_nonce.get_name_leafdata());
    if (amt_port.is_set || is_set(amt_port.operation)) leaf_name_data.push_back(amt_port.get_name_leafdata());
    if (amtgw.is_set || is_set(amtgw.operation)) leaf_name_data.push_back(amtgw.get_name_leafdata());
    if (amtnh.is_set || is_set(amtnh.operation)) leaf_name_data.push_back(amtnh.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());
    if (idb.is_set || is_set(idb.operation)) leaf_name_data.push_back(idb.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (mem_upd_in.is_set || is_set(mem_upd_in.operation)) leaf_name_data.push_back(mem_upd_in.get_name_leafdata());
    if (mem_upd_out.is_set || is_set(mem_upd_out.operation)) leaf_name_data.push_back(mem_upd_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::AmtGatewaies::AmtGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::AmtGatewaies::AmtGateway::get_children()
{
    return children;
}

void Igmp::Standby::Process::AmtGatewaies::AmtGateway::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "amt-nonce")
    {
        amt_nonce = value;
    }
    if(value_path == "amt-port")
    {
        amt_port = value;
    }
    if(value_path == "amtgw")
    {
        amtgw = value;
    }
    if(value_path == "amtnh")
    {
        amtnh = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
    if(value_path == "idb")
    {
        idb = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "mem-upd-in")
    {
        mem_upd_in = value;
    }
    if(value_path == "mem-upd-out")
    {
        mem_upd_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Igmp::Standby::Process::UnicastQosAdjustStats::UnicastQosAdjustStats()
    :
    add_to_batches{YType::uint32, "add-to-batches"},
    batches{YType::uint16, "batches"},
    delete_to_batches{YType::uint32, "delete-to-batches"},
    is_qos_s_sweeped{YType::boolean, "is-qos-s-sweeped"},
    is_resync_received{YType::boolean, "is-resync-received"},
    is_resync_required{YType::boolean, "is-resync-required"},
    is_resync_start_sent{YType::boolean, "is-resync-start-sent"},
    last_download_time{YType::uint64, "last-download-time"},
    last_sweep_time{YType::uint64, "last-sweep-time"},
    queues{YType::uint16, "queues"},
    received_resync_requests{YType::uint32, "received-resync-requests"},
    send_comm_errors{YType::uint32, "send-comm-errors"},
    send_errors{YType::uint32, "send-errors"},
    send_partial_errors{YType::uint32, "send-partial-errors"},
    send_success{YType::uint32, "send-success"},
    sent_resync_bulks{YType::uint32, "sent-resync-bulks"}
{
    yang_name = "unicast-qos-adjust-stats"; yang_parent_name = "process";
}

Igmp::Standby::Process::UnicastQosAdjustStats::~UnicastQosAdjustStats()
{
}

bool Igmp::Standby::Process::UnicastQosAdjustStats::has_data() const
{
    return add_to_batches.is_set
	|| batches.is_set
	|| delete_to_batches.is_set
	|| is_qos_s_sweeped.is_set
	|| is_resync_received.is_set
	|| is_resync_required.is_set
	|| is_resync_start_sent.is_set
	|| last_download_time.is_set
	|| last_sweep_time.is_set
	|| queues.is_set
	|| received_resync_requests.is_set
	|| send_comm_errors.is_set
	|| send_errors.is_set
	|| send_partial_errors.is_set
	|| send_success.is_set
	|| sent_resync_bulks.is_set;
}

bool Igmp::Standby::Process::UnicastQosAdjustStats::has_operation() const
{
    return is_set(operation)
	|| is_set(add_to_batches.operation)
	|| is_set(batches.operation)
	|| is_set(delete_to_batches.operation)
	|| is_set(is_qos_s_sweeped.operation)
	|| is_set(is_resync_received.operation)
	|| is_set(is_resync_required.operation)
	|| is_set(is_resync_start_sent.operation)
	|| is_set(last_download_time.operation)
	|| is_set(last_sweep_time.operation)
	|| is_set(queues.operation)
	|| is_set(received_resync_requests.operation)
	|| is_set(send_comm_errors.operation)
	|| is_set(send_errors.operation)
	|| is_set(send_partial_errors.operation)
	|| is_set(send_success.operation)
	|| is_set(sent_resync_bulks.operation);
}

std::string Igmp::Standby::Process::UnicastQosAdjustStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust-stats";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::UnicastQosAdjustStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add_to_batches.is_set || is_set(add_to_batches.operation)) leaf_name_data.push_back(add_to_batches.get_name_leafdata());
    if (batches.is_set || is_set(batches.operation)) leaf_name_data.push_back(batches.get_name_leafdata());
    if (delete_to_batches.is_set || is_set(delete_to_batches.operation)) leaf_name_data.push_back(delete_to_batches.get_name_leafdata());
    if (is_qos_s_sweeped.is_set || is_set(is_qos_s_sweeped.operation)) leaf_name_data.push_back(is_qos_s_sweeped.get_name_leafdata());
    if (is_resync_received.is_set || is_set(is_resync_received.operation)) leaf_name_data.push_back(is_resync_received.get_name_leafdata());
    if (is_resync_required.is_set || is_set(is_resync_required.operation)) leaf_name_data.push_back(is_resync_required.get_name_leafdata());
    if (is_resync_start_sent.is_set || is_set(is_resync_start_sent.operation)) leaf_name_data.push_back(is_resync_start_sent.get_name_leafdata());
    if (last_download_time.is_set || is_set(last_download_time.operation)) leaf_name_data.push_back(last_download_time.get_name_leafdata());
    if (last_sweep_time.is_set || is_set(last_sweep_time.operation)) leaf_name_data.push_back(last_sweep_time.get_name_leafdata());
    if (queues.is_set || is_set(queues.operation)) leaf_name_data.push_back(queues.get_name_leafdata());
    if (received_resync_requests.is_set || is_set(received_resync_requests.operation)) leaf_name_data.push_back(received_resync_requests.get_name_leafdata());
    if (send_comm_errors.is_set || is_set(send_comm_errors.operation)) leaf_name_data.push_back(send_comm_errors.get_name_leafdata());
    if (send_errors.is_set || is_set(send_errors.operation)) leaf_name_data.push_back(send_errors.get_name_leafdata());
    if (send_partial_errors.is_set || is_set(send_partial_errors.operation)) leaf_name_data.push_back(send_partial_errors.get_name_leafdata());
    if (send_success.is_set || is_set(send_success.operation)) leaf_name_data.push_back(send_success.get_name_leafdata());
    if (sent_resync_bulks.is_set || is_set(sent_resync_bulks.operation)) leaf_name_data.push_back(sent_resync_bulks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::UnicastQosAdjustStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::UnicastQosAdjustStats::get_children()
{
    return children;
}

void Igmp::Standby::Process::UnicastQosAdjustStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add-to-batches")
    {
        add_to_batches = value;
    }
    if(value_path == "batches")
    {
        batches = value;
    }
    if(value_path == "delete-to-batches")
    {
        delete_to_batches = value;
    }
    if(value_path == "is-qos-s-sweeped")
    {
        is_qos_s_sweeped = value;
    }
    if(value_path == "is-resync-received")
    {
        is_resync_received = value;
    }
    if(value_path == "is-resync-required")
    {
        is_resync_required = value;
    }
    if(value_path == "is-resync-start-sent")
    {
        is_resync_start_sent = value;
    }
    if(value_path == "last-download-time")
    {
        last_download_time = value;
    }
    if(value_path == "last-sweep-time")
    {
        last_sweep_time = value;
    }
    if(value_path == "queues")
    {
        queues = value;
    }
    if(value_path == "received-resync-requests")
    {
        received_resync_requests = value;
    }
    if(value_path == "send-comm-errors")
    {
        send_comm_errors = value;
    }
    if(value_path == "send-errors")
    {
        send_errors = value;
    }
    if(value_path == "send-partial-errors")
    {
        send_partial_errors = value;
    }
    if(value_path == "send-success")
    {
        send_success = value;
    }
    if(value_path == "sent-resync-bulks")
    {
        sent_resync_bulks = value;
    }
}

Igmp::Standby::Process::BviStatistics::BviStatistics()
    :
    null_buffer_handles{YType::uint32, "null-buffer-handles"},
    receive_buffers{YType::uint32, "receive-buffers"},
    release_buffers{YType::uint32, "release-buffers"},
    release_fail_buffers{YType::uint32, "release-fail-buffers"},
    rx_add_mrouter_msg{YType::uint32, "rx-add-mrouter-msg"},
    rx_delete_mrouter_msg{YType::uint32, "rx-delete-mrouter-msg"},
    rx_igmp_packet_success{YType::uint32, "rx-igmp-packet-success"},
    rx_ipc_close_notif{YType::uint32, "rx-ipc-close-notif"},
    rx_ipc_connect_notif{YType::uint32, "rx-ipc-connect-notif"},
    rx_ipc_error_notif{YType::uint32, "rx-ipc-error-notif"},
    rx_ipc_input_wait_notif{YType::uint32, "rx-ipc-input-wait-notif"},
    rx_ipc_lwm_notif{YType::uint32, "rx-ipc-lwm-notif"},
    rx_ipc_open_notif{YType::uint32, "rx-ipc-open-notif"},
    rx_ipc_output_notif{YType::uint32, "rx-ipc-output-notif"},
    rx_ipc_publish_notif{YType::uint32, "rx-ipc-publish-notif"},
    rx_ipc_q_full_notif{YType::uint32, "rx-ipc-q-full-notif"},
    rx_ipc_send_status_notif{YType::uint32, "rx-ipc-send-status-notif"},
    rx_sweep_mrouter_msg{YType::uint32, "rx-sweep-mrouter-msg"},
    rx_unknown_mrouter_msg{YType::uint32, "rx-unknown-mrouter-msg"},
    send_blocks{YType::uint32, "send-blocks"},
    tx_add_mrouter_msg{YType::uint32, "tx-add-mrouter-msg"},
    tx_buffer_errors{YType::uint32, "tx-buffer-errors"},
    tx_buffers{YType::uint32, "tx-buffers"},
    tx_delete_mrouter_msg{YType::uint32, "tx-delete-mrouter-msg"},
    tx_mrouter_buffers{YType::uint32, "tx-mrouter-buffers"},
    tx_protocol_buffers{YType::uint32, "tx-protocol-buffers"},
    tx_sweep_mrouter_msg{YType::uint32, "tx-sweep-mrouter-msg"},
    tx_unknown_buffers{YType::uint32, "tx-unknown-buffers"},
    tx_unknown_mrouter_msg{YType::uint32, "tx-unknown-mrouter-msg"},
    wtx_msg_drop_dc{YType::uint32, "wtx-msg-drop-dc"},
    wtx_msg_drop_nomem{YType::uint32, "wtx-msg-drop-nomem"},
    wtx_msg_freed{YType::uint32, "wtx-msg-freed"},
    wtx_msg_proto_sent{YType::uint32, "wtx-msg-proto-sent"},
    wtx_msg_recvd{YType::uint32, "wtx-msg-recvd"},
    wtx_msg_sent{YType::uint32, "wtx-msg-sent"}
{
    yang_name = "bvi-statistics"; yang_parent_name = "process";
}

Igmp::Standby::Process::BviStatistics::~BviStatistics()
{
}

bool Igmp::Standby::Process::BviStatistics::has_data() const
{
    return null_buffer_handles.is_set
	|| receive_buffers.is_set
	|| release_buffers.is_set
	|| release_fail_buffers.is_set
	|| rx_add_mrouter_msg.is_set
	|| rx_delete_mrouter_msg.is_set
	|| rx_igmp_packet_success.is_set
	|| rx_ipc_close_notif.is_set
	|| rx_ipc_connect_notif.is_set
	|| rx_ipc_error_notif.is_set
	|| rx_ipc_input_wait_notif.is_set
	|| rx_ipc_lwm_notif.is_set
	|| rx_ipc_open_notif.is_set
	|| rx_ipc_output_notif.is_set
	|| rx_ipc_publish_notif.is_set
	|| rx_ipc_q_full_notif.is_set
	|| rx_ipc_send_status_notif.is_set
	|| rx_sweep_mrouter_msg.is_set
	|| rx_unknown_mrouter_msg.is_set
	|| send_blocks.is_set
	|| tx_add_mrouter_msg.is_set
	|| tx_buffer_errors.is_set
	|| tx_buffers.is_set
	|| tx_delete_mrouter_msg.is_set
	|| tx_mrouter_buffers.is_set
	|| tx_protocol_buffers.is_set
	|| tx_sweep_mrouter_msg.is_set
	|| tx_unknown_buffers.is_set
	|| tx_unknown_mrouter_msg.is_set
	|| wtx_msg_drop_dc.is_set
	|| wtx_msg_drop_nomem.is_set
	|| wtx_msg_freed.is_set
	|| wtx_msg_proto_sent.is_set
	|| wtx_msg_recvd.is_set
	|| wtx_msg_sent.is_set;
}

bool Igmp::Standby::Process::BviStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(null_buffer_handles.operation)
	|| is_set(receive_buffers.operation)
	|| is_set(release_buffers.operation)
	|| is_set(release_fail_buffers.operation)
	|| is_set(rx_add_mrouter_msg.operation)
	|| is_set(rx_delete_mrouter_msg.operation)
	|| is_set(rx_igmp_packet_success.operation)
	|| is_set(rx_ipc_close_notif.operation)
	|| is_set(rx_ipc_connect_notif.operation)
	|| is_set(rx_ipc_error_notif.operation)
	|| is_set(rx_ipc_input_wait_notif.operation)
	|| is_set(rx_ipc_lwm_notif.operation)
	|| is_set(rx_ipc_open_notif.operation)
	|| is_set(rx_ipc_output_notif.operation)
	|| is_set(rx_ipc_publish_notif.operation)
	|| is_set(rx_ipc_q_full_notif.operation)
	|| is_set(rx_ipc_send_status_notif.operation)
	|| is_set(rx_sweep_mrouter_msg.operation)
	|| is_set(rx_unknown_mrouter_msg.operation)
	|| is_set(send_blocks.operation)
	|| is_set(tx_add_mrouter_msg.operation)
	|| is_set(tx_buffer_errors.operation)
	|| is_set(tx_buffers.operation)
	|| is_set(tx_delete_mrouter_msg.operation)
	|| is_set(tx_mrouter_buffers.operation)
	|| is_set(tx_protocol_buffers.operation)
	|| is_set(tx_sweep_mrouter_msg.operation)
	|| is_set(tx_unknown_buffers.operation)
	|| is_set(tx_unknown_mrouter_msg.operation)
	|| is_set(wtx_msg_drop_dc.operation)
	|| is_set(wtx_msg_drop_nomem.operation)
	|| is_set(wtx_msg_freed.operation)
	|| is_set(wtx_msg_proto_sent.operation)
	|| is_set(wtx_msg_recvd.operation)
	|| is_set(wtx_msg_sent.operation);
}

std::string Igmp::Standby::Process::BviStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-statistics";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::BviStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_buffer_handles.is_set || is_set(null_buffer_handles.operation)) leaf_name_data.push_back(null_buffer_handles.get_name_leafdata());
    if (receive_buffers.is_set || is_set(receive_buffers.operation)) leaf_name_data.push_back(receive_buffers.get_name_leafdata());
    if (release_buffers.is_set || is_set(release_buffers.operation)) leaf_name_data.push_back(release_buffers.get_name_leafdata());
    if (release_fail_buffers.is_set || is_set(release_fail_buffers.operation)) leaf_name_data.push_back(release_fail_buffers.get_name_leafdata());
    if (rx_add_mrouter_msg.is_set || is_set(rx_add_mrouter_msg.operation)) leaf_name_data.push_back(rx_add_mrouter_msg.get_name_leafdata());
    if (rx_delete_mrouter_msg.is_set || is_set(rx_delete_mrouter_msg.operation)) leaf_name_data.push_back(rx_delete_mrouter_msg.get_name_leafdata());
    if (rx_igmp_packet_success.is_set || is_set(rx_igmp_packet_success.operation)) leaf_name_data.push_back(rx_igmp_packet_success.get_name_leafdata());
    if (rx_ipc_close_notif.is_set || is_set(rx_ipc_close_notif.operation)) leaf_name_data.push_back(rx_ipc_close_notif.get_name_leafdata());
    if (rx_ipc_connect_notif.is_set || is_set(rx_ipc_connect_notif.operation)) leaf_name_data.push_back(rx_ipc_connect_notif.get_name_leafdata());
    if (rx_ipc_error_notif.is_set || is_set(rx_ipc_error_notif.operation)) leaf_name_data.push_back(rx_ipc_error_notif.get_name_leafdata());
    if (rx_ipc_input_wait_notif.is_set || is_set(rx_ipc_input_wait_notif.operation)) leaf_name_data.push_back(rx_ipc_input_wait_notif.get_name_leafdata());
    if (rx_ipc_lwm_notif.is_set || is_set(rx_ipc_lwm_notif.operation)) leaf_name_data.push_back(rx_ipc_lwm_notif.get_name_leafdata());
    if (rx_ipc_open_notif.is_set || is_set(rx_ipc_open_notif.operation)) leaf_name_data.push_back(rx_ipc_open_notif.get_name_leafdata());
    if (rx_ipc_output_notif.is_set || is_set(rx_ipc_output_notif.operation)) leaf_name_data.push_back(rx_ipc_output_notif.get_name_leafdata());
    if (rx_ipc_publish_notif.is_set || is_set(rx_ipc_publish_notif.operation)) leaf_name_data.push_back(rx_ipc_publish_notif.get_name_leafdata());
    if (rx_ipc_q_full_notif.is_set || is_set(rx_ipc_q_full_notif.operation)) leaf_name_data.push_back(rx_ipc_q_full_notif.get_name_leafdata());
    if (rx_ipc_send_status_notif.is_set || is_set(rx_ipc_send_status_notif.operation)) leaf_name_data.push_back(rx_ipc_send_status_notif.get_name_leafdata());
    if (rx_sweep_mrouter_msg.is_set || is_set(rx_sweep_mrouter_msg.operation)) leaf_name_data.push_back(rx_sweep_mrouter_msg.get_name_leafdata());
    if (rx_unknown_mrouter_msg.is_set || is_set(rx_unknown_mrouter_msg.operation)) leaf_name_data.push_back(rx_unknown_mrouter_msg.get_name_leafdata());
    if (send_blocks.is_set || is_set(send_blocks.operation)) leaf_name_data.push_back(send_blocks.get_name_leafdata());
    if (tx_add_mrouter_msg.is_set || is_set(tx_add_mrouter_msg.operation)) leaf_name_data.push_back(tx_add_mrouter_msg.get_name_leafdata());
    if (tx_buffer_errors.is_set || is_set(tx_buffer_errors.operation)) leaf_name_data.push_back(tx_buffer_errors.get_name_leafdata());
    if (tx_buffers.is_set || is_set(tx_buffers.operation)) leaf_name_data.push_back(tx_buffers.get_name_leafdata());
    if (tx_delete_mrouter_msg.is_set || is_set(tx_delete_mrouter_msg.operation)) leaf_name_data.push_back(tx_delete_mrouter_msg.get_name_leafdata());
    if (tx_mrouter_buffers.is_set || is_set(tx_mrouter_buffers.operation)) leaf_name_data.push_back(tx_mrouter_buffers.get_name_leafdata());
    if (tx_protocol_buffers.is_set || is_set(tx_protocol_buffers.operation)) leaf_name_data.push_back(tx_protocol_buffers.get_name_leafdata());
    if (tx_sweep_mrouter_msg.is_set || is_set(tx_sweep_mrouter_msg.operation)) leaf_name_data.push_back(tx_sweep_mrouter_msg.get_name_leafdata());
    if (tx_unknown_buffers.is_set || is_set(tx_unknown_buffers.operation)) leaf_name_data.push_back(tx_unknown_buffers.get_name_leafdata());
    if (tx_unknown_mrouter_msg.is_set || is_set(tx_unknown_mrouter_msg.operation)) leaf_name_data.push_back(tx_unknown_mrouter_msg.get_name_leafdata());
    if (wtx_msg_drop_dc.is_set || is_set(wtx_msg_drop_dc.operation)) leaf_name_data.push_back(wtx_msg_drop_dc.get_name_leafdata());
    if (wtx_msg_drop_nomem.is_set || is_set(wtx_msg_drop_nomem.operation)) leaf_name_data.push_back(wtx_msg_drop_nomem.get_name_leafdata());
    if (wtx_msg_freed.is_set || is_set(wtx_msg_freed.operation)) leaf_name_data.push_back(wtx_msg_freed.get_name_leafdata());
    if (wtx_msg_proto_sent.is_set || is_set(wtx_msg_proto_sent.operation)) leaf_name_data.push_back(wtx_msg_proto_sent.get_name_leafdata());
    if (wtx_msg_recvd.is_set || is_set(wtx_msg_recvd.operation)) leaf_name_data.push_back(wtx_msg_recvd.get_name_leafdata());
    if (wtx_msg_sent.is_set || is_set(wtx_msg_sent.operation)) leaf_name_data.push_back(wtx_msg_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::BviStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::BviStatistics::get_children()
{
    return children;
}

void Igmp::Standby::Process::BviStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null-buffer-handles")
    {
        null_buffer_handles = value;
    }
    if(value_path == "receive-buffers")
    {
        receive_buffers = value;
    }
    if(value_path == "release-buffers")
    {
        release_buffers = value;
    }
    if(value_path == "release-fail-buffers")
    {
        release_fail_buffers = value;
    }
    if(value_path == "rx-add-mrouter-msg")
    {
        rx_add_mrouter_msg = value;
    }
    if(value_path == "rx-delete-mrouter-msg")
    {
        rx_delete_mrouter_msg = value;
    }
    if(value_path == "rx-igmp-packet-success")
    {
        rx_igmp_packet_success = value;
    }
    if(value_path == "rx-ipc-close-notif")
    {
        rx_ipc_close_notif = value;
    }
    if(value_path == "rx-ipc-connect-notif")
    {
        rx_ipc_connect_notif = value;
    }
    if(value_path == "rx-ipc-error-notif")
    {
        rx_ipc_error_notif = value;
    }
    if(value_path == "rx-ipc-input-wait-notif")
    {
        rx_ipc_input_wait_notif = value;
    }
    if(value_path == "rx-ipc-lwm-notif")
    {
        rx_ipc_lwm_notif = value;
    }
    if(value_path == "rx-ipc-open-notif")
    {
        rx_ipc_open_notif = value;
    }
    if(value_path == "rx-ipc-output-notif")
    {
        rx_ipc_output_notif = value;
    }
    if(value_path == "rx-ipc-publish-notif")
    {
        rx_ipc_publish_notif = value;
    }
    if(value_path == "rx-ipc-q-full-notif")
    {
        rx_ipc_q_full_notif = value;
    }
    if(value_path == "rx-ipc-send-status-notif")
    {
        rx_ipc_send_status_notif = value;
    }
    if(value_path == "rx-sweep-mrouter-msg")
    {
        rx_sweep_mrouter_msg = value;
    }
    if(value_path == "rx-unknown-mrouter-msg")
    {
        rx_unknown_mrouter_msg = value;
    }
    if(value_path == "send-blocks")
    {
        send_blocks = value;
    }
    if(value_path == "tx-add-mrouter-msg")
    {
        tx_add_mrouter_msg = value;
    }
    if(value_path == "tx-buffer-errors")
    {
        tx_buffer_errors = value;
    }
    if(value_path == "tx-buffers")
    {
        tx_buffers = value;
    }
    if(value_path == "tx-delete-mrouter-msg")
    {
        tx_delete_mrouter_msg = value;
    }
    if(value_path == "tx-mrouter-buffers")
    {
        tx_mrouter_buffers = value;
    }
    if(value_path == "tx-protocol-buffers")
    {
        tx_protocol_buffers = value;
    }
    if(value_path == "tx-sweep-mrouter-msg")
    {
        tx_sweep_mrouter_msg = value;
    }
    if(value_path == "tx-unknown-buffers")
    {
        tx_unknown_buffers = value;
    }
    if(value_path == "tx-unknown-mrouter-msg")
    {
        tx_unknown_mrouter_msg = value;
    }
    if(value_path == "wtx-msg-drop-dc")
    {
        wtx_msg_drop_dc = value;
    }
    if(value_path == "wtx-msg-drop-nomem")
    {
        wtx_msg_drop_nomem = value;
    }
    if(value_path == "wtx-msg-freed")
    {
        wtx_msg_freed = value;
    }
    if(value_path == "wtx-msg-proto-sent")
    {
        wtx_msg_proto_sent = value;
    }
    if(value_path == "wtx-msg-recvd")
    {
        wtx_msg_recvd = value;
    }
    if(value_path == "wtx-msg-sent")
    {
        wtx_msg_sent = value;
    }
}

Igmp::Standby::Process::Nsf::Nsf()
    :
    is_multicast_nsf_active{YType::boolean, "is-multicast-nsf-active"},
    last_icd_notif_recv{YType::int64, "last-icd-notif-recv"},
    last_icd_notif_recv_min{YType::int32, "last-icd-notif-recv-min"},
    last_nsf_off{YType::int64, "last-nsf-off"},
    last_nsf_off_min{YType::int32, "last-nsf-off-min"},
    last_nsf_on{YType::int64, "last-nsf-on"},
    last_nsf_on_min{YType::int32, "last-nsf-on-min"},
    multicast_nsf_time_left{YType::uint32, "multicast-nsf-time-left"},
    multicast_nsf_timeout{YType::uint32, "multicast-nsf-timeout"},
    respawn_count{YType::uint32, "respawn-count"}
{
    yang_name = "nsf"; yang_parent_name = "process";
}

Igmp::Standby::Process::Nsf::~Nsf()
{
}

bool Igmp::Standby::Process::Nsf::has_data() const
{
    return is_multicast_nsf_active.is_set
	|| last_icd_notif_recv.is_set
	|| last_icd_notif_recv_min.is_set
	|| last_nsf_off.is_set
	|| last_nsf_off_min.is_set
	|| last_nsf_on.is_set
	|| last_nsf_on_min.is_set
	|| multicast_nsf_time_left.is_set
	|| multicast_nsf_timeout.is_set
	|| respawn_count.is_set;
}

bool Igmp::Standby::Process::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(is_multicast_nsf_active.operation)
	|| is_set(last_icd_notif_recv.operation)
	|| is_set(last_icd_notif_recv_min.operation)
	|| is_set(last_nsf_off.operation)
	|| is_set(last_nsf_off_min.operation)
	|| is_set(last_nsf_on.operation)
	|| is_set(last_nsf_on_min.operation)
	|| is_set(multicast_nsf_time_left.operation)
	|| is_set(multicast_nsf_timeout.operation)
	|| is_set(respawn_count.operation);
}

std::string Igmp::Standby::Process::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Igmp::Standby::Process::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast_nsf_active.is_set || is_set(is_multicast_nsf_active.operation)) leaf_name_data.push_back(is_multicast_nsf_active.get_name_leafdata());
    if (last_icd_notif_recv.is_set || is_set(last_icd_notif_recv.operation)) leaf_name_data.push_back(last_icd_notif_recv.get_name_leafdata());
    if (last_icd_notif_recv_min.is_set || is_set(last_icd_notif_recv_min.operation)) leaf_name_data.push_back(last_icd_notif_recv_min.get_name_leafdata());
    if (last_nsf_off.is_set || is_set(last_nsf_off.operation)) leaf_name_data.push_back(last_nsf_off.get_name_leafdata());
    if (last_nsf_off_min.is_set || is_set(last_nsf_off_min.operation)) leaf_name_data.push_back(last_nsf_off_min.get_name_leafdata());
    if (last_nsf_on.is_set || is_set(last_nsf_on.operation)) leaf_name_data.push_back(last_nsf_on.get_name_leafdata());
    if (last_nsf_on_min.is_set || is_set(last_nsf_on_min.operation)) leaf_name_data.push_back(last_nsf_on_min.get_name_leafdata());
    if (multicast_nsf_time_left.is_set || is_set(multicast_nsf_time_left.operation)) leaf_name_data.push_back(multicast_nsf_time_left.get_name_leafdata());
    if (multicast_nsf_timeout.is_set || is_set(multicast_nsf_timeout.operation)) leaf_name_data.push_back(multicast_nsf_timeout.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.operation)) leaf_name_data.push_back(respawn_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::Process::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::Process::Nsf::get_children()
{
    return children;
}

void Igmp::Standby::Process::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-multicast-nsf-active")
    {
        is_multicast_nsf_active = value;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv = value;
    }
    if(value_path == "last-icd-notif-recv-min")
    {
        last_icd_notif_recv_min = value;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off = value;
    }
    if(value_path == "last-nsf-off-min")
    {
        last_nsf_off_min = value;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on = value;
    }
    if(value_path == "last-nsf-on-min")
    {
        last_nsf_on_min = value;
    }
    if(value_path == "multicast-nsf-time-left")
    {
        multicast_nsf_time_left = value;
    }
    if(value_path == "multicast-nsf-timeout")
    {
        multicast_nsf_timeout = value;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
    }
}

Igmp::Standby::DefaultContext::DefaultContext()
    :
    detail_groups(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups>())
	,explicit_groups(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups>())
	,global_interface_table(std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Igmp::Standby::DefaultContext::GroupSummary>())
	,groups(std::make_shared<Igmp::Standby::DefaultContext::Groups>())
	,ifrs_interface_summary(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces>())
	,interface_old_format_state_ons(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns>())
	,interface_old_formats(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats>())
	,interface_state_off_old_formats(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats>())
	,interface_state_offs(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns>())
	,interface_table(std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups>())
	,ranges(std::make_shared<Igmp::Standby::DefaultContext::Ranges>())
	,ssm_map_details(std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails>())
	,ssm_maps(std::make_shared<Igmp::Standby::DefaultContext::SsmMaps>())
	,summary(std::make_shared<Igmp::Standby::DefaultContext::Summary>())
	,traffic_counters(std::make_shared<Igmp::Standby::DefaultContext::TrafficCounters>())
{
    detail_groups->parent = this;
    children["detail-groups"] = detail_groups;

    explicit_groups->parent = this;
    children["explicit-groups"] = explicit_groups;

    global_interface_table->parent = this;
    children["global-interface-table"] = global_interface_table;

    group_summary->parent = this;
    children["group-summary"] = group_summary;

    groups->parent = this;
    children["groups"] = groups;

    ifrs_interface_summary->parent = this;
    children["ifrs-interface-summary"] = ifrs_interface_summary;

    ifrs_interfaces->parent = this;
    children["ifrs-interfaces"] = ifrs_interfaces;

    interface_old_format_state_ons->parent = this;
    children["interface-old-format-state-ons"] = interface_old_format_state_ons;

    interface_old_formats->parent = this;
    children["interface-old-formats"] = interface_old_formats;

    interface_state_off_old_formats->parent = this;
    children["interface-state-off-old-formats"] = interface_state_off_old_formats;

    interface_state_offs->parent = this;
    children["interface-state-offs"] = interface_state_offs;

    interface_state_ons->parent = this;
    children["interface-state-ons"] = interface_state_ons;

    interface_table->parent = this;
    children["interface-table"] = interface_table;

    interface_unicast_qos_adjusts->parent = this;
    children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;

    non_active_groups->parent = this;
    children["non-active-groups"] = non_active_groups;

    ranges->parent = this;
    children["ranges"] = ranges;

    ssm_map_details->parent = this;
    children["ssm-map-details"] = ssm_map_details;

    ssm_maps->parent = this;
    children["ssm-maps"] = ssm_maps;

    summary->parent = this;
    children["summary"] = summary;

    traffic_counters->parent = this;
    children["traffic-counters"] = traffic_counters;

    yang_name = "default-context"; yang_parent_name = "standby";
}

Igmp::Standby::DefaultContext::~DefaultContext()
{
}

bool Igmp::Standby::DefaultContext::has_data() const
{
    return (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_data())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_data())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_data())
	|| (non_active_groups !=  nullptr && non_active_groups->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_data())
	|| (ssm_maps !=  nullptr && ssm_maps->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data());
}

bool Igmp::Standby::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_operation())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_operation())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_operation())
	|| (non_active_groups !=  nullptr && non_active_groups->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_operation())
	|| (ssm_maps !=  nullptr && ssm_maps->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation());
}

std::string Igmp::Standby::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-groups")
    {
        if(detail_groups != nullptr)
        {
            children["detail-groups"] = detail_groups;
        }
        else
        {
            detail_groups = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups>();
            detail_groups->parent = this;
            children["detail-groups"] = detail_groups;
        }
        return children.at("detail-groups");
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups != nullptr)
        {
            children["explicit-groups"] = explicit_groups;
        }
        else
        {
            explicit_groups = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups>();
            explicit_groups->parent = this;
            children["explicit-groups"] = explicit_groups;
        }
        return children.at("explicit-groups");
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table != nullptr)
        {
            children["global-interface-table"] = global_interface_table;
        }
        else
        {
            global_interface_table = std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable>();
            global_interface_table->parent = this;
            children["global-interface-table"] = global_interface_table;
        }
        return children.at("global-interface-table");
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary != nullptr)
        {
            children["group-summary"] = group_summary;
        }
        else
        {
            group_summary = std::make_shared<Igmp::Standby::DefaultContext::GroupSummary>();
            group_summary->parent = this;
            children["group-summary"] = group_summary;
        }
        return children.at("group-summary");
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<Igmp::Standby::DefaultContext::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary != nullptr)
        {
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
        else
        {
            ifrs_interface_summary = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaceSummary>();
            ifrs_interface_summary->parent = this;
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
        return children.at("ifrs-interface-summary");
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        else
        {
            ifrs_interfaces = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces>();
            ifrs_interfaces->parent = this;
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        return children.at("ifrs-interfaces");
    }

    if(child_yang_name == "interface-old-format-state-ons")
    {
        if(interface_old_format_state_ons != nullptr)
        {
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
        else
        {
            interface_old_format_state_ons = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns>();
            interface_old_format_state_ons->parent = this;
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
        return children.at("interface-old-format-state-ons");
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
        else
        {
            interface_old_formats = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats>();
            interface_old_formats->parent = this;
            children["interface-old-formats"] = interface_old_formats;
        }
        return children.at("interface-old-formats");
    }

    if(child_yang_name == "interface-state-off-old-formats")
    {
        if(interface_state_off_old_formats != nullptr)
        {
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
        else
        {
            interface_state_off_old_formats = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats>();
            interface_state_off_old_formats->parent = this;
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
        return children.at("interface-state-off-old-formats");
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs != nullptr)
        {
            children["interface-state-offs"] = interface_state_offs;
        }
        else
        {
            interface_state_offs = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs>();
            interface_state_offs->parent = this;
            children["interface-state-offs"] = interface_state_offs;
        }
        return children.at("interface-state-offs");
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons != nullptr)
        {
            children["interface-state-ons"] = interface_state_ons;
        }
        else
        {
            interface_state_ons = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns>();
            interface_state_ons->parent = this;
            children["interface-state-ons"] = interface_state_ons;
        }
        return children.at("interface-state-ons");
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
        else
        {
            interface_table = std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable>();
            interface_table->parent = this;
            children["interface-table"] = interface_table;
        }
        return children.at("interface-table");
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts != nullptr)
        {
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
        else
        {
            interface_unicast_qos_adjusts = std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts>();
            interface_unicast_qos_adjusts->parent = this;
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
        return children.at("interface-unicast-qos-adjusts");
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups != nullptr)
        {
            children["non-active-groups"] = non_active_groups;
        }
        else
        {
            non_active_groups = std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups>();
            non_active_groups->parent = this;
            children["non-active-groups"] = non_active_groups;
        }
        return children.at("non-active-groups");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Igmp::Standby::DefaultContext::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details != nullptr)
        {
            children["ssm-map-details"] = ssm_map_details;
        }
        else
        {
            ssm_map_details = std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails>();
            ssm_map_details->parent = this;
            children["ssm-map-details"] = ssm_map_details;
        }
        return children.at("ssm-map-details");
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps != nullptr)
        {
            children["ssm-maps"] = ssm_maps;
        }
        else
        {
            ssm_maps = std::make_shared<Igmp::Standby::DefaultContext::SsmMaps>();
            ssm_maps->parent = this;
            children["ssm-maps"] = ssm_maps;
        }
        return children.at("ssm-maps");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Igmp::Standby::DefaultContext::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
        else
        {
            traffic_counters = std::make_shared<Igmp::Standby::DefaultContext::TrafficCounters>();
            traffic_counters->parent = this;
            children["traffic-counters"] = traffic_counters;
        }
        return children.at("traffic-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::get_children()
{
    if(children.find("detail-groups") == children.end())
    {
        if(detail_groups != nullptr)
        {
            children["detail-groups"] = detail_groups;
        }
    }

    if(children.find("explicit-groups") == children.end())
    {
        if(explicit_groups != nullptr)
        {
            children["explicit-groups"] = explicit_groups;
        }
    }

    if(children.find("global-interface-table") == children.end())
    {
        if(global_interface_table != nullptr)
        {
            children["global-interface-table"] = global_interface_table;
        }
    }

    if(children.find("group-summary") == children.end())
    {
        if(group_summary != nullptr)
        {
            children["group-summary"] = group_summary;
        }
    }

    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("ifrs-interface-summary") == children.end())
    {
        if(ifrs_interface_summary != nullptr)
        {
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
    }

    if(children.find("ifrs-interfaces") == children.end())
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
    }

    if(children.find("interface-old-format-state-ons") == children.end())
    {
        if(interface_old_format_state_ons != nullptr)
        {
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
    }

    if(children.find("interface-old-formats") == children.end())
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
    }

    if(children.find("interface-state-off-old-formats") == children.end())
    {
        if(interface_state_off_old_formats != nullptr)
        {
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
    }

    if(children.find("interface-state-offs") == children.end())
    {
        if(interface_state_offs != nullptr)
        {
            children["interface-state-offs"] = interface_state_offs;
        }
    }

    if(children.find("interface-state-ons") == children.end())
    {
        if(interface_state_ons != nullptr)
        {
            children["interface-state-ons"] = interface_state_ons;
        }
    }

    if(children.find("interface-table") == children.end())
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
    }

    if(children.find("interface-unicast-qos-adjusts") == children.end())
    {
        if(interface_unicast_qos_adjusts != nullptr)
        {
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
    }

    if(children.find("non-active-groups") == children.end())
    {
        if(non_active_groups != nullptr)
        {
            children["non-active-groups"] = non_active_groups;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("ssm-map-details") == children.end())
    {
        if(ssm_map_details != nullptr)
        {
            children["ssm-map-details"] = ssm_map_details;
        }
    }

    if(children.find("ssm-maps") == children.end())
    {
        if(ssm_maps != nullptr)
        {
            children["ssm-maps"] = ssm_maps;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("traffic-counters") == children.end())
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::Summary::Summary()
    :
    disabled_interface_count{YType::uint32, "disabled-interface-count"},
    enabled_interface_count{YType::uint32, "enabled-interface-count"},
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    is_disabled{YType::boolean, "is-disabled"},
    node_low_memory{YType::boolean, "node-low-memory"},
    robustness{YType::uint32, "robustness"},
    supported_interfaces{YType::uint32, "supported-interfaces"},
    tunnel_mte_config_count{YType::uint32, "tunnel-mte-config-count"},
    unsupported_interfaces{YType::uint32, "unsupported-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::Summary::~Summary()
{
}

bool Igmp::Standby::DefaultContext::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return disabled_interface_count.is_set
	|| enabled_interface_count.is_set
	|| group_count.is_set
	|| group_limit.is_set
	|| is_disabled.is_set
	|| node_low_memory.is_set
	|| robustness.is_set
	|| supported_interfaces.is_set
	|| tunnel_mte_config_count.is_set
	|| unsupported_interfaces.is_set;
}

bool Igmp::Standby::DefaultContext::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disabled_interface_count.operation)
	|| is_set(enabled_interface_count.operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(is_disabled.operation)
	|| is_set(node_low_memory.operation)
	|| is_set(robustness.operation)
	|| is_set(supported_interfaces.operation)
	|| is_set(tunnel_mte_config_count.operation)
	|| is_set(unsupported_interfaces.operation);
}

std::string Igmp::Standby::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.operation)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.operation)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.operation)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.operation)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.operation)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.operation)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::Summary::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Summary::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
    }
}

Igmp::Standby::DefaultContext::Summary::Interface::Interface()
    :
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    interface_name{YType::str, "interface-name"},
    on_off{YType::boolean, "on-off"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

Igmp::Standby::DefaultContext::Summary::Interface::~Interface()
{
}

bool Igmp::Standby::DefaultContext::Summary::Interface::has_data() const
{
    return group_count.is_set
	|| group_limit.is_set
	|| interface_name.is_set
	|| on_off.is_set
	|| parent_ifhandle.is_set
	|| router_uptime_in_seconds.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set;
}

bool Igmp::Standby::DefaultContext::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(interface_name.operation)
	|| is_set(on_off.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation);
}

std::string Igmp::Standby::DefaultContext::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.operation)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Summary::Interface::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "on-off")
    {
        on_off = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOns()
{
    yang_name = "interface-state-ons"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-on")
    {
        for(auto const & c : interface_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(std::move(c));
        children[segment_path] = interface_state_on.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOns::get_children()
{
    for (auto const & c : interface_state_on)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOns::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons";
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-state-ons/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on";
}

Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroups()
{
    yang_name = "detail-groups"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::DetailGroups::~DetailGroups()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-group")
    {
        for(auto const & c : detail_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(std::move(c));
        children[segment_path] = detail_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::get_children()
{
    for (auto const & c : detail_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;
    children["group-info"] = group_info;

    yang_name = "detail-group"; yang_parent_name = "detail-groups";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return group_address.is_set
	|| interface_name.is_set
	|| is_host_exclude_mode.is_set
	|| is_router_exclude_mode.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_host_exclude_mode.operation)
	|| is_set(is_router_exclude_mode.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.operation)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.operation)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-info")
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
        else
        {
            group_info = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo>();
            group_info->parent = this;
            children["group-info"] = group_info;
        }
        return children.at("group-info");
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::get_children()
{
    if(children.find("group-info") == children.end())
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    last_reporter->parent = this;
    children["last-reporter"] = last_reporter;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "group-info"; yang_parent_name = "detail-group";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
        else
        {
            last_reporter = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
            last_reporter->parent = this;
            children["last-reporter"] = last_reporter;
        }
        return children.at("last-reporter");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("last-reporter") == children.end())
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::Source()
    :
    expiration_time{YType::int32, "expiration-time"},
    flags{YType::int32, "flags"},
    is_added{YType::boolean, "is-added"},
    is_forward{YType::boolean, "is-forward"},
    is_local{YType::boolean, "is-local"},
    is_remote{YType::boolean, "is-remote"},
    is_we_report{YType::boolean, "is-we-report"},
    uptime{YType::uint64, "uptime"}
    	,
    source_address(std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "source"; yang_parent_name = "detail-group";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::has_data() const
{
    return expiration_time.is_set
	|| flags.is_set
	|| is_added.is_set
	|| is_forward.is_set
	|| is_local.is_set
	|| is_remote.is_set
	|| is_we_report.is_set
	|| uptime.is_set
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(flags.operation)
	|| is_set(is_added.operation)
	|| is_set(is_forward.operation)
	|| is_set(is_local.operation)
	|| is_set(is_remote.operation)
	|| is_set(is_we_report.operation)
	|| is_set(uptime.operation)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.operation)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.operation)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.operation)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_children()
{
    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "source";
}

Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/detail-groups/detail-group/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups()
{
    yang_name = "non-active-groups"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::NonActiveGroups::~NonActiveGroups()
{
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::NonActiveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "non-active-groups")
    {
        for(auto const & c : non_active_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(std::move(c));
        children[segment_path] = non_active_groups.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::NonActiveGroups::get_children()
{
    for (auto const & c : non_active_groups)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::NonActiveGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(reason_for_non_activity.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.operation)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
    }
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "non-active-groups";
}

Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::SsmMaps::SsmMaps()
{
    yang_name = "ssm-maps"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::SsmMaps::~SsmMaps()
{
}

bool Igmp::Standby::DefaultContext::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-map")
    {
        for(auto const & c : ssm_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(std::move(c));
        children[segment_path] = ssm_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMaps::get_children()
{
    for (auto const & c : ssm_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::SsmMaps::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps";
}

Igmp::Standby::DefaultContext::SsmMaps::SsmMap::~SsmMap()
{
}

bool Igmp::Standby::DefaultContext::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::DefaultContext::SsmMaps::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| is_set(ssm_map_type.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::DefaultContext::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMaps::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMaps::SsmMap::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::SsmMaps::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "ssm-map";
}

Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-maps/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroups()
{
    yang_name = "explicit-groups"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::ExplicitGroups::~ExplicitGroups()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-group")
    {
        for(auto const & c : explicit_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(std::move(c));
        children[segment_path] = explicit_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::get_children()
{
    for (auto const & c : explicit_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;
    children["group-info"] = group_info;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return exclude_hosts.is_set
	|| group_address.is_set
	|| include_hosts.is_set
	|| interface_name.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exclude_hosts.operation)
	|| is_set(group_address.operation)
	|| is_set(include_hosts.operation)
	|| is_set(interface_name.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.operation)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.operation)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-info")
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
        else
        {
            group_info = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>();
            group_info->parent = this;
            children["group-info"] = group_info;
        }
        return children.at("group-info");
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_children()
{
    if(children.find("group-info") == children.end())
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
    }

    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    last_reporter->parent = this;
    children["last-reporter"] = last_reporter;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "group-info"; yang_parent_name = "explicit-group";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
        else
        {
            last_reporter = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
            last_reporter->parent = this;
            children["last-reporter"] = last_reporter;
        }
        return children.at("last-reporter");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("last-reporter") == children.end())
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "host"; yang_parent_name = "explicit-group";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_data() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_data())
            return true;
    }
    return expiration_time.is_set
	|| is_exclude.is_set
	|| source_count.is_set
	|| uptime.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(is_exclude.operation)
	|| is_set(source_count.operation)
	|| is_set(uptime.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.operation)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "source-address")
    {
        for(auto const & c : source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(std::move(c));
        children[segment_path] = source_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    for (auto const & c : source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "host";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "host";
}

Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceTable::~InterfaceTable()
{
}

bool Igmp::Standby::DefaultContext::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceTable::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::~Interface()
{
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceTable::Interface::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(std::move(c));
        children[segment_path] = interface_old_format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormats::get_children()
{
    for (auto const & c : interface_old_format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format";
}

Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormats()
{
    yang_name = "interface-state-off-old-formats"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::~InterfaceStateOffOldFormats()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-formats";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-off-old-format")
    {
        for(auto const & c : interface_state_off_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat>();
        c->parent = this;
        interface_state_off_old_format.push_back(std::move(c));
        children[segment_path] = interface_state_off_old_format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::get_children()
{
    for (auto const & c : interface_state_off_old_format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::InterfaceStateOffOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-state-off-old-format"; yang_parent_name = "interface-state-off-old-formats";
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::~InterfaceStateOffOldFormat()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-state-off-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off-old-format";
}

Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{
    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::~InterfaceUnicastQosAdjusts()
{
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-unicast-qos-adjust")
    {
        for(auto const & c : interface_unicast_qos_adjust)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust>();
        c->parent = this;
        interface_unicast_qos_adjust.push_back(std::move(c));
        children[segment_path] = interface_unicast_qos_adjust.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_children()
{
    for (auto const & c : interface_unicast_qos_adjust)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{
    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts";
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::~InterfaceUnicastQosAdjust()
{
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_data() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_virtual_access.is_set
	|| rate.is_set
	|| rate_decrements.is_set
	|| rate_increments.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_operation() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_virtual_access.operation)
	|| is_set(rate.operation)
	|| is_set(rate_decrements.operation)
	|| is_set(rate_increments.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-unicast-qos-adjusts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.operation)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.operation)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.operation)) leaf_name_data.push_back(rate_increments.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update")
    {
        for(auto const & c : update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update>();
        c->parent = this;
        update.push_back(std::move(c));
        children[segment_path] = update.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_children()
{
    for (auto const & c : update)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::Update()
    :
    is_add{YType::boolean, "is-add"},
    received_time{YType::uint64, "received-time"},
    weight{YType::uint32, "weight"}
    	,
    group_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>())
	,source_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust";
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::~Update()
{
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_data() const
{
    return is_add.is_set
	|| received_time.is_set
	|| weight.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(is_add.operation)
	|| is_set(received_time.operation)
	|| is_set(weight.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.operation)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.operation)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-add")
    {
        is_add = value;
    }
    if(value_path == "received-time")
    {
        received_time = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::Ranges::~Ranges()
{
}

bool Igmp::Standby::DefaultContext::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Ranges::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    yang_name = "range"; yang_parent_name = "ranges";
}

Igmp::Standby::DefaultContext::Ranges::Range::~Range()
{
}

bool Igmp::Standby::DefaultContext::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::DefaultContext::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_mask.operation)
	|| is_set(is_stale.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.operation)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Ranges::Range::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(std::move(c));
        children[segment_path] = ifrs_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::get_children()
{
    for (auto const & c : ifrs_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;
    children["igmp-interface-entry"] = igmp_interface_entry;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(join_group_count.operation)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ifrs-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.operation)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry != nullptr)
        {
            children["igmp-interface-entry"] = igmp_interface_entry;
        }
        else
        {
            igmp_interface_entry = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
            igmp_interface_entry->parent = this;
            children["igmp-interface-entry"] = igmp_interface_entry;
        }
        return children.at("igmp-interface-entry");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_children()
{
    if(children.find("igmp-interface-entry") == children.end())
    {
        if(igmp_interface_entry != nullptr)
        {
            children["igmp-interface-entry"] = igmp_interface_entry;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
    :
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
{
    return configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpInterfaceEntry' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::TrafficCounters::TrafficCounters()
    :
    auxillary_data_length_errors{YType::uint32, "auxillary-data-length-errors"},
    bad_scope_errors{YType::uint32, "bad-scope-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_errors{YType::uint32, "format-errors"},
    get_packet_failure{YType::uint32, "get-packet-failure"},
    input_disabled_idb{YType::uint32, "input-disabled-idb"},
    input_dvmrp{YType::uint32, "input-dvmrp"},
    input_leaves{YType::uint32, "input-leaves"},
    input_martian_address{YType::uint32, "input-martian-address"},
    input_mtrace{YType::uint32, "input-mtrace"},
    input_no_assigned_vrf_id{YType::uint32, "input-no-assigned-vrf-id"},
    input_no_idb{YType::uint32, "input-no-idb"},
    input_no_platform_support_mtrace{YType::uint32, "input-no-platform-support-mtrace"},
    input_no_vrf_in_idb{YType::uint32, "input-no-vrf-in-idb"},
    input_no_vrf_mtrace{YType::uint32, "input-no-vrf-mtrace"},
    input_pim{YType::uint32, "input-pim"},
    input_queries{YType::uint32, "input-queries"},
    input_reports{YType::uint32, "input-reports"},
    invalid_source_address_errors{YType::uint32, "invalid-source-address-errors"},
    miscellaneous_errors{YType::uint32, "miscellaneous-errors"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    output_dvmrp{YType::uint32, "output-dvmrp"},
    output_leaves{YType::uint32, "output-leaves"},
    output_mtrace{YType::uint32, "output-mtrace"},
    output_no_parent_interface_handle{YType::uint32, "output-no-parent-interface-handle"},
    output_pim{YType::uint32, "output-pim"},
    output_queries{YType::uint32, "output-queries"},
    output_reports{YType::uint32, "output-reports"},
    packet_manager_input_errors{YType::uint32, "packet-manager-input-errors"},
    packet_manager_output_errors{YType::uint32, "packet-manager-output-errors"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    receive_socket_errors{YType::uint32, "receive-socket-errors"},
    socket_errors{YType::uint32, "socket-errors"}
{
    yang_name = "traffic-counters"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Igmp::Standby::DefaultContext::TrafficCounters::has_data() const
{
    return auxillary_data_length_errors.is_set
	|| bad_scope_errors.is_set
	|| checksum_errors.is_set
	|| elapsed_time.is_set
	|| format_errors.is_set
	|| get_packet_failure.is_set
	|| input_disabled_idb.is_set
	|| input_dvmrp.is_set
	|| input_leaves.is_set
	|| input_martian_address.is_set
	|| input_mtrace.is_set
	|| input_no_assigned_vrf_id.is_set
	|| input_no_idb.is_set
	|| input_no_platform_support_mtrace.is_set
	|| input_no_vrf_in_idb.is_set
	|| input_no_vrf_mtrace.is_set
	|| input_pim.is_set
	|| input_queries.is_set
	|| input_reports.is_set
	|| invalid_source_address_errors.is_set
	|| miscellaneous_errors.is_set
	|| no_socket_connection.is_set
	|| output_dvmrp.is_set
	|| output_leaves.is_set
	|| output_mtrace.is_set
	|| output_no_parent_interface_handle.is_set
	|| output_pim.is_set
	|| output_queries.is_set
	|| output_reports.is_set
	|| packet_manager_input_errors.is_set
	|| packet_manager_output_errors.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| receive_socket_errors.is_set
	|| socket_errors.is_set;
}

bool Igmp::Standby::DefaultContext::TrafficCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(auxillary_data_length_errors.operation)
	|| is_set(bad_scope_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_errors.operation)
	|| is_set(get_packet_failure.operation)
	|| is_set(input_disabled_idb.operation)
	|| is_set(input_dvmrp.operation)
	|| is_set(input_leaves.operation)
	|| is_set(input_martian_address.operation)
	|| is_set(input_mtrace.operation)
	|| is_set(input_no_assigned_vrf_id.operation)
	|| is_set(input_no_idb.operation)
	|| is_set(input_no_platform_support_mtrace.operation)
	|| is_set(input_no_vrf_in_idb.operation)
	|| is_set(input_no_vrf_mtrace.operation)
	|| is_set(input_pim.operation)
	|| is_set(input_queries.operation)
	|| is_set(input_reports.operation)
	|| is_set(invalid_source_address_errors.operation)
	|| is_set(miscellaneous_errors.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(output_dvmrp.operation)
	|| is_set(output_leaves.operation)
	|| is_set(output_mtrace.operation)
	|| is_set(output_no_parent_interface_handle.operation)
	|| is_set(output_pim.operation)
	|| is_set(output_queries.operation)
	|| is_set(output_reports.operation)
	|| is_set(packet_manager_input_errors.operation)
	|| is_set(packet_manager_output_errors.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(receive_socket_errors.operation)
	|| is_set(socket_errors.operation);
}

std::string Igmp::Standby::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.operation)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.operation)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.operation)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.operation)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.operation)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.operation)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.operation)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.operation)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.operation)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.operation)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.operation)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.operation)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.operation)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.operation)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.operation)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.operation)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.operation)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.operation)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.operation)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.operation)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.operation)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.operation)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.operation)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.operation)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.operation)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.operation)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.operation)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.operation)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.operation)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::TrafficCounters::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
    }
}

Igmp::Standby::DefaultContext::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::Groups::~Groups()
{
}

bool Igmp::Standby::DefaultContext::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::Groups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::Groups::Group::Group()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    last_reporter->parent = this;
    children["last-reporter"] = last_reporter;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "group"; yang_parent_name = "groups";
}

Igmp::Standby::DefaultContext::Groups::Group::~Group()
{
}

bool Igmp::Standby::DefaultContext::Groups::Group::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| group_address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Standby::DefaultContext::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
        else
        {
            last_reporter = std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::LastReporter>();
            last_reporter->parent = this;
            children["last-reporter"] = last_reporter;
        }
        return children.at("last-reporter");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Standby::DefaultContext::Groups::Group::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Groups::Group::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("last-reporter") == children.end())
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Igmp::Standby::DefaultContext::Groups::Group::LastReporter::~LastReporter()
{
}

bool Igmp::Standby::DefaultContext::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::Groups::Group::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Groups::Group::LastReporter::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::GroupSummary::~GroupSummary()
{
}

bool Igmp::Standby::DefaultContext::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Igmp::Standby::DefaultContext::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(groutes.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(sg_routes.operation);
}

std::string Igmp::Standby::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.operation)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.operation)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GroupSummary::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "groutes")
    {
        groutes = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
    }
}

Igmp::Standby::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Igmp::Standby::DefaultContext::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Igmp::Standby::DefaultContext::IfrsInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Igmp::Standby::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::IfrsInterfaceSummary::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GlobalInterfaceTable::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/global-interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::SsmMapDetails::~SsmMapDetails()
{
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-map-detail")
    {
        for(auto const & c : ssm_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(std::move(c));
        children[segment_path] = ssm_map_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMapDetails::get_children()
{
    for (auto const & c : ssm_map_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;
    children["map-info"] = map_info;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::has_data() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| expiration_time.is_set
	|| group_address.is_set
	|| query_interval.is_set
	|| response_pending.is_set
	|| ssm_map_type.is_set
	|| (map_info !=  nullptr && map_info->has_data());
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(elapsed_time.operation)
	|| is_set(expiration_time.operation)
	|| is_set(group_address.operation)
	|| is_set(query_interval.operation)
	|| is_set(response_pending.operation)
	|| is_set(ssm_map_type.operation)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-map-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.operation)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "map-info")
    {
        if(map_info != nullptr)
        {
            children["map-info"] = map_info;
        }
        else
        {
            map_info = std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>();
            map_info->parent = this;
            children["map-info"] = map_info;
        }
        return children.at("map-info");
    }

    if(child_yang_name == "sources")
    {
        for(auto const & c : sources)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(std::move(c));
        children[segment_path] = sources.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_children()
{
    if(children.find("map-info") == children.end())
    {
        if(map_info != nullptr)
        {
            children["map-info"] = map_info;
        }
    }

    for (auto const & c : sources)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-off")
    {
        for(auto const & c : interface_state_off)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(std::move(c));
        children[segment_path] = interface_state_off.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffs::get_children()
{
    for (auto const & c : interface_state_off)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-state-offs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOns()
{
    yang_name = "interface-old-format-state-ons"; yang_parent_name = "default-context";
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::~InterfaceOldFormatStateOns()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-ons";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-old-format-state-on")
    {
        for(auto const & c : interface_old_format_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn>();
        c->parent = this;
        interface_old_format_state_on.push_back(std::move(c));
        children[segment_path] = interface_old_format_state_on.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::get_children()
{
    for (auto const & c : interface_old_format_state_on)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/standby/default-context/interface-old-format-state-ons/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Active()
    :
    default_context(std::make_shared<Igmp::Active::DefaultContext>())
	,process(std::make_shared<Igmp::Active::Process>())
	,vrfs(std::make_shared<Igmp::Active::Vrfs>())
{
    default_context->parent = this;
    children["default-context"] = default_context;

    process->parent = this;
    children["process"] = process;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "active"; yang_parent_name = "igmp";
}

Igmp::Active::~Active()
{
}

bool Igmp::Active::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Igmp::Active::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Igmp::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath Igmp::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
        else
        {
            default_context = std::make_shared<Igmp::Active::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context;
        }
        return children.at("default-context");
    }

    if(child_yang_name == "process")
    {
        if(process != nullptr)
        {
            children["process"] = process;
        }
        else
        {
            process = std::make_shared<Igmp::Active::Process>();
            process->parent = this;
            children["process"] = process;
        }
        return children.at("process");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Igmp::Active::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
    }

    if(children.find("process") == children.end())
    {
        if(process != nullptr)
        {
            children["process"] = process;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Igmp::Active::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "active";
}

Igmp::Active::Vrfs::~Vrfs()
{
}

bool Igmp::Active::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    detail_groups(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups>())
	,explicit_groups(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups>())
	,global_interface_table(std::make_shared<Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Igmp::Active::Vrfs::Vrf::GroupSummary>())
	,groups(std::make_shared<Igmp::Active::Vrfs::Vrf::Groups>())
	,ifrs_interface_summary(std::make_shared<Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Igmp::Active::Vrfs::Vrf::IfrsInterfaces>())
	,interface_old_format_state_ons(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns>())
	,interface_old_formats(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceOldFormats>())
	,interface_state_off_old_formats(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats>())
	,interface_state_offs(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns>())
	,interface_table(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups>())
	,ranges(std::make_shared<Igmp::Active::Vrfs::Vrf::Ranges>())
	,ssm_map_details(std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMapDetails>())
	,ssm_maps(std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMaps>())
	,summary(std::make_shared<Igmp::Active::Vrfs::Vrf::Summary>())
	,traffic_counters(std::make_shared<Igmp::Active::Vrfs::Vrf::TrafficCounters>())
{
    detail_groups->parent = this;
    children["detail-groups"] = detail_groups;

    explicit_groups->parent = this;
    children["explicit-groups"] = explicit_groups;

    global_interface_table->parent = this;
    children["global-interface-table"] = global_interface_table;

    group_summary->parent = this;
    children["group-summary"] = group_summary;

    groups->parent = this;
    children["groups"] = groups;

    ifrs_interface_summary->parent = this;
    children["ifrs-interface-summary"] = ifrs_interface_summary;

    ifrs_interfaces->parent = this;
    children["ifrs-interfaces"] = ifrs_interfaces;

    interface_old_format_state_ons->parent = this;
    children["interface-old-format-state-ons"] = interface_old_format_state_ons;

    interface_old_formats->parent = this;
    children["interface-old-formats"] = interface_old_formats;

    interface_state_off_old_formats->parent = this;
    children["interface-state-off-old-formats"] = interface_state_off_old_formats;

    interface_state_offs->parent = this;
    children["interface-state-offs"] = interface_state_offs;

    interface_state_ons->parent = this;
    children["interface-state-ons"] = interface_state_ons;

    interface_table->parent = this;
    children["interface-table"] = interface_table;

    interface_unicast_qos_adjusts->parent = this;
    children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;

    non_active_groups->parent = this;
    children["non-active-groups"] = non_active_groups;

    ranges->parent = this;
    children["ranges"] = ranges;

    ssm_map_details->parent = this;
    children["ssm-map-details"] = ssm_map_details;

    ssm_maps->parent = this;
    children["ssm-maps"] = ssm_maps;

    summary->parent = this;
    children["summary"] = summary;

    traffic_counters->parent = this;
    children["traffic-counters"] = traffic_counters;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Igmp::Active::Vrfs::Vrf::~Vrf()
{
}

bool Igmp::Active::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_data())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_data())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_data())
	|| (non_active_groups !=  nullptr && non_active_groups->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_data())
	|| (ssm_maps !=  nullptr && ssm_maps->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data());
}

bool Igmp::Active::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_operation())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_operation())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_operation())
	|| (non_active_groups !=  nullptr && non_active_groups->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_operation())
	|| (ssm_maps !=  nullptr && ssm_maps->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-groups")
    {
        if(detail_groups != nullptr)
        {
            children["detail-groups"] = detail_groups;
        }
        else
        {
            detail_groups = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups>();
            detail_groups->parent = this;
            children["detail-groups"] = detail_groups;
        }
        return children.at("detail-groups");
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups != nullptr)
        {
            children["explicit-groups"] = explicit_groups;
        }
        else
        {
            explicit_groups = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups>();
            explicit_groups->parent = this;
            children["explicit-groups"] = explicit_groups;
        }
        return children.at("explicit-groups");
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table != nullptr)
        {
            children["global-interface-table"] = global_interface_table;
        }
        else
        {
            global_interface_table = std::make_shared<Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable>();
            global_interface_table->parent = this;
            children["global-interface-table"] = global_interface_table;
        }
        return children.at("global-interface-table");
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary != nullptr)
        {
            children["group-summary"] = group_summary;
        }
        else
        {
            group_summary = std::make_shared<Igmp::Active::Vrfs::Vrf::GroupSummary>();
            group_summary->parent = this;
            children["group-summary"] = group_summary;
        }
        return children.at("group-summary");
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<Igmp::Active::Vrfs::Vrf::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary != nullptr)
        {
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
        else
        {
            ifrs_interface_summary = std::make_shared<Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary>();
            ifrs_interface_summary->parent = this;
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
        return children.at("ifrs-interface-summary");
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        else
        {
            ifrs_interfaces = std::make_shared<Igmp::Active::Vrfs::Vrf::IfrsInterfaces>();
            ifrs_interfaces->parent = this;
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        return children.at("ifrs-interfaces");
    }

    if(child_yang_name == "interface-old-format-state-ons")
    {
        if(interface_old_format_state_ons != nullptr)
        {
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
        else
        {
            interface_old_format_state_ons = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns>();
            interface_old_format_state_ons->parent = this;
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
        return children.at("interface-old-format-state-ons");
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
        else
        {
            interface_old_formats = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceOldFormats>();
            interface_old_formats->parent = this;
            children["interface-old-formats"] = interface_old_formats;
        }
        return children.at("interface-old-formats");
    }

    if(child_yang_name == "interface-state-off-old-formats")
    {
        if(interface_state_off_old_formats != nullptr)
        {
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
        else
        {
            interface_state_off_old_formats = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats>();
            interface_state_off_old_formats->parent = this;
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
        return children.at("interface-state-off-old-formats");
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs != nullptr)
        {
            children["interface-state-offs"] = interface_state_offs;
        }
        else
        {
            interface_state_offs = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOffs>();
            interface_state_offs->parent = this;
            children["interface-state-offs"] = interface_state_offs;
        }
        return children.at("interface-state-offs");
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons != nullptr)
        {
            children["interface-state-ons"] = interface_state_ons;
        }
        else
        {
            interface_state_ons = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns>();
            interface_state_ons->parent = this;
            children["interface-state-ons"] = interface_state_ons;
        }
        return children.at("interface-state-ons");
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
        else
        {
            interface_table = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceTable>();
            interface_table->parent = this;
            children["interface-table"] = interface_table;
        }
        return children.at("interface-table");
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts != nullptr)
        {
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
        else
        {
            interface_unicast_qos_adjusts = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts>();
            interface_unicast_qos_adjusts->parent = this;
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
        return children.at("interface-unicast-qos-adjusts");
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups != nullptr)
        {
            children["non-active-groups"] = non_active_groups;
        }
        else
        {
            non_active_groups = std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups>();
            non_active_groups->parent = this;
            children["non-active-groups"] = non_active_groups;
        }
        return children.at("non-active-groups");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Igmp::Active::Vrfs::Vrf::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details != nullptr)
        {
            children["ssm-map-details"] = ssm_map_details;
        }
        else
        {
            ssm_map_details = std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMapDetails>();
            ssm_map_details->parent = this;
            children["ssm-map-details"] = ssm_map_details;
        }
        return children.at("ssm-map-details");
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps != nullptr)
        {
            children["ssm-maps"] = ssm_maps;
        }
        else
        {
            ssm_maps = std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMaps>();
            ssm_maps->parent = this;
            children["ssm-maps"] = ssm_maps;
        }
        return children.at("ssm-maps");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Igmp::Active::Vrfs::Vrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
        else
        {
            traffic_counters = std::make_shared<Igmp::Active::Vrfs::Vrf::TrafficCounters>();
            traffic_counters->parent = this;
            children["traffic-counters"] = traffic_counters;
        }
        return children.at("traffic-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::get_children()
{
    if(children.find("detail-groups") == children.end())
    {
        if(detail_groups != nullptr)
        {
            children["detail-groups"] = detail_groups;
        }
    }

    if(children.find("explicit-groups") == children.end())
    {
        if(explicit_groups != nullptr)
        {
            children["explicit-groups"] = explicit_groups;
        }
    }

    if(children.find("global-interface-table") == children.end())
    {
        if(global_interface_table != nullptr)
        {
            children["global-interface-table"] = global_interface_table;
        }
    }

    if(children.find("group-summary") == children.end())
    {
        if(group_summary != nullptr)
        {
            children["group-summary"] = group_summary;
        }
    }

    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("ifrs-interface-summary") == children.end())
    {
        if(ifrs_interface_summary != nullptr)
        {
            children["ifrs-interface-summary"] = ifrs_interface_summary;
        }
    }

    if(children.find("ifrs-interfaces") == children.end())
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
    }

    if(children.find("interface-old-format-state-ons") == children.end())
    {
        if(interface_old_format_state_ons != nullptr)
        {
            children["interface-old-format-state-ons"] = interface_old_format_state_ons;
        }
    }

    if(children.find("interface-old-formats") == children.end())
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
    }

    if(children.find("interface-state-off-old-formats") == children.end())
    {
        if(interface_state_off_old_formats != nullptr)
        {
            children["interface-state-off-old-formats"] = interface_state_off_old_formats;
        }
    }

    if(children.find("interface-state-offs") == children.end())
    {
        if(interface_state_offs != nullptr)
        {
            children["interface-state-offs"] = interface_state_offs;
        }
    }

    if(children.find("interface-state-ons") == children.end())
    {
        if(interface_state_ons != nullptr)
        {
            children["interface-state-ons"] = interface_state_ons;
        }
    }

    if(children.find("interface-table") == children.end())
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
    }

    if(children.find("interface-unicast-qos-adjusts") == children.end())
    {
        if(interface_unicast_qos_adjusts != nullptr)
        {
            children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
        }
    }

    if(children.find("non-active-groups") == children.end())
    {
        if(non_active_groups != nullptr)
        {
            children["non-active-groups"] = non_active_groups;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("ssm-map-details") == children.end())
    {
        if(ssm_map_details != nullptr)
        {
            children["ssm-map-details"] = ssm_map_details;
        }
    }

    if(children.find("ssm-maps") == children.end())
    {
        if(ssm_maps != nullptr)
        {
            children["ssm-maps"] = ssm_maps;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("traffic-counters") == children.end())
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Igmp::Active::Vrfs::Vrf::Summary::Summary()
    :
    disabled_interface_count{YType::uint32, "disabled-interface-count"},
    enabled_interface_count{YType::uint32, "enabled-interface-count"},
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    is_disabled{YType::boolean, "is-disabled"},
    node_low_memory{YType::boolean, "node-low-memory"},
    robustness{YType::uint32, "robustness"},
    supported_interfaces{YType::uint32, "supported-interfaces"},
    tunnel_mte_config_count{YType::uint32, "tunnel-mte-config-count"},
    unsupported_interfaces{YType::uint32, "unsupported-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool Igmp::Active::Vrfs::Vrf::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return disabled_interface_count.is_set
	|| enabled_interface_count.is_set
	|| group_count.is_set
	|| group_limit.is_set
	|| is_disabled.is_set
	|| node_low_memory.is_set
	|| robustness.is_set
	|| supported_interfaces.is_set
	|| tunnel_mte_config_count.is_set
	|| unsupported_interfaces.is_set;
}

bool Igmp::Active::Vrfs::Vrf::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disabled_interface_count.operation)
	|| is_set(enabled_interface_count.operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(is_disabled.operation)
	|| is_set(node_low_memory.operation)
	|| is_set(robustness.operation)
	|| is_set(supported_interfaces.operation)
	|| is_set(tunnel_mte_config_count.operation)
	|| is_set(unsupported_interfaces.operation);
}

std::string Igmp::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.operation)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.operation)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.operation)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.operation)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.operation)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.operation)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::Summary::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::Summary::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
    }
}

Igmp::Active::Vrfs::Vrf::Summary::Interface::Interface()
    :
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    interface_name{YType::str, "interface-name"},
    on_off{YType::boolean, "on-off"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

Igmp::Active::Vrfs::Vrf::Summary::Interface::~Interface()
{
}

bool Igmp::Active::Vrfs::Vrf::Summary::Interface::has_data() const
{
    return group_count.is_set
	|| group_limit.is_set
	|| interface_name.is_set
	|| on_off.is_set
	|| parent_ifhandle.is_set
	|| router_uptime_in_seconds.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set;
}

bool Igmp::Active::Vrfs::Vrf::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(interface_name.operation)
	|| is_set(on_off.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation);
}

std::string Igmp::Active::Vrfs::Vrf::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.operation)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::Summary::Interface::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "on-off")
    {
        on_off = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOns()
{
    yang_name = "interface-state-ons"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::Vrf::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::InterfaceStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOns' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-on")
    {
        for(auto const & c : interface_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(std::move(c));
        children[segment_path] = interface_state_on.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::InterfaceStateOns::get_children()
{
    for (auto const & c : interface_state_on)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::InterfaceStateOns::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons";
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOn' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
        else
        {
            querier_address = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
            querier_address->parent = this;
            children["querier-address"] = querier_address;
        }
        return children.at("querier-address");
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
        else
        {
            subscriber_address = std::make_shared<Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    if(children.find("querier-address") == children.end())
    {
        if(querier_address != nullptr)
        {
            children["querier-address"] = querier_address;
        }
    }

    if(children.find("subscriber-address") == children.end())
    {
        if(subscriber_address != nullptr)
        {
            children["subscriber-address"] = subscriber_address;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-on";
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-on";
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on";
}

Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroups()
{
    yang_name = "detail-groups"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::~DetailGroups()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-group")
    {
        for(auto const & c : detail_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(std::move(c));
        children[segment_path] = detail_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::get_children()
{
    for (auto const & c : detail_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;
    children["group-info"] = group_info;

    yang_name = "detail-group"; yang_parent_name = "detail-groups";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return group_address.is_set
	|| interface_name.is_set
	|| is_host_exclude_mode.is_set
	|| is_router_exclude_mode.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_host_exclude_mode.operation)
	|| is_set(is_router_exclude_mode.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.operation)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.operation)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-info")
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
        else
        {
            group_info = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>();
            group_info->parent = this;
            children["group-info"] = group_info;
        }
        return children.at("group-info");
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_children()
{
    if(children.find("group-info") == children.end())
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
    }

    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    last_reporter->parent = this;
    children["last-reporter"] = last_reporter;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "group-info"; yang_parent_name = "detail-group";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
        else
        {
            last_reporter = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
            last_reporter->parent = this;
            children["last-reporter"] = last_reporter;
        }
        return children.at("last-reporter");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("last-reporter") == children.end())
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::Source()
    :
    expiration_time{YType::int32, "expiration-time"},
    flags{YType::int32, "flags"},
    is_added{YType::boolean, "is-added"},
    is_forward{YType::boolean, "is-forward"},
    is_local{YType::boolean, "is-local"},
    is_remote{YType::boolean, "is-remote"},
    is_we_report{YType::boolean, "is-we-report"},
    uptime{YType::uint64, "uptime"}
    	,
    source_address(std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "source"; yang_parent_name = "detail-group";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_data() const
{
    return expiration_time.is_set
	|| flags.is_set
	|| is_added.is_set
	|| is_forward.is_set
	|| is_local.is_set
	|| is_remote.is_set
	|| is_we_report.is_set
	|| uptime.is_set
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(flags.operation)
	|| is_set(is_added.operation)
	|| is_set(is_forward.operation)
	|| is_set(is_local.operation)
	|| is_set(is_remote.operation)
	|| is_set(is_we_report.operation)
	|| is_set(uptime.operation)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.operation)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.operation)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.operation)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_children()
{
    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "source";
}

Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups()
{
    yang_name = "non-active-groups"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::~NonActiveGroups()
{
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::Vrf::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::NonActiveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "non-active-groups")
    {
        for(auto const & c : non_active_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(std::move(c));
        children[segment_path] = non_active_groups.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::NonActiveGroups::get_children()
{
    for (auto const & c : non_active_groups)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::NonActiveGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups";
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(reason_for_non_activity.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups_' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.operation)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
    }
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "non-active-groups";
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "non-active-groups";
}

Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMaps()
{
    yang_name = "ssm-maps"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::SsmMaps::~SsmMaps()
{
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::Vrf::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::SsmMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMaps' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ssm-map")
    {
        for(auto const & c : ssm_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(std::move(c));
        children[segment_path] = ssm_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::SsmMaps::get_children()
{
    for (auto const & c : ssm_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::SsmMaps::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps";
}

Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::~SsmMap()
{
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| is_set(ssm_map_type.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMap' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "ssm-map";
}

Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroups()
{
    yang_name = "explicit-groups"; yang_parent_name = "vrf";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::~ExplicitGroups()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-group")
    {
        for(auto const & c : explicit_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(std::move(c));
        children[segment_path] = explicit_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::get_children()
{
    for (auto const & c : explicit_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::set_value(const std::string & value_path, std::string value)
{
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;
    children["group-info"] = group_info;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return exclude_hosts.is_set
	|| group_address.is_set
	|| include_hosts.is_set
	|| interface_name.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exclude_hosts.operation)
	|| is_set(group_address.operation)
	|| is_set(include_hosts.operation)
	|| is_set(interface_name.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.operation)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.operation)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-info")
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
        else
        {
            group_info = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>();
            group_info->parent = this;
            children["group-info"] = group_info;
        }
        return children.at("group-info");
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_children()
{
    if(children.find("group-info") == children.end())
    {
        if(group_info != nullptr)
        {
            children["group-info"] = group_info;
        }
    }

    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    last_reporter->parent = this;
    children["last-reporter"] = last_reporter;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "group-info"; yang_parent_name = "explicit-group";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
        else
        {
            last_reporter = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
            last_reporter->parent = this;
            children["last-reporter"] = last_reporter;
        }
        return children.at("last-reporter");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("last-reporter") == children.end())
    {
        if(last_reporter != nullptr)
        {
            children["last-reporter"] = last_reporter;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "host"; yang_parent_name = "explicit-group";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_data() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_data())
            return true;
    }
    return expiration_time.is_set
	|| is_exclude.is_set
	|| source_count.is_set
	|| uptime.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(is_exclude.operation)
	|| is_set(source_count.operation)
	|| is_set(uptime.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.operation)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    if(child_yang_name == "source-address")
    {
        for(auto const & c : source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(std::move(c));
        children[segment_path] = source_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    for (auto const & c : source_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "host";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "host";
}

Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children()
{
    return children;
}

void Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}


}
}

