
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
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
    address(std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;
    children["address"] = address;

    querier_address->parent = this;
    children["querier-address"] = querier_address;

    subscriber_address->parent = this;
    children["subscriber-address"] = subscriber_address;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
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

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
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

std::string Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/interface-old-format-state-ons/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
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
            querier_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
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
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
            subscriber_address->parent = this;
            children["subscriber-address"] = subscriber_address;
        }
        return children.at("subscriber-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children()
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

void Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
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

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children()
{
    return children;
}

void Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
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

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children()
{
    return children;
}

void Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
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

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

EntityPath Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children()
{
    return children;
}

void Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
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

